/*
* MIT License
* 
* Copyright (c) 2021 Cody Tilkins
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#include "dds.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

DDSFile* dds_load(const char* path) {
	unsigned int file_size;
	
	unsigned char* filesig = 0;
	DDSFile* file = 0;
	
	unsigned int isDx10;
	
	FILE* f;
	if((f = fopen(path, "rb")) == 0)
		return 0;
	fseek(f, 0, SEEK_END);
	file_size = ftell(f);
	fseek(f, 0, SEEK_SET);
	
	filesig = malloc(4);
	if(fread(filesig, 1, 4, f) != 4)
		goto exit; // empty file
	
	if(memcmp(filesig, "DDS ", 4) != 0)
		goto exit; // not a dds file
	
	file = malloc(sizeof(DDSFile));
	if(file == 0)
		goto exit;
	memset(file, 0, sizeof(DDSFile));
	fread(file, 1, 124, f); // read into struct up to dwReserved2; (EOF header)
	
	isDx10 = memcmp(&file->ddspf.dwFourCC, "DX10", 4) == 0 ? 1 : 0;
	if(isDx10) {
		file->ddsHeaderDx10 = malloc(sizeof(DDS_HEADER_DXT10));
		if(file->ddsHeaderDx10 == 0) {
			dds_free(file);
			goto exit;
		}
		fread(file->ddsHeaderDx10, sizeof(DDS_HEADER_DXT10), 1, f);
	}
	
	file->dwFileSize = file_size;
	file->dwBufferSize = ((file_size - 124) - 4) - (isDx10 ? sizeof(DDS_HEADER_DXT10) : 0);
	
	file->blBuffer = malloc(file->dwBufferSize);
	if(file->blBuffer == 0) {
		dds_free(file);
		goto exit;
	}
	fread(file->blBuffer, file->dwBufferSize, 1, f);
	
exit:
	free(filesig);
	fclose(f);
	return file;
}

void dds_free(DDSFile* file) {
	free(file->ddsHeaderDx10);
	free(file->blBuffer);
	free(file);
}


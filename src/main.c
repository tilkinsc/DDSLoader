
#include <stdlib.h>
#include <stdio.h>

#include "dds.h"

int main(int argc, char** argv) {
	
	DDSFile* ddsfile = dds_load("res/test-dxt5.dds");
	
	printf("%p\n", ddsfile->ddsHeaderDx10);
	
	return 0;
}


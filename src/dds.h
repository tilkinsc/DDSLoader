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

#pragma once

#include <inttypes.h>

// header dwFlags
typedef enum DDSD_FLAGS {
	DDSD_CAPS			= 0x1,
	DDSD_HEIGHT			= 0x2,
	DDSD_WIDTH			= 0x4,
	DDSD_PITCH			= 0x8,
	DDSD_PIXELFORMAT	= 0x1000,
	DDSD_MIPMAPCOUNT	= 0x20000,
	DDSD_LINEARSIZE		= 0x80000,
	DDSD_DEPTH			= 0x800000
} DDSD_FLAGS;

// header dwCaps
typedef enum DDSC_FLAGS {
	DDSCAPS_COMPLEX	= 0x8,
	DDSCAPS_TEXTURE	= 0x1000,
	DDSCAPS_MIPMAP	= 0x400000
} DDSC_FLAGS;

// header dwCaps2
typedef enum DDSC_FLAGS2 {
	DDSCAPS2_CUBEMAP			= 0x200,
	DDSCAPS2_CUBEMAP_POSITIVEX	= 0x400,
	DDSCAPS2_CUBEMAP_NEGATIVEX	= 0x800,
	DDSCAPS2_CUBEMAP_POSITIVEY	= 0x1000,
	DDSCAPS2_CUBEMAP_NEGATIVEY	= 0x2000,
	DDSCAPS2_CUBEMAP_POSITIVEZ	= 0x4000,
	DDSCAPS2_CUBEMAP_NEGATIVEZ	= 0x8000,
	DDSCAPS2_VOLUME				= 0x200000
} DDSC_FLAGS2;



// pixel format dwFlags
typedef enum DDPF_FLAGS {
	DDPF_ALPHAPIXELS 	= 0x1,
	DDPF_ALPHA 			= 0x2,
	DDPF_FOURCC 		= 0x4,
	DDPF_RGB 			= 0x40,
	DDPF_YUV 			= 0x200,
	DDPF_LUMINANCE 		= 0x20000
} DDPF_FLAGS;


// DX10 dxgiFormat value
typedef enum DXGI_FORMAT { 
	DXGI_FORMAT_UNKNOWN                     = 0,
	DXGI_FORMAT_R32G32B32A32_TYPELESS       = 1,
	DXGI_FORMAT_R32G32B32A32_FLOAT          = 2,
	DXGI_FORMAT_R32G32B32A32_UINT           = 3,
	DXGI_FORMAT_R32G32B32A32_SINT           = 4,
	DXGI_FORMAT_R32G32B32_TYPELESS          = 5,
	DXGI_FORMAT_R32G32B32_FLOAT             = 6,
	DXGI_FORMAT_R32G32B32_UINT              = 7,
	DXGI_FORMAT_R32G32B32_SINT              = 8,
	DXGI_FORMAT_R16G16B16A16_TYPELESS       = 9,
	DXGI_FORMAT_R16G16B16A16_FLOAT          = 10,
	DXGI_FORMAT_R16G16B16A16_UNORM          = 11,
	DXGI_FORMAT_R16G16B16A16_UINT           = 12,
	DXGI_FORMAT_R16G16B16A16_SNORM          = 13,
	DXGI_FORMAT_R16G16B16A16_SINT           = 14,
	DXGI_FORMAT_R32G32_TYPELESS             = 15,
	DXGI_FORMAT_R32G32_FLOAT                = 16,
	DXGI_FORMAT_R32G32_UINT                 = 17,
	DXGI_FORMAT_R32G32_SINT                 = 18,
	DXGI_FORMAT_R32G8X24_TYPELESS           = 19,
	DXGI_FORMAT_D32_FLOAT_S8X24_UINT        = 20,
	DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS    = 21,
	DXGI_FORMAT_X32_TYPELESS_G8X24_UINT     = 22,
	DXGI_FORMAT_R10G10B10A2_TYPELESS        = 23,
	DXGI_FORMAT_R10G10B10A2_UNORM           = 24,
	DXGI_FORMAT_R10G10B10A2_UINT            = 25,
	DXGI_FORMAT_R11G11B10_FLOAT             = 26,
	DXGI_FORMAT_R8G8B8A8_TYPELESS           = 27,
	DXGI_FORMAT_R8G8B8A8_UNORM              = 28,
	DXGI_FORMAT_R8G8B8A8_UNORM_SRGB         = 29,
	DXGI_FORMAT_R8G8B8A8_UINT               = 30,
	DXGI_FORMAT_R8G8B8A8_SNORM              = 31,
	DXGI_FORMAT_R8G8B8A8_SINT               = 32,
	DXGI_FORMAT_R16G16_TYPELESS             = 33,
	DXGI_FORMAT_R16G16_FLOAT                = 34,
	DXGI_FORMAT_R16G16_UNORM                = 35,
	DXGI_FORMAT_R16G16_UINT                 = 36,
	DXGI_FORMAT_R16G16_SNORM                = 37,
	DXGI_FORMAT_R16G16_SINT                 = 38,
	DXGI_FORMAT_R32_TYPELESS                = 39,
	DXGI_FORMAT_D32_FLOAT                   = 40,
	DXGI_FORMAT_R32_FLOAT                   = 41,
	DXGI_FORMAT_R32_UINT                    = 42,
	DXGI_FORMAT_R32_SINT                    = 43,
	DXGI_FORMAT_R24G8_TYPELESS              = 44,
	DXGI_FORMAT_D24_UNORM_S8_UINT           = 45,
	DXGI_FORMAT_R24_UNORM_X8_TYPELESS       = 46,
	DXGI_FORMAT_X24_TYPELESS_G8_UINT        = 47,
	DXGI_FORMAT_R8G8_TYPELESS               = 48,
	DXGI_FORMAT_R8G8_UNORM                  = 49,
	DXGI_FORMAT_R8G8_UINT                   = 50,
	DXGI_FORMAT_R8G8_SNORM                  = 51,
	DXGI_FORMAT_R8G8_SINT                   = 52,
	DXGI_FORMAT_R16_TYPELESS                = 53,
	DXGI_FORMAT_R16_FLOAT                   = 54,
	DXGI_FORMAT_D16_UNORM                   = 55,
	DXGI_FORMAT_R16_UNORM                   = 56,
	DXGI_FORMAT_R16_UINT                    = 57,
	DXGI_FORMAT_R16_SNORM                   = 58,
	DXGI_FORMAT_R16_SINT                    = 59,
	DXGI_FORMAT_R8_TYPELESS                 = 60,
	DXGI_FORMAT_R8_UNORM                    = 61,
	DXGI_FORMAT_R8_UINT                     = 62,
	DXGI_FORMAT_R8_SNORM                    = 63,
	DXGI_FORMAT_R8_SINT                     = 64,
	DXGI_FORMAT_A8_UNORM                    = 65,
	DXGI_FORMAT_R1_UNORM                    = 66,
	DXGI_FORMAT_R9G9B9E5_SHAREDEXP          = 67,
	DXGI_FORMAT_R8G8_B8G8_UNORM             = 68,
	DXGI_FORMAT_G8R8_G8B8_UNORM             = 69,
	DXGI_FORMAT_BC1_TYPELESS                = 70,
	DXGI_FORMAT_BC1_UNORM                   = 71,
	DXGI_FORMAT_BC1_UNORM_SRGB              = 72,
	DXGI_FORMAT_BC2_TYPELESS                = 73,
	DXGI_FORMAT_BC2_UNORM                   = 74,
	DXGI_FORMAT_BC2_UNORM_SRGB              = 75,
	DXGI_FORMAT_BC3_TYPELESS                = 76,
	DXGI_FORMAT_BC3_UNORM                   = 77,
	DXGI_FORMAT_BC3_UNORM_SRGB              = 78,
	DXGI_FORMAT_BC4_TYPELESS                = 79,
	DXGI_FORMAT_BC4_UNORM                   = 80,
	DXGI_FORMAT_BC4_SNORM                   = 81,
	DXGI_FORMAT_BC5_TYPELESS                = 82,
	DXGI_FORMAT_BC5_UNORM                   = 83,
	DXGI_FORMAT_BC5_SNORM                   = 84,
	DXGI_FORMAT_B5G6R5_UNORM                = 85,
	DXGI_FORMAT_B5G5R5A1_UNORM              = 86,
	DXGI_FORMAT_B8G8R8A8_UNORM              = 87,
	DXGI_FORMAT_B8G8R8X8_UNORM              = 88,
	DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM  = 89,
	DXGI_FORMAT_B8G8R8A8_TYPELESS           = 90,
	DXGI_FORMAT_B8G8R8A8_UNORM_SRGB         = 91,
	DXGI_FORMAT_B8G8R8X8_TYPELESS           = 92,
	DXGI_FORMAT_B8G8R8X8_UNORM_SRGB         = 93,
	DXGI_FORMAT_BC6H_TYPELESS               = 94,
	DXGI_FORMAT_BC6H_UF16                   = 95,
	DXGI_FORMAT_BC6H_SF16                   = 96,
	DXGI_FORMAT_BC7_TYPELESS                = 97,
	DXGI_FORMAT_BC7_UNORM                   = 98,
	DXGI_FORMAT_BC7_UNORM_SRGB              = 99,
	DXGI_FORMAT_AYUV                        = 100,
	DXGI_FORMAT_Y410                        = 101,
	DXGI_FORMAT_Y416                        = 102,
	DXGI_FORMAT_NV12                        = 103,
	DXGI_FORMAT_P010                        = 104,
	DXGI_FORMAT_P016                        = 105,
	DXGI_FORMAT_420_OPAQUE                  = 106,
	DXGI_FORMAT_YUY2                        = 107,
	DXGI_FORMAT_Y210                        = 108,
	DXGI_FORMAT_Y216                        = 109,
	DXGI_FORMAT_NV11                        = 110,
	DXGI_FORMAT_AI44                        = 111,
	DXGI_FORMAT_IA44                        = 112,
	DXGI_FORMAT_P8                          = 113,
	DXGI_FORMAT_A8P8                        = 114,
	DXGI_FORMAT_B4G4R4A4_UNORM              = 115,
	DXGI_FORMAT_P208                        = 130,
	DXGI_FORMAT_V208                        = 131,
	DXGI_FORMAT_V408                        = 132,
	DXGI_FORMAT_FORCE_UINT                  = 0xffffffff
} DXGI_FORMAT;

// DX10 resourceDimension value
typedef enum D3D10_RESOURCE_DIMENSION { 
	D3D10_RESOURCE_DIMENSION_UNKNOWN    = 0,
	D3D10_RESOURCE_DIMENSION_BUFFER     = 1,
	D3D10_RESOURCE_DIMENSION_TEXTURE1D  = 2,
	D3D10_RESOURCE_DIMENSION_TEXTURE2D  = 3,
	D3D10_RESOURCE_DIMENSION_TEXTURE3D  = 4
} D3D10_RESOURCE_DIMENSION;

// DX10 miscFlag flags
typedef enum D3D10_RESOURCE_MISC_FLAG { 
	D3D10_RESOURCE_MISC_GENERATE_MIPS		= 0x1,
	D3D10_RESOURCE_MISC_SHARED				= 0x2,
	D3D10_RESOURCE_MISC_TEXTURECUBE			= 0x4,
	D3D10_RESOURCE_MISC_SHARED_KEYEDMUTEX	= 0x10,
	D3D10_RESOURCE_MISC_GDI_COMPATIBLE		= 0x20
} D3D10_RESOURCE_MISC_FLAG;

// DX10 miscFlag flags
typedef enum D3D11_RESOURCE_MISC_FLAG { 
	D3D11_RESOURCE_MISC_GENERATE_MIPS					= 0x1,
	D3D11_RESOURCE_MISC_SHARED							= 0x2,
	D3D11_RESOURCE_MISC_TEXTURECUBE						= 0x4,
	D3D11_RESOURCE_MISC_DRAWINDIRECT_ARGS				= 0x10,
	D3D11_RESOURCE_MISC_BUFFER_ALLOW_RAW_VIEWS			= 0x20,
	D3D11_RESOURCE_MISC_BUFFER_STRUCTURED				= 0x40,
	D3D11_RESOURCE_MISC_RESOURCE_CLAMP					= 0x80,
	D3D11_RESOURCE_MISC_SHARED_KEYEDMUTEX				= 0x100,
	D3D11_RESOURCE_MISC_GDI_COMPATIBLE					= 0x200,
	D3D11_RESOURCE_MISC_SHARED_NTHANDLE					= 0x800,
	D3D11_RESOURCE_MISC_RESTRICTED_CONTENT				= 0x1000,
	D3D11_RESOURCE_MISC_RESTRICT_SHARED_RESOURCE		= 0x2000,
	D3D11_RESOURCE_MISC_RESTRICT_SHARED_RESOURCE_DRIVER	= 0x4000,
	D3D11_RESOURCE_MISC_GUARDED							= 0x8000,
	D3D11_RESOURCE_MISC_TILE_POOL						= 0x20000,
	D3D11_RESOURCE_MISC_TILED							= 0x40000,
	D3D11_RESOURCE_MISC_HW_PROTECTED					= 0x80000
} D3D11_RESOURCE_MISC_FLAG;

// DX10 miscFlags2 flags
typedef enum DX10_MISC_FLAG {
	DDS_ALPHA_MODE_UNKNOWN			= 0x0,
	DDS_ALPHA_MODE_STRAIGHT			= 0x1,
	DDS_ALPHA_MODE_PREMULTIPLIED	= 0x2,
	DDS_ALPHA_MODE_OPAQUE			= 0x3,
	DDS_ALPHA_MODE_CUSTOM			= 0x4
} DX10_MISC_FLAG;



typedef struct DDS_PIXELFORMAT {
	uint32_t dwSize;
	uint32_t dwFlags;
	uint32_t dwFourCC;
	uint32_t dwRGBBitCount;
	uint32_t dwRBitMask;
	uint32_t dwGBitMask;
	uint32_t dwBBitMask;
	uint32_t dwABitMask;
} DDS_PIXELFORMAT;

typedef struct DDS_HEADER_DXT10 {
	DXGI_FORMAT					dxgiFormat;
	D3D10_RESOURCE_DIMENSION	resourceDimension;
	uint32_t					miscFlag;
	uint32_t					arraySize;
	uint32_t					miscFlags2;
} DDS_HEADER_DXT10;

typedef struct DDSFile {
	uint32_t			dwSize;
	uint32_t			dwFlags;
	uint32_t			dwHeight;
	uint32_t			dwWidth;
	uint32_t			dwPitchOrLinearSize;
	uint32_t			dwDepth;
	uint32_t			dwMipMapCount;
	uint32_t			dwReserved1[11];
	DDS_PIXELFORMAT		ddspf;
	uint32_t			dwCaps;
	uint32_t			dwCaps2;
	uint32_t			dwCaps3;
	uint32_t			dwCaps4;
	uint32_t			dwReserved2;
	DDS_HEADER_DXT10*	ddsHeaderDx10;
	uint32_t			dwFileSize;
	uint32_t			dwBufferSize;
	unsigned char*		blBuffer;
} DDSFile;


DDSFile* dds_load(const char* path);
void dds_free(DDSFile* file);



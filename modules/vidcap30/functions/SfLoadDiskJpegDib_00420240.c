/* Module: vidcap30.exe
   Function: SfLoadDiskJpegDib
   Address: 00420240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagBITMAPINFOHEADER * __stdcall SfLoadDiskJpegDib(char const *) */

tagBITMAPINFOHEADER * SfLoadDiskJpegDib(char *param_1)

{
                    /* 0x20240  83  ?SfLoadDiskJpegDib@@YGPAUtagBITMAPINFOHEADER@@PBD@Z */
  SfLoadJpegDib((HSFLANG__ *)0x0,param_1,1,(tagBITMAPINFOHEADER **)&param_1);
  return (tagBITMAPINFOHEADER *)param_1;
}



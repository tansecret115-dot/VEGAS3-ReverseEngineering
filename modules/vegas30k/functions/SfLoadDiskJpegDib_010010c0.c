/* Module: vegas30k.dll
   Function: SfLoadDiskJpegDib
   Address: 010010c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagBITMAPINFOHEADER * __stdcall SfLoadDiskJpegDib(char const *) */

tagBITMAPINFOHEADER * SfLoadDiskJpegDib(char *param_1)

{
                    /* 0x10c0  405  ?SfLoadDiskJpegDib@@YGPAUtagBITMAPINFOHEADER@@PBD@Z */
  SfLoadJpegDib((HSFLANG__ *)0x0,param_1,1,(tagBITMAPINFOHEADER **)&param_1);
  return (tagBITMAPINFOHEADER *)param_1;
}



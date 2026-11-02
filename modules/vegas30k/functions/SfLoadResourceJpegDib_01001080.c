/* Module: vegas30k.dll
   Function: SfLoadResourceJpegDib
   Address: 01001080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagBITMAPINFOHEADER * __stdcall SfLoadResourceJpegDib(struct HSFLANG__ *,char const *) */

tagBITMAPINFOHEADER * SfLoadResourceJpegDib(HSFLANG__ *param_1,char *param_2)

{
                    /* 0x1080  411
                       ?SfLoadResourceJpegDib@@YGPAUtagBITMAPINFOHEADER@@PAUHSFLANG__@@PBD@Z */
  SfLoadJpegDib(param_1,param_2,0,(tagBITMAPINFOHEADER **)&param_2);
  return (tagBITMAPINFOHEADER *)param_2;
}



/* Module: vegas30k.dll
   Function: SfLoadResourcePngDib
   Address: 01001000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagBITMAPINFOHEADER * __stdcall SfLoadResourcePngDib(struct HSFLANG__ *,char const *) */

tagBITMAPINFOHEADER * SfLoadResourcePngDib(HSFLANG__ *param_1,char *param_2)

{
                    /* 0x1000  413
                       ?SfLoadResourcePngDib@@YGPAUtagBITMAPINFOHEADER@@PAUHSFLANG__@@PBD@Z */
  SfLoadPngDib(param_1,param_2,0,(tagBITMAPINFOHEADER **)&param_2);
  return (tagBITMAPINFOHEADER *)param_2;
}



/* Module: vegas30.exe
   Function: SfLoadDiskPngDib
   Address: 00401040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagBITMAPINFOHEADER * __stdcall SfLoadDiskPngDib(char const *) */

tagBITMAPINFOHEADER * SfLoadDiskPngDib(char *param_1)

{
                    /* 0x1040  29  ?SfLoadDiskPngDib@@YGPAUtagBITMAPINFOHEADER@@PBD@Z */
  SfLoadPngDib((HSFLANG__ *)0x0,param_1,1,(tagBITMAPINFOHEADER **)&param_1);
  return (tagBITMAPINFOHEADER *)param_1;
}



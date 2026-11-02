/* Module: vegas30k.dll
   Function: SfLoadDiskPngDibEx
   Address: 01001060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfLoadDiskPngDibEx(char const *,struct tagBITMAPINFOHEADER * *) */

long SfLoadDiskPngDibEx(char *param_1,tagBITMAPINFOHEADER **param_2)

{
  long lVar1;
  
                    /* 0x1060  408  ?SfLoadDiskPngDibEx@@YGJPBDPAPAUtagBITMAPINFOHEADER@@@Z */
  lVar1 = SfLoadPngDib((HSFLANG__ *)0x0,param_1,1,param_2);
  return lVar1;
}



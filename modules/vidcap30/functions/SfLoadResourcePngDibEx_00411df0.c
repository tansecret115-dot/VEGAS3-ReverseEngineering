/* Module: vidcap30.exe
   Function: SfLoadResourcePngDibEx
   Address: 00411df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfLoadResourcePngDibEx(struct HSFLANG__ *,char const *,struct tagBITMAPINFOHEADER
   * *) */

long SfLoadResourcePngDibEx(HSFLANG__ *param_1,char *param_2,tagBITMAPINFOHEADER **param_3)

{
  long lVar1;
  
                    /* 0x11df0  92
                       ?SfLoadResourcePngDibEx@@YGJPAUHSFLANG__@@PBDPAPAUtagBITMAPINFOHEADER@@@Z */
  lVar1 = SfLoadPngDib(param_1,param_2,0,param_3);
  return lVar1;
}



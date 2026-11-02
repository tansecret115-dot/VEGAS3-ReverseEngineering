/* Module: vidcap30.exe
   Function: SfLoadResourceJpegDibEx
   Address: 00420220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfLoadResourceJpegDibEx(struct HSFLANG__ *,char const *,struct tagBITMAPINFOHEADER
   * *) */

long SfLoadResourceJpegDibEx(HSFLANG__ *param_1,char *param_2,tagBITMAPINFOHEADER **param_3)

{
  long lVar1;
  
                    /* 0x20220  90
                       ?SfLoadResourceJpegDibEx@@YGJPAUHSFLANG__@@PBDPAPAUtagBITMAPINFOHEADER@@@Z */
  lVar1 = SfLoadJpegDib(param_1,param_2,0,param_3);
  return lVar1;
}



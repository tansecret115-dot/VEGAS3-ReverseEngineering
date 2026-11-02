/* Module: vegas30.exe
   Function: SfLoadDiskJpegDibEx
   Address: 00544500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfLoadDiskJpegDibEx(char const *,struct tagBITMAPINFOHEADER * *) */

long SfLoadDiskJpegDibEx(char *param_1,tagBITMAPINFOHEADER **param_2)

{
  long lVar1;
  
                    /* 0x144500  28  ?SfLoadDiskJpegDibEx@@YGJPBDPAPAUtagBITMAPINFOHEADER@@@Z */
  lVar1 = SfLoadJpegDib((HSFLANG__ *)0x0,param_1,1,param_2);
  return lVar1;
}



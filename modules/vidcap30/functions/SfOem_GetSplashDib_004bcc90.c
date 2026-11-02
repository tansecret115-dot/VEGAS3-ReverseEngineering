/* Module: vidcap30.exe
   Function: SfOem_GetSplashDib
   Address: 004bcc90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetSplashDib(void *,struct tagBITMAPINFO * *) */

long SfOem_GetSplashDib(void *param_1,tagBITMAPINFO **param_2)

{
  int iVar1;
  LPCSTR lpString1;
  int iVar2;
  tagBITMAPINFO *local_20c;
  char local_208 [260];
  char local_104 [260];
  
                    /* 0xbcc90  114  ?SfOem_GetSplashDib@@YGJPAXPAPAUtagBITMAPINFO@@@Z */
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar1 = FUN_004bc780(param_1,"splash",2,local_208,0x104,0);
  if ((-1 < iVar1) && (local_208[0] != '\0')) {
    iVar1 = FUN_004bcdb0(param_1,local_208,(int)param_1 + 0x30c);
    if (-1 < iVar1) {
      SfPrintF(local_104,&DAT_00586f0c,(int)param_1 + 0x30c,local_208);
      lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_104);
      iVar2 = lstrcmpiA(lpString1,".jpg");
      if (iVar2 == 0) {
        SfLoadJpegDib((HSFLANG__ *)0x0,local_104,1,(tagBITMAPINFOHEADER **)&local_20c);
        *param_2 = local_20c;
        return iVar1;
      }
      iVar2 = lstrcmpiA(lpString1,".png");
      if (iVar2 == 0) {
        SfLoadPngDib((HSFLANG__ *)0x0,local_104,1,(tagBITMAPINFOHEADER **)&local_20c);
        *param_2 = local_20c;
      }
    }
  }
  return iVar1;
}



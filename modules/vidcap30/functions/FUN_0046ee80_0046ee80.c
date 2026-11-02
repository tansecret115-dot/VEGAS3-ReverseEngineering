/* Module: vidcap30.exe
   Function: FUN_0046ee80
   Address: 0046ee80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ee80(void)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  if (DAT_005bc414 != (LPCVOID)0x0) {
    FUN_0046fca0();
    pMem = DAT_005bc414;
    if (DAT_005bc414 != (LPCVOID)0x0) {
      FUN_0046e290();
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    DAT_005bc414 = (LPCVOID)0x0;
  }
  return;
}



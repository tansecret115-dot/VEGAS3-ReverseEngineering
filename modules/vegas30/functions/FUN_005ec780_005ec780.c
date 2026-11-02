/* Module: vegas30.exe
   Function: FUN_005ec780
   Address: 005ec780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ec780(void)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  if (DAT_0065e0f8 != (LPCVOID)0x0) {
    FUN_005ed570();
    pMem = DAT_0065e0f8;
    if (DAT_0065e0f8 != (LPCVOID)0x0) {
      FUN_005eba10();
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    DAT_0065e0f8 = (LPCVOID)0x0;
  }
  return;
}



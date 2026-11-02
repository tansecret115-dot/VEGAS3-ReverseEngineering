/* Module: vegas30k.dll
   Function: FUN_0113b0a0
   Address: 0113b0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0113b0a0(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_01135ec0(param_1);
    if (param_1 != (LPCVOID)0x0) {
      FUN_0113afa0();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* Module: vegas30k.dll
   Function: FUN_011644a0
   Address: 011644a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011644a0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x28) + -1;
  *(int *)((int)param_1 + 0x28) = iVar2;
  if (iVar2 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_01164390();
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* Module: vegas30k.dll
   Function: FUN_01165070
   Address: 01165070
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01165070(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x20) + -1;
  *(int *)((int)param_1 + 0x20) = iVar2;
  if (iVar2 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_01164fb0();
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



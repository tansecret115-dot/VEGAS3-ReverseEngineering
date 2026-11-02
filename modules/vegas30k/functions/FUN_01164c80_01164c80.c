/* Module: vegas30k.dll
   Function: FUN_01164c80
   Address: 01164c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01164c80(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x18) + -1;
  *(int *)((int)param_1 + 0x18) = iVar2;
  if (iVar2 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_01164bb0();
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



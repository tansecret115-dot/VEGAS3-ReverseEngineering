/* Module: vegas30k.dll
   Function: FUN_011be110
   Address: 011be110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011be110(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_011bd9b0();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



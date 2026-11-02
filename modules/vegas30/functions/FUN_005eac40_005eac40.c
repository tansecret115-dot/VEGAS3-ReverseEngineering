/* Module: vegas30.exe
   Function: FUN_005eac40
   Address: 005eac40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005eac40(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_005ead00();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



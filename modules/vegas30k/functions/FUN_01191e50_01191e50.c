/* Module: vegas30k.dll
   Function: FUN_01191e50
   Address: 01191e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01191e50(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_01191b50();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



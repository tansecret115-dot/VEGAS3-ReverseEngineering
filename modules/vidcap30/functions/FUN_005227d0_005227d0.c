/* Module: vidcap30.exe
   Function: FUN_005227d0
   Address: 005227d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005227d0(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  if (*(int *)((int)param_1 + 4) < 1) {
    return 0;
  }
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if ((iVar1 == 0) && (param_1 != (LPCVOID)0x0)) {
    FUN_00522740();
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return iVar1;
}



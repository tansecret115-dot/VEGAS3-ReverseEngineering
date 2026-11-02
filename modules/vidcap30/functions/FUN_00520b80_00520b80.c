/* Module: vidcap30.exe
   Function: FUN_00520b80
   Address: 00520b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00520b80(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  if (*(int *)((int)param_1 + 0x38) < 1) {
    return 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x38) + -1;
  *(int *)((int)param_1 + 0x38) = iVar1;
  if ((iVar1 == 0) && (param_1 != (LPCVOID)0x0)) {
    FUN_00520ac0();
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return iVar1;
}



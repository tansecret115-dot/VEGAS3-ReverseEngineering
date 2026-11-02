/* Module: sfpaplug.dll
   Function: FUN_00401430
   Address: 00401430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401430(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    iVar1 = 0;
  }
  return iVar1;
}



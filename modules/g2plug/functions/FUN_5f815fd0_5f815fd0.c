/* Module: g2plug.dll
   Function: FUN_5f815fd0
   Address: 5f815fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f815fd0(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x14) + -1;
  *(int *)((int)param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    iVar1 = 0;
  }
  return iVar1;
}



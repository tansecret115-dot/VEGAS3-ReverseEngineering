/* Module: vidcap30.exe
   Function: FUN_00521fe0
   Address: 00521fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00521fe0(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  if ((int)param_1[2] < 1) {
    return 0;
  }
  iVar1 = param_1[2] + -1;
  param_1[2] = iVar1;
  if ((iVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_0059bcb4;
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return iVar1;
}



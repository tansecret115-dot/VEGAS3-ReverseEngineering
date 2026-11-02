/* Module: rv103260.dll
   Function: entry
   Address: 636a5de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_636a8440 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_636a5e3e:
    iVar1 = FUN_636a5ea0(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_636a5d10(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_636a5d10(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_636a8458 != (code *)0x0)) {
        iVar1 = (*DAT_636a8458)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_636a8458 != (code *)0x0) {
    iVar1 = (*DAT_636a8458)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_636a5d10(param_1,param_2);
    if (iVar1 != 0) goto LAB_636a5e3e;
  }
  return 0;
}



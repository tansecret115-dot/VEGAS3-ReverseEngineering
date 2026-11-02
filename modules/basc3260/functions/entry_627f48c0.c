/* Module: basc3260.dll
   Function: entry
   Address: 627f48c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_627f63e4 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_627f491e:
    iVar1 = FUN_627f49d0(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_627f47f0(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_627f47f0(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_627f63f4 != (code *)0x0)) {
        iVar1 = (*DAT_627f63f4)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_627f63f4 != (code *)0x0) {
    iVar1 = (*DAT_627f63f4)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_627f47f0(param_1,param_2);
    if (iVar1 != 0) goto LAB_627f491e;
  }
  return 0;
}



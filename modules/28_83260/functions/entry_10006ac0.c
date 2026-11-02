/* Module: 28_83260.dll
   Function: entry
   Address: 10006ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_1000cd78 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_10006b1e:
    iVar1 = FUN_100015f0(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_100069f0(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_100069f0(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_1000cd80 != (code *)0x0)) {
        iVar1 = (*DAT_1000cd80)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_1000cd80 != (code *)0x0) {
    iVar1 = (*DAT_1000cd80)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_100069f0(param_1,param_2);
    if (iVar1 != 0) goto LAB_10006b1e;
  }
  return 0;
}



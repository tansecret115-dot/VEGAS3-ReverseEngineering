/* Module: enlv3260.dll
   Function: entry
   Address: 661d4250
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_661d6390 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_661d42ae:
    iVar1 = FUN_661d4310(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_661d4180(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_661d4180(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_661d6398 != (code *)0x0)) {
        iVar1 = (*DAT_661d6398)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_661d6398 != (code *)0x0) {
    iVar1 = (*DAT_661d6398)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_661d4180(param_1,param_2);
    if (iVar1 != 0) goto LAB_661d42ae;
  }
  return 0;
}



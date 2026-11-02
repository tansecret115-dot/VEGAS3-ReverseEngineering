/* Module: atrc3260.dll
   Function: entry
   Address: 68003be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_680054ec == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_68003c3e:
    iVar1 = FUN_68002170(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_68003b10(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_68003b10(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_680054f4 != (code *)0x0)) {
        iVar1 = (*DAT_680054f4)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_680054f4 != (code *)0x0) {
    iVar1 = (*DAT_680054f4)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_68003b10(param_1,param_2);
    if (iVar1 != 0) goto LAB_68003c3e;
  }
  return 0;
}



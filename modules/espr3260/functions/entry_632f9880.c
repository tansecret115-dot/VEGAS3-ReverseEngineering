/* Module: espr3260.dll
   Function: entry
   Address: 632f9880
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_632ffb28 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_632f98de:
    iVar1 = FUN_632f9940(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_632f97b0(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_632f97b0(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_632ffb38 != (code *)0x0)) {
        iVar1 = (*DAT_632ffb38)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_632ffb38 != (code *)0x0) {
    iVar1 = (*DAT_632ffb38)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_632f97b0(param_1,param_2);
    if (iVar1 != 0) goto LAB_632f98de;
  }
  return 0;
}



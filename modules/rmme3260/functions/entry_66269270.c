/* Module: rmme3260.dll
   Function: entry
   Address: 66269270
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_6627f388 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_662692ce:
    iVar1 = FUN_66201050(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_662691a0(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_662691a0(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_6627f390 != (code *)0x0)) {
        iVar1 = (*DAT_6627f390)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_6627f390 != (code *)0x0) {
    iVar1 = (*DAT_6627f390)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_662691a0(param_1,param_2);
    if (iVar1 != 0) goto LAB_662692ce;
  }
  return 0;
}



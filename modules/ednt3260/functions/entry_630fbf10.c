/* Module: ednt3260.dll
   Function: entry
   Address: 630fbf10
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_63103600 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_630fbf6e:
    iVar1 = FUN_630fbfd0(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_630fbe40(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_630fbe40(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_63103610 != (code *)0x0)) {
        iVar1 = (*DAT_63103610)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_63103610 != (code *)0x0) {
    iVar1 = (*DAT_63103610)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_630fbe40(param_1,param_2);
    if (iVar1 != 0) goto LAB_630fbf6e;
  }
  return 0;
}



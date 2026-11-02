/* Module: erv23260.dll
   Function: entry
   Address: 63817e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_63832054 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_63817e9e:
    iVar1 = FUN_637f1180(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_63817d70(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_63817d70(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_63832064 != (code *)0x0)) {
        iVar1 = (*DAT_63832064)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_63832064 != (code *)0x0) {
    iVar1 = (*DAT_63832064)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_63817d70(param_1,param_2);
    if (iVar1 != 0) goto LAB_63817e9e;
  }
  return 0;
}



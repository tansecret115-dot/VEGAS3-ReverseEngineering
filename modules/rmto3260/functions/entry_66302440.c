/* Module: rmto3260.dll
   Function: entry
   Address: 66302440
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_6631203c == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_6630249e:
    iVar1 = FUN_662c1030(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_66302370(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_66302370(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_663120c4 != (code *)0x0)) {
        iVar1 = (*DAT_663120c4)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_663120c4 != (code *)0x0) {
    iVar1 = (*DAT_663120c4)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_66302370(param_1,param_2);
    if (iVar1 != 0) goto LAB_6630249e;
  }
  return 0;
}



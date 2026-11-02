/* Module: rmbe3260.dll
   Function: entry
   Address: 66060b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_660756d8 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_66060b9e:
    iVar1 = FUN_66001090(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_66060a70(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_66060a70(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_660756e0 != (code *)0x0)) {
        iVar1 = (*DAT_660756e0)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_660756e0 != (code *)0x0) {
    iVar1 = (*DAT_660756e0)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_66060a70(param_1,param_2);
    if (iVar1 != 0) goto LAB_66060b9e;
  }
  return 0;
}



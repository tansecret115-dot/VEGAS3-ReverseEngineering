/* Module: pngu3266.dll
   Function: entry
   Address: 6061fe30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall entry(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *extraout_ECX;
  
  iVar1 = 1;
  if ((param_2 == 0) && (this = DAT_6064b4a0, DAT_6064b4a0 == (void *)0x0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_6061fe8e:
    iVar1 = FUN_605f2ab1(this,param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_6061fd60(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_6061fd60(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_6064b4b4 != (code *)0x0)) {
        iVar1 = (*DAT_6064b4b4)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_6064b4b4 != (code *)0x0) {
    iVar1 = (*DAT_6064b4b4)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_6061fd60(param_1,param_2);
    this = extraout_ECX;
    if (iVar1 != 0) goto LAB_6061fe8e;
  }
  return 0;
}



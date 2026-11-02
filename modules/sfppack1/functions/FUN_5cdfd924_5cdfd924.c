/* Module: sfppack1.dll
   Function: FUN_5cdfd924
   Address: 5cdfd924
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfd924(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  void *pvVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    uVar2 = 0;
    bVar1 = FUN_5cdfdeed(param_1);
    if (CONCAT31(extraout_var,bVar1) == 1) {
      *param_2 = 0;
      uVar2 = 0x80040203;
    }
    else {
      pvVar3 = (void *)FUN_5cdb2130(0x14);
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = FUN_5cdfd826(pvVar3,*(int *)(param_1 + 8));
      }
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        uVar2 = 0x8007000e;
      }
    }
  }
  return uVar2;
}



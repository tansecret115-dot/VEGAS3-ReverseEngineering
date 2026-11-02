/* Module: sfppack1.dll
   Function: FUN_5cdfd65b
   Address: 5cdfd65b
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfd65b(int param_1,undefined4 *param_2)

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
    bVar1 = FUN_5cdfde00(param_1);
    if (CONCAT31(extraout_var,bVar1) == 1) {
      *param_2 = 0;
      uVar2 = 0x80040203;
    }
    else {
      pvVar3 = (void *)FUN_5cdb2130(0x30);
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = FUN_5cdfd51d(pvVar3,*(int *)(param_1 + 0xc));
      }
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        uVar2 = 0x8007000e;
      }
    }
  }
  return uVar2;
}



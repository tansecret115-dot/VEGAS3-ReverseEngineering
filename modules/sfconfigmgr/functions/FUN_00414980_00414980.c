/* Module: sfconfigmgr.dll
   Function: FUN_00414980
   Address: 00414980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414980(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_00422e7c == 0)) {
    uVar1 = FUN_00414c40();
    if (uVar1 != 0) {
      DAT_00422e70 = uVar1 / 1000;
      DAT_00422e74 = DAT_00422e70 / 1000;
      DAT_00422e6c = uVar1 / DAT_00422e74;
      if (DAT_00422e6c == 1000000) {
        DAT_00422e6c = 0;
      }
      _DAT_00422e78 = 1000;
      PTR_FUN_00422e88 = &LAB_00414a60;
      PTR_LAB_00422e8c = FUN_00414a90;
      PTR_FUN_00422e90 = FUN_00414b00;
      PTR_FUN_00422e94 = FUN_00414b50;
      PTR_FUN_00422e98 = FUN_00414b80;
      PTR_FUN_00422e9c = FUN_00414bf0;
      DAT_00422e7c = 1;
      _DAT_00422e68 = uVar1;
    }
    (*(code *)PTR_FUN_00422e94)(&DAT_00422e80);
    if (4 < param_1) {
      FUN_00414c60();
    }
  }
  return;
}



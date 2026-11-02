/* Module: sfmarket2.dll
   Function: FUN_00441af0
   Address: 00441af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441af0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_004a832c == 0)) {
    uVar1 = FUN_00441db0();
    if (uVar1 != 0) {
      DAT_004a8320 = uVar1 / 1000;
      DAT_004a8324 = DAT_004a8320 / 1000;
      DAT_004a831c = uVar1 / DAT_004a8324;
      if (DAT_004a831c == 1000000) {
        DAT_004a831c = 0;
      }
      _DAT_004a8328 = 1000;
      PTR_FUN_004a8338 = &LAB_00441bd0;
      PTR_LAB_004a833c = FUN_00441c00;
      PTR_FUN_004a8340 = FUN_00441c70;
      PTR_FUN_004a8344 = FUN_00441cc0;
      PTR_FUN_004a8348 = FUN_00441cf0;
      PTR_FUN_004a834c = FUN_00441d60;
      DAT_004a832c = 1;
      _DAT_004a8318 = uVar1;
    }
    (*(code *)PTR_FUN_004a8344)(&DAT_004a8330);
    if (4 < param_1) {
      FUN_00441dd0();
    }
  }
  return;
}



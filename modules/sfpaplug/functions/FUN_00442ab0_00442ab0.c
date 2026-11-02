/* Module: sfpaplug.dll
   Function: FUN_00442ab0
   Address: 00442ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442ab0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0045be5c == 0)) {
    uVar1 = FUN_00442d70();
    if (uVar1 != 0) {
      DAT_0045be50 = uVar1 / 1000;
      DAT_0045be54 = DAT_0045be50 / 1000;
      DAT_0045be4c = uVar1 / DAT_0045be54;
      if (DAT_0045be4c == 1000000) {
        DAT_0045be4c = 0;
      }
      _DAT_0045be58 = 1000;
      PTR_FUN_0045be68 = &LAB_00442b90;
      PTR_LAB_0045be6c = FUN_00442bc0;
      PTR_FUN_0045be70 = FUN_00442c30;
      PTR_FUN_0045be74 = FUN_00442c80;
      PTR_FUN_0045be78 = FUN_00442cb0;
      PTR_FUN_0045be7c = FUN_00442d20;
      DAT_0045be5c = 1;
      _DAT_0045be48 = uVar1;
    }
    (*(code *)PTR_FUN_0045be74)(&DAT_0045be60);
    if (4 < param_1) {
      FUN_00442d90();
    }
  }
  return;
}



/* Module: mcplug.dll
   Function: FUN_00439de0
   Address: 00439de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439de0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_004876fc == 0)) {
    uVar1 = FUN_0043a0a0();
    if (uVar1 != 0) {
      DAT_004876f0 = uVar1 / 1000;
      DAT_004876f4 = DAT_004876f0 / 1000;
      DAT_004876ec = uVar1 / DAT_004876f4;
      if (DAT_004876ec == 1000000) {
        DAT_004876ec = 0;
      }
      _DAT_004876f8 = 1000;
      PTR_FUN_00487708 = &LAB_00439ec0;
      PTR_LAB_0048770c = FUN_00439ef0;
      PTR_FUN_00487710 = FUN_00439f60;
      PTR_FUN_00487714 = FUN_00439fb0;
      PTR_FUN_00487718 = FUN_00439fe0;
      PTR_FUN_0048771c = FUN_0043a050;
      DAT_004876fc = 1;
      _DAT_004876e8 = uVar1;
    }
    (*(code *)PTR_FUN_00487714)(&DAT_00487700);
    if (4 < param_1) {
      FUN_0043a0c0();
    }
  }
  return;
}



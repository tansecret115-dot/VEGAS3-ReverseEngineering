/* Module: sfpagepeel.dll
   Function: FUN_00430bd0
   Address: 00430bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430bd0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0047cfe4 == 0)) {
    uVar1 = FUN_00430e90();
    if (uVar1 != 0) {
      DAT_0047cfd8 = uVar1 / 1000;
      DAT_0047cfdc = DAT_0047cfd8 / 1000;
      DAT_0047cfd4 = uVar1 / DAT_0047cfdc;
      if (DAT_0047cfd4 == 1000000) {
        DAT_0047cfd4 = 0;
      }
      _DAT_0047cfe0 = 1000;
      PTR_FUN_0047cff0 = &LAB_00430cb0;
      PTR_LAB_0047cff4 = FUN_00430ce0;
      PTR_FUN_0047cff8 = FUN_00430d50;
      PTR_FUN_0047cffc = FUN_00430da0;
      PTR_FUN_0047d000 = FUN_00430dd0;
      PTR_FUN_0047d004 = FUN_00430e40;
      DAT_0047cfe4 = 1;
      _DAT_0047cfd0 = uVar1;
    }
    (*(code *)PTR_FUN_0047cffc)(&DAT_0047cfe8);
    if (4 < param_1) {
      FUN_00430eb0();
    }
  }
  return;
}



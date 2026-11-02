/* Module: stl2plg.dll
   Function: FUN_0042ad90
   Address: 0042ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ad90(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_0047235c == 0)) {
    uVar1 = FUN_0042b050();
    if (uVar1 != 0) {
      DAT_00472350 = uVar1 / 1000;
      DAT_00472354 = DAT_00472350 / 1000;
      DAT_0047234c = uVar1 / DAT_00472354;
      if (DAT_0047234c == 1000000) {
        DAT_0047234c = 0;
      }
      _DAT_00472358 = 1000;
      PTR_FUN_00472368 = &LAB_0042ae70;
      PTR_LAB_0047236c = FUN_0042aea0;
      PTR_FUN_00472370 = FUN_0042af10;
      PTR_FUN_00472374 = FUN_0042af60;
      PTR_FUN_00472378 = FUN_0042af90;
      PTR_FUN_0047237c = FUN_0042b000;
      DAT_0047235c = 1;
      _DAT_00472348 = uVar1;
    }
    (*(code *)PTR_FUN_00472374)(&DAT_00472360);
    if (4 < param_1) {
      FUN_0042b070();
    }
  }
  return;
}



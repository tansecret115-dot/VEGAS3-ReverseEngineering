/* Module: sfpagepeel.dll
   Function: FUN_00413040
   Address: 00413040
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00413040(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0047dc8c == 0) {
    uVar1 = FUN_00412ea0();
    DAT_0047d9e4 = (uint)uVar1;
    DAT_0047dc8c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_0047d9e4 & param_1;
}



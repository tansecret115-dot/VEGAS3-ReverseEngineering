/* Module: sfconfigmgr.dll
   Function: FUN_0040a6e0
   Address: 0040a6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040a6e0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0042336c == 0) {
    uVar1 = FUN_0040a540();
    DAT_004230c4 = (uint)uVar1;
    DAT_0042336c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_004230c4 & param_1;
}



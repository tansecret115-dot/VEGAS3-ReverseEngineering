/* Module: vfplugs.dll
   Function: FUN_00418060
   Address: 00418060
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00418060(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_00494d14 == 0) {
    uVar1 = FUN_00417ec0();
    DAT_00494a6c = (uint)uVar1;
    DAT_00494d14 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00494a6c & param_1;
}



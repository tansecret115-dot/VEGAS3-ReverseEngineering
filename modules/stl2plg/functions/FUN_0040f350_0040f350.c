/* Module: stl2plg.dll
   Function: FUN_0040f350
   Address: 0040f350
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040f350(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_004738bc == 0) {
    uVar1 = FUN_0040f1b0();
    DAT_00473614 = (uint)uVar1;
    DAT_004738bc = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00473614 & param_1;
}



/* Module: sfpublish.dll
   Function: FUN_0041d3b0
   Address: 0041d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041d3b0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_00441f14 == 0) {
    uVar1 = FUN_0041d210();
    DAT_00441c6c = (uint)uVar1;
    DAT_00441f14 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00441c6c & param_1;
}



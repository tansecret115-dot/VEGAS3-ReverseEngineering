/* Module: sfppack1.dll
   Function: FUN_5cddafe0
   Address: 5cddafe0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cddafe0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5ce23ac4 == 0) {
    uVar1 = FUN_5cddae40();
    DAT_5ce2381c = (uint)uVar1;
    DAT_5ce23ac4 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5ce2381c & param_1;
}



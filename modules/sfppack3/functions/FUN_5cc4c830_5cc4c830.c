/* Module: sfppack3.dll
   Function: FUN_5cc4c830
   Address: 5cc4c830
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc4c830(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5cc9859c == 0) {
    uVar1 = FUN_5cc4c690();
    DAT_5cc982f4 = (uint)uVar1;
    DAT_5cc9859c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5cc982f4 & param_1;
}



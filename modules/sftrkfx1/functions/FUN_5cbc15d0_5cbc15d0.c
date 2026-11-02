/* Module: sftrkfx1.dll
   Function: FUN_5cbc15d0
   Address: 5cbc15d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cbc15d0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5cc11794 == 0) {
    uVar1 = FUN_5cbc1430();
    DAT_5cc114ec = (uint)uVar1;
    DAT_5cc11794 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5cc114ec & param_1;
}



/* Module: sfcdi.dll
   Function: FUN_5bf22e70
   Address: 5bf22e70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf22e70(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5bf76314 == 0) {
    uVar1 = FUN_5bf22cd0();
    DAT_5bf7606c = (uint)uVar1;
    DAT_5bf76314 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5bf7606c & param_1;
}



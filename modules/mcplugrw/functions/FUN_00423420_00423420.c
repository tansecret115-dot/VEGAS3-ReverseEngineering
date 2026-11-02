/* Module: mcplugrw.dll
   Function: FUN_00423420
   Address: 00423420
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00423420(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_004a9b94 == 0) {
    uVar1 = FUN_00423280();
    DAT_004a98ec = (uint)uVar1;
    DAT_004a9b94 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_004a98ec & param_1;
}



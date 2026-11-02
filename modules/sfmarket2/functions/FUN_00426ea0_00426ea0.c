/* Module: sfmarket2.dll
   Function: FUN_00426ea0
   Address: 00426ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00426ea0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_004ab15c == 0) {
    uVar1 = FUN_00426d00();
    DAT_004aaeb4 = (uint)uVar1;
    DAT_004ab15c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_004aaeb4 & param_1;
}



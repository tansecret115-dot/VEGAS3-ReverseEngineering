/* Module: sfxpfx1.dll
   Function: FUN_5c954930
   Address: 5c954930
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c954930(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5c998a3c == 0) {
    uVar1 = FUN_5c954790();
    DAT_5c998794 = (uint)uVar1;
    DAT_5c998a3c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5c998794 & param_1;
}



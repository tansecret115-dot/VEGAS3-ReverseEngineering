/* Module: rmme3260.dll
   Function: FUN_6624cbd0
   Address: 6624cbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624cbd0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x52474234) {
    if (param_1 == 0x52474233) {
      return 0x18;
    }
    if (param_1 == 0x20524742) {
      return 0x18;
    }
  }
  else if ((param_1 == 0x52474235) || (param_1 == 0x52474236)) {
    uVar1 = 0x10;
  }
  return uVar1;
}



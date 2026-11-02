/* Module: vegas30.exe
   Function: FUN_005653f0
   Address: 005653f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005653f0(undefined4 param_1,int param_2,double param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x1e0) {
    if ((param_3 < _DAT_0061b558 - _DAT_0061b388) ||
       (uVar1 = 0x7d2, _DAT_0061b388 + _DAT_0061b558 < param_3)) {
      uVar1 = 0x7d1;
    }
  }
  else if (param_2 == 0x240) {
    if ((_DAT_0061b560 - _DAT_0061b388 <= param_3) && (param_3 <= _DAT_0061b388 + _DAT_0061b560)) {
      return 0x7d4;
    }
    return 0x7d3;
  }
  return uVar1;
}



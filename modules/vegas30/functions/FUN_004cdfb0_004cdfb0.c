/* Module: vegas30.exe
   Function: FUN_004cdfb0
   Address: 004cdfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004cdfb0(uint param_1)

{
  uint uVar1;
  undefined4 local_4;
  
  uVar1 = 0;
  if (DAT_0064aeb4 != 0) {
    return (float10)(int)param_1 * (float10)_DAT_00613a10;
  }
  local_4 = 0.0;
  if (param_1 != 0) {
    if ((int)param_1 < 0) {
      uVar1 = 0x80000000;
      param_1 = -param_1;
    }
    if (((int)param_1 < 0x5c1) || (0x600 < (int)param_1)) {
      if (((int)param_1 < 0x541) || (0x5c0 < (int)param_1)) {
        if ((0x480 < (int)param_1) && ((int)param_1 < 0x541)) {
          param_1 = 0x500;
        }
      }
      else {
        param_1 = 0x580;
      }
    }
    else {
      param_1 = 0x600;
    }
    local_4 = (float)((-((int)((0x6ff - param_1) + ((int)(0x6ff - param_1) >> 0x1f & 0xffU)) >> 8) -
                       0x80U & 0xff) << 0x17 | (param_1 & 0xff) << 0xf | uVar1);
  }
  return (float10)local_4;
}



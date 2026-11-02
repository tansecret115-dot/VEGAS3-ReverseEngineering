/* Module: vegas30k.dll
   Function: FUN_01123280
   Address: 01123280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01123280(int param_1,double param_2,double param_3)

{
  if (_DAT_011e32d0 < ABS(param_2 * param_3 - _DAT_011dad58)) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x2000;
  }
  *(float *)(param_1 + 0x14e) = (float)param_3;
  *(float *)(param_1 + 0x152) = (float)param_2;
  return;
}



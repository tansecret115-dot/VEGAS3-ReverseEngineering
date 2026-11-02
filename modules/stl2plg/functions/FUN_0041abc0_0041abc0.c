/* Module: stl2plg.dll
   Function: FUN_0041abc0
   Address: 0041abc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041abc0(int param_1,double param_2,double param_3)

{
  if (_DAT_0046b658 < ABS(param_2 * param_3 - _DAT_00464ad8)) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x2000;
  }
  *(float *)(param_1 + 0x14e) = (float)param_3;
  *(float *)(param_1 + 0x152) = (float)param_2;
  return;
}



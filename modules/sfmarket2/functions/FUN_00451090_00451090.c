/* Module: sfmarket2.dll
   Function: FUN_00451090
   Address: 00451090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451090(int param_1,double param_2,double param_3)

{
  if (_DAT_004a0328 < ABS(param_2 * param_3 - _DAT_0049e748)) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x2000;
  }
  *(float *)(param_1 + 0x14e) = (float)param_3;
  *(float *)(param_1 + 0x152) = (float)param_2;
  return;
}



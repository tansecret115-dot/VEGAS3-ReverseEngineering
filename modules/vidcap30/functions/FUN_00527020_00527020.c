/* Module: vidcap30.exe
   Function: FUN_00527020
   Address: 00527020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00527020(int param_1,double param_2,double param_3)

{
  if (_DAT_00589f20 < ABS(param_2 * param_3 - _DAT_00587ad0)) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x2000;
  }
  *(float *)(param_1 + 0x14e) = (float)param_3;
  *(float *)(param_1 + 0x152) = (float)param_2;
  return;
}



/* Module: mcplugrw.dll
   Function: FUN_00448a20
   Address: 00448a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448a20(int param_1,double param_2,double param_3)

{
  if (_DAT_0049dc70 < ABS(param_2 * param_3 - _DAT_0049c008)) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x2000;
  }
  *(float *)(param_1 + 0x14e) = (float)param_3;
  *(float *)(param_1 + 0x152) = (float)param_2;
  return;
}



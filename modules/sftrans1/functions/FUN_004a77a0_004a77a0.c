/* Module: sftrans1.dll
   Function: FUN_004a77a0
   Address: 004a77a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a77a0(float param_1,float param_2,float param_3)

{
  if (param_3 <= param_1) {
    return (float10)_DAT_00557840;
  }
  if (param_2 <= param_3) {
    return (float10)_DAT_0055c008;
  }
  return ((float10)param_3 - (float10)param_1) / ((float10)param_2 - (float10)param_1);
}



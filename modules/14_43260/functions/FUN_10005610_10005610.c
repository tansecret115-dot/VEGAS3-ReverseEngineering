/* Module: 14_43260.dll
   Function: FUN_10005610
   Address: 10005610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10005610(int param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_10010cb8;
  pfVar1 = param_2 + *(int *)(param_1 + 0x996);
  for (; param_2 < pfVar1; param_2 = param_2 + 1) {
    fVar2 = (float10)*param_2 * (float10)*param_2 + fVar2;
  }
  if (fVar2 <= (float10)_DAT_10010cc0) {
    return (float10)_DAT_10010cb8;
  }
  return (float10)param_3 / SQRT(fVar2);
}



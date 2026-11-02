/* Module: espr3260.dll
   Function: FUN_632f68e0
   Address: 632f68e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_632f68e0(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  double dVar2;
  int local_8;
  
  frexp((double)CONCAT44(param_2,param_1),&local_8);
  local_8 = -(local_8 >> 1);
  dVar2 = ldexp(1.0,local_8);
  fVar1 = (float10)dVar2;
  fVar1 = ((float10)_DAT_632fa3e0 -
          fVar1 * fVar1 * (float10)(double)CONCAT44(param_2,param_1) * (float10)_DAT_632fa3d8) *
          fVar1;
  fVar1 = ((float10)_DAT_632fa3e0 -
          fVar1 * fVar1 * (float10)(double)CONCAT44(param_2,param_1) * (float10)_DAT_632fa3d8) *
          fVar1;
  fVar1 = ((float10)_DAT_632fa3e0 -
          fVar1 * fVar1 * (float10)(double)CONCAT44(param_2,param_1) * (float10)_DAT_632fa3d8) *
          fVar1;
  fVar1 = ((float10)_DAT_632fa3e0 -
          fVar1 * fVar1 * (float10)(double)CONCAT44(param_2,param_1) * (float10)_DAT_632fa3d8) *
          fVar1;
  return ((float10)_DAT_632fa3e0 -
         fVar1 * fVar1 * (float10)(double)CONCAT44(param_2,param_1) * (float10)_DAT_632fa3d8) *
         fVar1;
}



/* Module: tokr3260.dll
   Function: FUN_68051f90
   Address: 68051f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_68051f90(uint param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == 0xf) {
    *param_2 = 1.0;
    *param_3 = 1.0;
    return;
  }
  fVar1 = (float)(param_1 & 7) * _DAT_6805b064;
  fVar2 = SQRT(_DAT_6805b060 - fVar1 * fVar1);
  if ((param_1 & 8) == 0) {
    *param_2 = fVar1;
    *param_3 = fVar2;
    return;
  }
  *param_2 = fVar2;
  *param_3 = fVar1;
  return;
}



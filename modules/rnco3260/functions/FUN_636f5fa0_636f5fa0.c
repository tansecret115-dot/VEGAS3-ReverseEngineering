/* Module: rnco3260.dll
   Function: FUN_636f5fa0
   Address: 636f5fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_636f5fa0(double param_1,double param_2,double param_3,double param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if ((float10)_DAT_63765350 <= fVar1) {
    if ((float10)_DAT_63765340 < fVar1) {
      fVar1 = (float10)_DAT_63765340;
    }
    return ((float10)param_4 - (float10)param_3) * fVar1 + (float10)param_3;
  }
  if (fVar1 < (float10)_DAT_63765388) {
    fVar1 = (float10)_DAT_63765388;
  }
  return ((float10)param_3 - (float10)param_2) * fVar1 + (float10)param_3;
}



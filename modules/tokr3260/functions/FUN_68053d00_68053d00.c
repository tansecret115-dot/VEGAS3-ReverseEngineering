/* Module: tokr3260.dll
   Function: FUN_68053d00
   Address: 68053d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_68053d00(float param_1,float param_2,int param_3)

{
  if (param_3 < 8) {
    return (float10)param_3 * (float10)_DAT_6805b088 * (float10)param_2 +
           (float10)param_1 * ((float10)_DAT_6805b090 - (float10)param_3 * (float10)_DAT_6805b088);
  }
  return (float10)param_2;
}



/* Module: sfppack3.dll
   Function: FUN_5cc380f0
   Address: 5cc380f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5cc380f0(int param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 * (float10)_DAT_5cc8816c * (float10)param_2 * (float10)_DAT_5cc8816c +
          (float10)_DAT_5cc88168;
  if (param_3 == 0) {
    fVar1 = fVar1 * (float10)_DAT_5cc88164;
  }
  else {
    fVar1 = (float10)_DAT_5cc88164 / fVar1;
  }
  if (fVar1 < (float10)_DAT_5cc87cd8) {
    fVar1 = (float10)_DAT_5cc88160;
  }
  return fVar1;
}



/* Module: sfppack3.dll
   Function: FUN_5cc450f0
   Address: 5cc450f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5cc450f0(int param_1,int param_2)

{
  float10 fVar1;
  
  if (param_1 <= param_2) {
    return (float10)_DAT_5cc87cd8;
  }
  fVar1 = (float10)_CIpow();
  return fVar1;
}



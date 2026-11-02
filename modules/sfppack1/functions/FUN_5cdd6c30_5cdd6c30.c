/* Module: sfppack1.dll
   Function: FUN_5cdd6c30
   Address: 5cdd6c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5cdd6c30(int param_1,int param_2)

{
  float10 fVar1;
  
  if (param_1 <= param_2) {
    return (float10)_DAT_5ce12bf0;
  }
  fVar1 = (float10)_CIpow();
  return fVar1;
}



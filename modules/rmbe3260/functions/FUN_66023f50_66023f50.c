/* Module: rmbe3260.dll
   Function: FUN_66023f50
   Address: 66023f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_66023f50(uint param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 * (float10)param_2;
  if (fVar1 < (float10)_DAT_66066dfc) {
    return fVar1 * (float10)_DAT_66066e00 * (float10)_DAT_66066e14;
  }
  if ((float10)_DAT_66066e04 < fVar1) {
    return fVar1 * (float10)_DAT_66066e08 * (float10)_DAT_66066e14;
  }
  return ((fVar1 - (float10)_DAT_66066dfc) * (float10)_DAT_66066e0c * (float10)_DAT_66066e08 -
         ((float10)_DAT_66066e04 - fVar1) * (float10)_DAT_66066e0c * (float10)_DAT_66066e10) * fVar1
         * (float10)_DAT_66066e14;
}



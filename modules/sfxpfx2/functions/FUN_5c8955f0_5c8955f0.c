/* Module: sfxpfx2.dll
   Function: FUN_5c8955f0
   Address: 5c8955f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5c8955f0(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2((float10)param_1);
  return (float10)0.3010299956639812 * fVar1 * (float10)_DAT_5c8dc930;
}



/* Module: rmto3260.dll
   Function: FUN_662fac70
   Address: 662fac70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_662fac70(uint param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(param_1 & 0xffff);
  if (fVar1 < (float10)_DAT_66308028) {
    fVar1 = -fVar1;
  }
  return fVar1 * (float10)_DAT_66308038 + (float10)(param_1 >> 0x10);
}



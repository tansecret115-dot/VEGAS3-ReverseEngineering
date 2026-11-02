/* Module: rmbe3260.dll
   Function: FUN_66048510
   Address: 66048510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_66048510(uint param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(param_1 & 0xffff);
  if (fVar1 < (float10)_DAT_660682f8) {
    fVar1 = -fVar1;
  }
  return fVar1 * (float10)_DAT_66068308 + (float10)(param_1 >> 0x10);
}



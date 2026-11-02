/* Module: vegas30.exe
   Function: FUN_005a88a0
   Address: 005a88a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005a88a0(longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if (iVar1 == 1) {
    return ((float10)param_5 - (float10)param_4) * ((float10)param_1 / (float10)param_2) +
           (float10)param_4;
  }
  if (iVar1 == 2) {
    fVar3 = (float10)param_1 / (float10)param_2;
    if ((int)param_3 < 0) {
      return ((float10)param_5 - (float10)param_4) * fVar3 * fVar3 + (float10)param_4;
    }
    return (float10)param_5 -
           ((float10)param_5 - (float10)param_4) * ((float10)_DAT_00619ab0 - fVar3) *
           ((float10)_DAT_00619ab0 - fVar3);
  }
  if (iVar1 != 4) {
    return (float10)param_5;
  }
  fVar3 = (float10)param_1 / (float10)param_2;
  if ((int)param_3 < 0) {
    fVar2 = fVar3 * fVar3;
    return ((float10)param_5 - (float10)param_4) *
           (((float10)_DAT_0061a494 - (fVar3 + fVar3)) * fVar2 +
           (((fVar2 * fVar3 + fVar2 * fVar3) - fVar2 * (float10)_DAT_0061a494) + fVar3) *
           (float10)_DAT_0061a494) + (float10)param_4;
  }
  return ((float10)param_5 - (float10)param_4) *
         fVar3 * fVar3 * ((float10)_DAT_0061a494 - (fVar3 + fVar3)) + (float10)param_4;
}



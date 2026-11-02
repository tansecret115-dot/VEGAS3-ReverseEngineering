/* Module: vegas30k.dll
   Function: FUN_010f6560
   Address: 010f6560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f6560(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float10 fVar4;
  
  dVar1 = *param_1;
  fVar4 = (float10)fptan((float10)param_1[2] * (float10)_DAT_011dbdb8);
  fVar4 = ((float10)_DAT_011dad58 - fVar4) / (fVar4 + (float10)_DAT_011dad58);
  *param_2 = (double)fVar4;
  dVar3 = _DAT_011e32d8;
  dVar2 = (double)(((float10)_DAT_011dad58 - fVar4) * (float10)_DAT_011db6e8);
  param_2[0x1a] = dVar2;
  if (dVar1 <= dVar3) {
    param_2[0x1a] = dVar2 * _DAT_011dbdc8;
    return;
  }
  fVar4 = (float10)_CIpow();
  param_2[0x1a] = (double)((fVar4 - (float10)_DAT_011dad58) * (float10)dVar2);
  return;
}



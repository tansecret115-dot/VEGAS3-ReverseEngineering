/* Module: vidcap30.exe
   Function: FUN_00538b80
   Address: 00538b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538b80(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float10 fVar4;
  
  dVar1 = *param_1;
  fVar4 = (float10)fptan((float10)param_1[2] * (float10)_DAT_0059a168);
  fVar4 = ((float10)_DAT_00587ad0 - fVar4) / (fVar4 + (float10)_DAT_00587ad0);
  *param_2 = (double)fVar4;
  dVar3 = _DAT_0059dba8;
  dVar2 = (double)(((float10)_DAT_00587ad0 - fVar4) * (float10)_DAT_00589f50);
  param_2[0x1a] = dVar2;
  if (dVar1 <= dVar3) {
    param_2[0x1a] = dVar2 * _DAT_0059a188;
    return;
  }
  fVar4 = (float10)_CIpow();
  param_2[0x1a] = (double)((fVar4 - (float10)_DAT_00587ad0) * (float10)dVar2);
  return;
}



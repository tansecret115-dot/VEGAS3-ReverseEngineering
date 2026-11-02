/* Module: oggplug.dll
   Function: FUN_00436e90
   Address: 00436e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00436e90(float param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)((int)param_1 + 4);
  fVar4 = (float10)iVar2 * (float10)*(float *)((int)param_1 + 0xc) *
          (float10)*(float *)((int)param_1 + 0xc);
  fVar5 = fVar4;
  if (0 < iVar2) {
    pfVar1 = param_3;
    do {
      fVar3 = (float10)*(float *)((param_2 - (int)param_3) + (int)pfVar1);
      iVar2 = iVar2 + -1;
      fVar4 = fVar3 * fVar3 + fVar4;
      fVar5 = (float10)*pfVar1 * (float10)*pfVar1 + fVar5;
      pfVar1 = pfVar1 + 1;
    } while (iVar2 != 0);
  }
  param_1 = (float)fVar5;
  if (fVar4 == (float10)_DAT_0044d6f0) {
    fVar5 = (float10)_DAT_0044d7b8;
  }
  else {
    fVar5 = (float10)log2(fVar4 * fVar4);
    fVar5 = (float10)0.6931471805599453 * fVar5 * (float10)_DAT_0044d6c0;
  }
  if (param_1 != _DAT_0044d6f0) {
    fVar4 = (float10)log2((float10)param_1 * (float10)param_1);
    return (float10)0.6931471805599453 * fVar4 * (float10)_DAT_0044d6c0 - fVar5;
  }
  return (float10)_DAT_0044d7b8 - fVar5;
}



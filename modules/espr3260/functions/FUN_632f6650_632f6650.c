/* Module: espr3260.dll
   Function: FUN_632f6650
   Address: 632f6650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f6650(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)_DAT_632fa3bc;
  fVar1 = _DAT_632fa3b8 / (float)(param_2 * 2 + -1);
  pfVar2 = param_1;
  if (0 < param_2) {
    do {
      fVar4 = (float10)fcos(fVar3);
      pfVar2 = param_1 + 1;
      param_2 = param_2 + -1;
      fVar3 = (float10)fVar1 + fVar3;
      *param_1 = (float)((float10)_DAT_632fa3c4 - fVar4 * (float10)_DAT_632fa3c0);
      param_1 = pfVar2;
    } while (param_2 != 0);
  }
  fVar3 = (float10)_DAT_632fa3bc;
  fVar1 = _DAT_632fa3b8 / (float)(param_3 * 4 + -1);
  if (0 < param_3) {
    do {
      fVar4 = (float10)fcos(fVar3);
      param_3 = param_3 + -1;
      fVar3 = (float10)fVar1 + fVar3;
      *pfVar2 = (float)fVar4;
      pfVar2 = pfVar2 + 1;
    } while (param_3 != 0);
  }
  return;
}



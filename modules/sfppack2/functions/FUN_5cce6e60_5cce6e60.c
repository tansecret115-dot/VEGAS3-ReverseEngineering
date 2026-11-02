/* Module: sfppack2.dll
   Function: FUN_5cce6e60
   Address: 5cce6e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cce6e60(int param_1,double *param_2)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (_DAT_5cd51520 != param_2[1]) {
    fVar2 = (float10)_CIpow();
    fVar2 = fVar2 - (float10)_DAT_5cd51510;
    if (_DAT_5cd51520 < param_2[1]) {
      *(double *)(param_1 + 0x28) = (double)(fVar2 / (float10)param_2[2]);
    }
    fVar3 = (float10)param_2[2];
    dVar1 = _DAT_5cd52948;
    if (_DAT_5cd52958 < *param_2) {
      dVar1 = _DAT_5cd52950;
    }
    if (fVar3 < (float10)_DAT_5cd51510) {
      *(double *)(param_1 + 0x28) =
           (double)((((float10)_DAT_5cd51510 - fVar3) * (float10)_DAT_5cd52940 + (float10)dVar1) *
                   fVar2);
      return;
    }
    *(double *)(param_1 + 0x28) = (double)(((float10)dVar1 / fVar3) * fVar2);
  }
  return;
}



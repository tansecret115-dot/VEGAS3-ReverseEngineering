/* Module: 28_83260.dll
   Function: FUN_100057d0
   Address: 100057d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100057d0(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 5;
  fVar2 = _DAT_100070ec;
  do {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -1;
    fVar2 = fVar1 * fVar1 + fVar2;
  } while (iVar3 != 0);
  fVar1 = fVar2 * _DAT_100070f0;
  if (fVar2 * _DAT_100070f0 < _DAT_100070f4) {
    fVar1 = _DAT_100070f4;
  }
  for (; _DAT_100070f8 < fVar1; fVar1 = fVar1 * _DAT_100070fc) {
    iVar4 = iVar4 + 10;
  }
  iVar3 = ftol();
  return (float10)iVar4 + (float10)*(float *)(&DAT_10009398 + -(iVar3 * 4 + 0x1e0));
}



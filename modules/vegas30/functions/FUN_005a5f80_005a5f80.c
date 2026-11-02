/* Module: vegas30.exe
   Function: FUN_005a5f80
   Address: 005a5f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005a5f80(float *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  pfVar1 = param_1;
  if (_DAT_00610fd8 == *(double *)(param_1 + 0x14)) {
    return ABS((float10)param_1[4] - (float10)*param_1);
  }
  fVar3 = (float10)_DAT_00629d68;
  param_1 = (float *)0x501502f9;
  iVar2 = 4;
  do {
    if (*pfVar1 <= (float)param_1) {
      param_1 = (float *)*pfVar1;
    }
    if (fVar3 <= (float10)*pfVar1) {
      fVar3 = (float10)*pfVar1;
    }
    pfVar1 = pfVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return ABS(fVar3 - (float10)(float)param_1);
}



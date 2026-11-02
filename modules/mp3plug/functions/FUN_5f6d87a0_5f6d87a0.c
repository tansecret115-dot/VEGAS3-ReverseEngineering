/* Module: mp3plug.dll
   Function: FUN_5f6d87a0
   Address: 5f6d87a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_5f6d87a0(float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)_DAT_5f75c948;
  if (param_2 != 0) {
    fVar5 = (float10)*param_1 * (float10)*param_1;
  }
  if (1 < param_2) {
    pfVar3 = param_1 + 1;
    pfVar1 = param_1 + param_2;
    iVar4 = ((int)pfVar1 - (int)pfVar3 & 0xfffffff8U) + (int)pfVar3;
    if ((int)pfVar3 < iVar4) {
      while( true ) {
        fVar5 = (float10)*pfVar3 * (float10)*pfVar3 + fVar5;
        fVar6 = (float10)pfVar3[1] * (float10)pfVar3[1];
        pfVar3 = pfVar3 + 2;
        if (iVar4 <= (int)pfVar3) break;
        fVar5 = fVar6 + fVar5;
      }
      fVar5 = fVar6 + fVar5;
    }
    if ((int)pfVar3 < (int)pfVar1) {
      while( true ) {
        fVar2 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        fVar6 = (float10)fVar2 * (float10)fVar2;
        if ((int)pfVar1 <= (int)pfVar3) break;
        fVar5 = fVar6 + fVar5;
      }
      fVar5 = fVar6 + fVar5;
    }
  }
  return fVar5;
}



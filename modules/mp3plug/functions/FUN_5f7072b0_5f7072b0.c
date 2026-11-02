/* Module: mp3plug.dll
   Function: FUN_5f7072b0
   Address: 5f7072b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f7072b0(float *param_1,uint param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  FUN_5f70f9f0((int)param_1,(int)(param_2 + (0x7fffffff < param_2)) >> 1,-1);
  dVar2 = _DAT_5f7606c8;
  fVar7 = (float10)_DAT_5f7606d8;
  *param_1 = *param_1 + param_1[1];
  dVar3 = _DAT_5f7606d0;
  param_1[1] = 0.0;
  fVar6 = (float10)fcos(fVar7 / (float10)(int)param_2);
  fVar7 = (float10)fsin((float10)(double)(fVar7 / (float10)(int)param_2));
  iVar4 = 2;
  if (param_2 - 2 != 2) {
    fVar8 = (float10)dVar2;
    iVar5 = param_2 - 2;
    fVar13 = (float10)dVar3;
    while( true ) {
      fVar9 = ((float10)param_1[iVar5] + (float10)param_1[iVar4]) * (float10)_DAT_5f7606e8;
      fVar11 = (float10)(double)fVar6 * fVar13 + fVar8 * (float10)(double)fVar7;
      fVar10 = ((float10)param_1[iVar5 + 1] + (float10)param_1[iVar4 + 1]) * (float10)_DAT_5f7606ec;
      fVar1 = param_1[iVar5 + 1];
      fVar8 = fVar8 * (float10)(double)fVar6 - fVar13 * (float10)(double)fVar7;
      fVar13 = fVar8 * fVar10 + fVar11 * ((float10)param_1[iVar5] - fVar9);
      fVar12 = ((float10)param_1[iVar5] - fVar9) * fVar8 - fVar10 * fVar11;
      param_1[iVar4] = (float)(fVar13 + fVar9);
      param_1[iVar5] = (float)(fVar9 - fVar13);
      fVar13 = fVar12 - (fVar10 - (float10)fVar1);
      param_1[iVar4 + 1] = (float)(fVar12 + (fVar10 - (float10)fVar1));
      iVar4 = iVar4 + 2;
      if (iVar4 == iVar5 + -2) break;
      param_1[iVar5 + 1] = (float)fVar13;
      iVar5 = iVar5 + -2;
      fVar13 = fVar11;
    }
    param_1[iVar5 + 1] = (float)fVar13;
  }
  return 1;
}



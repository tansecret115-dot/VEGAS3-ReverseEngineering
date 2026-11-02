/* Module: oggplug.dll
   Function: FUN_00436ff0
   Address: 00436ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_00436ff0(int *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  
  pfVar1 = (float *)(param_1[3] + param_1[4] * 4);
  iVar6 = *param_1;
  iVar10 = iVar6 >> 1;
  fVar7 = *(float *)(param_1[3] + param_1[4] * 4) * *(float *)param_1[1] +
          param_2 * (float)param_1[5];
  if (iVar10 < 2) {
    fVar2 = 0.0;
    iVar10 = 1;
  }
  else {
    fVar2 = 0.0;
    param_2 = (float)(iVar10 + -1);
    pfVar8 = pfVar1 + 1;
    pfVar9 = pfVar1 + iVar6 + -1;
    do {
      fVar7 = *(float *)((param_1[1] - (int)pfVar1) + (int)pfVar8) * *pfVar8 + fVar7;
      param_2 = (float)((int)param_2 + -1);
      fVar2 = (*pfVar8 - *pfVar9) * *(float *)((param_1[2] - (int)pfVar1) + -4 + (int)(pfVar8 + 1))
              + fVar2;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + -1;
    } while (param_2 != 0.0);
  }
  pfVar8 = pfVar1 + iVar10;
  fVar3 = *(float *)(param_1[2] + iVar10 * 4);
  fVar4 = *pfVar8;
  if (iVar10 < iVar6) {
    iVar10 = iVar6 - iVar10;
    do {
      pfVar9 = (float *)((int)pfVar8 + (param_1[1] - (int)pfVar1));
      fVar5 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      iVar10 = iVar10 + -1;
      fVar7 = *pfVar9 * fVar5 + fVar7;
    } while (iVar10 != 0);
  }
  fVar5 = *pfVar1;
  pfVar1[iVar6] = fVar7;
  *pfVar1 = fVar7;
  iVar10 = param_1[4];
  param_1[4] = iVar10 + 1;
  if (iVar6 <= iVar10 + 1) {
    param_1[4] = 0;
  }
  return (float10)((fVar7 - fVar5) + fVar3 * fVar4 + fVar2);
}



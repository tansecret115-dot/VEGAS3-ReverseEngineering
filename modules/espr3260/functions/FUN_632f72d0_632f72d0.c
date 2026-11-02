/* Module: espr3260.dll
   Function: FUN_632f72d0
   Address: 632f72d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f72d0(int param_1,int param_2,float *param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float local_d0 [46];
  float local_18 [2];
  float *local_10;
  int local_c;
  int local_8;
  
  pfVar9 = (float *)(param_1 + param_4 * -4);
  FUN_632f5d40(pfVar9,param_3,(int)local_d0,0x30);
  local_c = param_4;
  if (param_4 < param_5) {
    local_8 = param_5 - param_4;
    local_c = param_4 + local_8;
    local_10 = (float *)(param_6 + param_4 * 4);
    do {
      fVar6 = pfVar9[-1];
      pfVar9 = pfVar9 + -1;
      iVar11 = 0x2f;
      pfVar10 = param_3 + 0x2f;
      iVar12 = 0x2f;
      pfVar8 = local_18 + 1;
      fVar7 = _DAT_632fa508;
      fVar4 = _DAT_632fa50c;
      do {
        fVar1 = *pfVar10;
        fVar7 = *(float *)((param_2 - (int)param_3) + (int)pfVar10) * *pfVar8 + fVar7;
        iVar11 = iVar11 + -1;
        pfVar10 = pfVar10 + -1;
        iVar12 = iVar12 + -1;
        fVar4 = *pfVar8 * *pfVar8 + fVar4;
        *pfVar8 = fVar6 * fVar1 + pfVar8[-1];
        pfVar8 = pfVar8 + -1;
      } while (iVar12 != 0);
      fVar1 = local_d0[iVar11];
      fVar2 = *(float *)(param_2 + iVar11 * 4);
      fVar3 = local_d0[iVar11];
      local_d0[iVar11] = fVar6;
      dVar5 = (double)(fVar1 * fVar1 + fVar4);
      fVar13 = FUN_632f68e0(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
      pfVar10 = local_10 + 1;
      *local_10 = (float)(fVar13 * (float10)(fVar2 * fVar3 + fVar7));
      local_8 = local_8 + -1;
      local_10 = pfVar10;
    } while (local_8 != 0);
  }
  iVar11 = 0x2f;
  pfVar9 = local_18 + 1;
  pfVar10 = (float *)(param_2 + 0xbc);
  iVar12 = 0x2f;
  fVar6 = _DAT_632fa508;
  fVar7 = _DAT_632fa50c;
  do {
    fVar4 = *pfVar9;
    fVar6 = *pfVar9 * *pfVar10 + fVar6;
    iVar11 = iVar11 + -1;
    pfVar10 = pfVar10 + -1;
    pfVar9 = pfVar9 + -1;
    iVar12 = iVar12 + -1;
    fVar7 = fVar4 * fVar4 + fVar7;
  } while (iVar12 != 0);
  fVar4 = *(float *)(param_2 + iVar11 * 4);
  fVar1 = local_d0[iVar11];
  dVar5 = (double)(local_d0[iVar11] * local_d0[iVar11] + fVar7);
  fVar13 = FUN_632f68e0(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
  *(float *)(param_6 + local_c * 4) = (float)(fVar13 * (float10)(fVar4 * fVar1 + fVar6));
  return;
}



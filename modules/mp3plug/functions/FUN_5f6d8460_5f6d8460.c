/* Module: mp3plug.dll
   Function: FUN_5f6d8460
   Address: 5f6d8460
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_5f6d8460(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_30;
  
  if ((DAT_5f7529a4 == 0) || ((((uint)param_1 | (uint)param_2) & 0xf) != 0)) {
    local_30 = 0.0;
    if (param_3 != 0) {
      local_30 = *param_2 * *param_1;
    }
    iVar6 = 1;
    if (1 < (int)param_3) {
      do {
        local_30 = param_2[iVar6] * param_1[iVar6] + local_30;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3);
    }
  }
  else {
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    iVar6 = 0;
    if (0 < (int)(param_3 & 0xfffffff8)) {
      if (0 < (int)(param_3 & 0xfffffff0)) {
        do {
          pfVar1 = param_2 + iVar6;
          pfVar3 = param_2 + iVar6 + 8;
          pfVar2 = param_1 + iVar6;
          pfVar4 = param_1 + iVar6 + 8;
          pfVar5 = param_2 + iVar6 + 4;
          fVar7 = fVar7 + *pfVar1 * *pfVar2 + *pfVar3 * *pfVar4;
          fVar8 = fVar8 + pfVar1[1] * pfVar2[1] + pfVar3[1] * pfVar4[1];
          fVar9 = fVar9 + pfVar1[2] * pfVar2[2] + pfVar3[2] * pfVar4[2];
          fVar10 = fVar10 + pfVar1[3] * pfVar2[3] + pfVar3[3] * pfVar4[3];
          pfVar1 = param_1 + iVar6 + 4;
          pfVar2 = param_2 + iVar6 + 0xc;
          pfVar3 = param_1 + iVar6 + 0xc;
          iVar6 = iVar6 + 0x10;
          fVar11 = fVar11 + *pfVar5 * *pfVar1 + *pfVar2 * *pfVar3;
          fVar12 = fVar12 + pfVar5[1] * pfVar1[1] + pfVar2[1] * pfVar3[1];
          fVar13 = fVar13 + pfVar5[2] * pfVar1[2] + pfVar2[2] * pfVar3[2];
          fVar14 = fVar14 + pfVar5[3] * pfVar1[3] + pfVar2[3] * pfVar3[3];
        } while (iVar6 < (int)(param_3 & 0xfffffff0));
      }
      for (; iVar6 < (int)(param_3 & 0xfffffff8); iVar6 = iVar6 + 8) {
        pfVar1 = param_2 + iVar6;
        pfVar3 = param_2 + iVar6 + 4;
        pfVar2 = param_1 + iVar6;
        pfVar4 = param_1 + iVar6 + 4;
        fVar7 = fVar7 + *pfVar1 * *pfVar2;
        fVar8 = fVar8 + pfVar1[1] * pfVar2[1];
        fVar9 = fVar9 + pfVar1[2] * pfVar2[2];
        fVar10 = fVar10 + pfVar1[3] * pfVar2[3];
        fVar11 = fVar11 + *pfVar3 * *pfVar4;
        fVar12 = fVar12 + pfVar3[1] * pfVar4[1];
        fVar13 = fVar13 + pfVar3[2] * pfVar4[2];
        fVar14 = fVar14 + pfVar3[3] * pfVar4[3];
      }
    }
    if (iVar6 + 4 <= (int)param_3) {
      pfVar1 = param_2 + iVar6;
      pfVar2 = param_1 + iVar6;
      fVar7 = fVar7 + *pfVar1 * *pfVar2;
      fVar8 = fVar8 + pfVar1[1] * pfVar2[1];
      fVar9 = fVar9 + pfVar1[2] * pfVar2[2];
      fVar10 = fVar10 + pfVar1[3] * pfVar2[3];
      iVar6 = iVar6 + 4;
    }
    local_30 = fVar10 + fVar14 + fVar8 + fVar12 + fVar9 + fVar13 + fVar7 + fVar11;
    for (; iVar6 < (int)param_3; iVar6 = iVar6 + 1) {
      local_30 = param_2[iVar6] * param_1[iVar6] + local_30;
    }
  }
  return (float10)local_30;
}



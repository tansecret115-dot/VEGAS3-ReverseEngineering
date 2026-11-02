/* Module: espr3260.dll
   Function: FUN_632f5d40
   Address: 632f5d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f5d40(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  float local_c;
  
  iVar21 = 0;
  if (0 < param_4) {
    pfVar19 = (float *)(param_3 + 8);
    pfVar20 = param_2;
    do {
      local_c = 0.0;
      param_2 = (float *)0x0;
      pfVar17 = param_1;
      pfVar18 = pfVar20;
      fVar15 = _DAT_632fa36c;
      fVar16 = _DAT_632fa36c;
      if (-1 < iVar21) {
        param_2 = (float *)0x0;
        local_c = 0.0;
        iVar22 = iVar21 + 1;
        do {
          pfVar1 = pfVar18 + 2;
          pfVar2 = pfVar18 + 1;
          fVar3 = *pfVar17;
          fVar4 = *pfVar18;
          fVar5 = *pfVar17;
          fVar6 = *pfVar17;
          fVar16 = pfVar18[3] * *pfVar17 + fVar16;
          pfVar18 = pfVar18 + -1;
          pfVar17 = pfVar17 + 1;
          iVar22 = iVar22 + -1;
          fVar15 = *pfVar1 * fVar5 + fVar15;
          param_2 = (float *)(*pfVar2 * fVar6 + (float)param_2);
          local_c = fVar3 * fVar4 + local_c;
        } while (iVar22 != 0);
      }
      fVar3 = pfVar18[3];
      fVar4 = *pfVar17;
      fVar5 = pfVar18[2];
      fVar6 = pfVar18[1];
      fVar7 = pfVar18[2];
      fVar8 = *pfVar17;
      fVar9 = *pfVar17;
      fVar10 = pfVar17[1];
      fVar11 = pfVar18[1];
      fVar12 = pfVar18[1];
      iVar21 = iVar21 + 4;
      fVar13 = pfVar17[1];
      pfVar20 = pfVar20 + 4;
      fVar14 = pfVar17[2];
      pfVar19[-2] = local_c;
      pfVar19[-1] = fVar6 * fVar9 + (float)param_2;
      *pfVar19 = fVar11 * fVar13 + fVar5 * fVar8 + fVar15;
      pfVar19[1] = fVar12 * fVar14 + fVar7 * fVar10 + fVar3 * fVar4 + fVar16;
      pfVar19 = pfVar19 + 4;
    } while (iVar21 < param_4);
  }
  return;
}



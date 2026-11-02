/* Module: rv203260.dll
   Function: FUN_638adfa0
   Address: 638adfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_638adfa0(int param_1,uint param_2,uint *param_3,int param_4,uint param_5,uint param_6,
            int param_7,FILE *param_8,uint param_9,uint param_10,int param_11,undefined4 param_12,
            int param_13,int param_14,int param_15,int param_16,uint *param_17,uint *param_18)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar17;
  uint local_1c;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x25);
  local_1c = 0;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0x18) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((param_7 == 1) || ((uVar3 < 0x3e9 && (!bVar6)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  fVar5 = *(float *)(param_1 + 0x31);
  if (param_9 < 0x33) {
    uVar8 = (-(uint)(param_9 < 0x32) & 0x152) + 0xa2;
  }
  else {
    uVar8 = 0x60;
  }
  uVar10 = 1;
  pfVar13 = (float *)(param_14 + 8);
  do {
    if ((float)uVar8 < *pfVar13 * _DAT_638b33ec) break;
    uVar10 = uVar10 + 1;
    pfVar13 = pfVar13 + 1;
  } while (uVar10 < 0x1f);
  param_3 = param_18;
  do {
    while( true ) {
      if (*param_3 * *param_17 != 0) break;
      local_1c = local_1c + 1;
      param_3 = param_3 + 1;
      param_17 = param_17 + 1;
    }
    param_18 = _DAT_638b3434;
    fVar1 = (float)(((float10)*param_3 * (float10)*param_17 * (float10)_DAT_638b3428) /
                    ((float10)param_6 * (float10)param_5) - (float10)_DAT_638b3430);
    if (param_11 == 1) {
      puVar16 = &DAT_638b4d98;
      puVar14 = &DAT_638b4e18;
    }
    else if (param_11 == 2) {
      puVar16 = &DAT_638b4e98;
      puVar14 = &DAT_638b4f18;
    }
    else {
      puVar16 = &DAT_638b4f98;
      puVar14 = &DAT_638b5018;
    }
    iVar9 = ftol();
    pfVar13 = (float *)(&DAT_638b4cd8 + iVar9 * 4);
    puVar12 = (uint *)(puVar14 + 0xc);
    param_2 = 3;
    puVar11 = puVar12;
    do {
      iVar9 = ftol();
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      fVar17 = extraout_ST0;
      if (param_11 != 0) {
        param_18 = *(uint **)(((int)puVar16 - (int)puVar14) + (int)puVar11);
        uVar10 = *puVar11;
        if (param_10 <= *puVar11) {
          uVar10 = param_10;
        }
        if ((uVar10 < uVar3) || (!bVar6)) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar15 = uVar3 * param_4;
            fVar2 = *pfVar13;
          }
          else {
            uVar15 = uVar3 * *(int *)(param_1 + 0x1c) * 8;
            fVar2 = *pfVar13;
          }
          fVar17 = ((float10)fVar2 * (float10)fVar5) /
                   ((float10)uVar15 / (float10)uVar10 + (float10)fVar4);
        }
      }
      if ((float10)*(float *)(((int)&DAT_638b4cd8 - (int)puVar14) + (int)puVar11) *
          (float10)(float)(&DAT_638b4d60)[iVar9] * (float10)(float)param_18 * (float10)fVar1 *
          (float10)*(float *)(&DAT_638b4d88 + param_15 * 4) < fVar17) break;
      puVar11 = puVar11 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < 0x20);
    fVar2 = *pfVar13;
    param_9 = 3;
    do {
      iVar9 = ftol();
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      fVar17 = extraout_ST0_00;
      if (param_11 != 0) {
        param_18 = *(uint **)((int)puVar12 + ((int)puVar16 - (int)puVar14));
        uVar10 = *puVar12;
        if (param_10 <= *puVar12) {
          uVar10 = param_10;
        }
        if ((uVar10 < uVar3) || (!bVar6)) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            fVar17 = (float10)(uVar3 * param_4) / (float10)(int)uVar10;
          }
          else {
            fVar17 = (float10)(uVar3 * *(int *)(param_1 + 0x1c) * 8) / (float10)(int)uVar10;
          }
          fVar17 = (float10)(fVar2 * fVar5) / (fVar17 + (float10)fVar4);
        }
      }
      if ((float10)(float)(&DAT_638b4d60)[iVar9] *
          (float10)*(float *)((int)puVar12 + ((int)&DAT_638b4cd8 - (int)puVar14)) *
          (float10)(float)param_18 * (float10)fVar1 *
          (float10)*(float *)(&DAT_638b4d88 + param_15 * 4) < fVar17) break;
      puVar12 = puVar12 + 1;
      param_9 = param_9 + 1;
    } while (param_9 < 0x20);
    if (param_13 == 0) {
      param_9 = param_9 + 2;
    }
    if ((((*(float *)(param_14 + param_9 * 4) * _DAT_638b3438 < (float)uVar8) && (param_9 < 0x21))
        || (param_16 - 1U <= local_1c)) || (!bVar7)) {
      fprintf(param_8,s_Scene__d_________________________638b5184);
      fprintf(param_8,s_StartTime____d__638b5170);
      fprintf(param_8,s_EndTime____d__638b5160);
      if (*(int *)(param_1 + 0x18) != 0) {
        fprintf(param_8,s_KeyQP____d__638b5150);
      }
      fprintf(param_8,s_MinSuggestedQP____d__638b5138);
      fprintf(param_8,s_MaxSuggestedQP____d__638b5120);
      fprintf(param_8,s_MaxSuggestedFrameTime____d__638b5100);
      if (param_7 != 1) {
        fprintf(param_8,s_RPRSize____d__638b50f0);
      }
      fprintf(param_8,s_KeyFrameRate____d__638b50dc);
      fprintf(param_8,s_UpperTargetBitrate____f__638b50c0,(double)*(float *)(param_1 + 0x2d));
      fprintf(param_8,s_LowerTargetBitrate____f__638b50a4,(double)*(float *)(param_1 + 0x31));
      return;
    }
    local_1c = local_1c + 1;
    param_3 = param_3 + 1;
    param_17 = param_17 + 1;
  } while( true );
}



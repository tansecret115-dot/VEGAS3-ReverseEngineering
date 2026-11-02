/* Module: rv303260.dll
   Function: FUN_6720d450
   Address: 6720d450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_6720d450(int param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint param_6,
            uint param_7,int param_8,FILE *param_9,uint param_10,uint param_11,int param_12,
            int param_13,int param_14,int param_15,int param_16,uint *param_17,uint *param_18)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  float *pfVar14;
  undefined *puVar15;
  uint uVar16;
  undefined *puVar17;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar18;
  char *_Format;
  uint local_14;
  uint local_10;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x29);
  local_14 = 0;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x1c) == 0)) || (*(int *)(param_1 + 0x1c) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((param_8 == 1) || ((uVar10 < 0x3e9 && (!bVar5)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  fVar4 = *(float *)(param_1 + 0x35);
  if (param_10 < 0x33) {
    uVar7 = (-(uint)(param_10 < 0x32) & 0x152) + 0xa2;
  }
  else {
    uVar7 = 0x60;
  }
  uVar9 = 1;
  pfVar14 = (float *)(param_14 + 8);
  do {
    if ((float)uVar7 < *pfVar14 * _DAT_67213400) break;
    uVar9 = uVar9 + 1;
    pfVar14 = pfVar14 + 1;
  } while (uVar9 < 0x1f);
  if (param_4 < 22000) {
    local_10 = 8;
  }
  else if (param_4 < 55000) {
    local_10 = 7;
  }
  else if (param_4 < 100000) {
    local_10 = 5;
  }
  else {
    local_10 = 5;
  }
  param_3 = param_17;
  do {
    while( true ) {
      if (*param_18 * *param_3 != 0) break;
      local_14 = local_14 + 1;
      param_3 = param_3 + 1;
      param_18 = param_18 + 1;
    }
    param_17 = _DAT_6721343c;
    fVar1 = (float)(((float10)*param_3 * (float10)*param_18 * (float10)_DAT_67213430) /
                    ((float10)param_7 * (float10)param_6) - (float10)_DAT_67213438);
    if (param_12 == 1) {
      puVar17 = &DAT_67214e70;
      puVar15 = &DAT_67214ef0;
    }
    else if (param_12 == 2) {
      puVar17 = &DAT_67214f70;
      puVar15 = &DAT_67214ff0;
    }
    else {
      puVar17 = &DAT_67215070;
      puVar15 = &DAT_672150f0;
    }
    iVar8 = ftol();
    pfVar14 = (float *)(&DAT_67214db0 + iVar8 * 4);
    puVar13 = (uint *)(puVar15 + 0xc);
    param_2 = 3;
    puVar12 = puVar13;
    do {
      iVar8 = ftol();
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      fVar18 = extraout_ST0;
      if (param_12 != 0) {
        param_17 = *(uint **)(((int)puVar17 - (int)puVar15) + (int)puVar12);
        uVar11 = *puVar12;
        if (param_11 <= *puVar12) {
          uVar11 = param_11;
        }
        if ((uVar11 < uVar10) || (!bVar5)) {
          if (*(int *)(param_1 + 0x20) == 0) {
            uVar16 = uVar10 * param_4;
            fVar2 = *pfVar14;
          }
          else {
            uVar16 = uVar10 * *(int *)(param_1 + 0x20) * 8;
            fVar2 = *pfVar14;
          }
          fVar18 = ((float10)fVar2 * (float10)fVar4) /
                   ((float10)uVar16 / (float10)uVar11 + (float10)fVar3);
        }
      }
      if ((float10)(float)(&DAT_67214e38)[iVar8] *
          (float10)*(float *)(((int)&DAT_67214db0 - (int)puVar15) + (int)puVar12) *
          (float10)(float)param_17 * (float10)fVar1 *
          (float10)*(float *)(&DAT_67214e60 + param_15 * 4) < fVar18) break;
      puVar12 = puVar12 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < 0x20);
    fVar2 = *pfVar14;
    param_10 = 3;
    do {
      iVar8 = ftol();
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      fVar18 = extraout_ST0_00;
      if (param_12 != 0) {
        param_17 = *(uint **)((int)puVar13 + ((int)puVar17 - (int)puVar15));
        uVar11 = *puVar13;
        if (param_11 <= *puVar13) {
          uVar11 = param_11;
        }
        if ((uVar11 < uVar10) || (!bVar5)) {
          if (*(int *)(param_1 + 0x20) == 0) {
            fVar18 = (float10)(uVar10 * param_4) / (float10)(int)uVar11;
          }
          else {
            fVar18 = (float10)(uVar10 * *(int *)(param_1 + 0x20) * 8) / (float10)(int)uVar11;
          }
          fVar18 = (float10)(fVar2 * fVar4) / (fVar18 + (float10)fVar3);
        }
      }
      if ((float10)(float)(&DAT_67214e38)[iVar8] *
          (float10)*(float *)((int)puVar13 + ((int)&DAT_67214db0 - (int)puVar15)) *
          (float10)(float)param_17 * (float10)fVar1 *
          (float10)*(float *)(&DAT_67214e60 + param_15 * 4) < fVar18) break;
      puVar13 = puVar13 + 1;
      param_10 = param_10 + 1;
    } while (param_10 < 0x20);
    if (param_13 == 0) {
      param_10 = param_10 + 2;
    }
    if ((((*(float *)(param_14 + param_10 * 4) * _DAT_67213440 < (float)uVar7) && (param_10 < 0x21))
        || (param_16 - 1U <= local_14)) || (!bVar6)) break;
    local_14 = local_14 + 1;
    param_3 = param_3 + 1;
    param_18 = param_18 + 1;
  } while( true );
  if (0x1f < param_10) {
    param_10 = 0x1f;
  }
  if (param_13 == 0) {
    if (param_10 < uVar9 + 3) {
      if (uVar9 < param_10) {
        param_10 = uVar9;
      }
      if (param_10 < uVar9 + 3) goto LAB_6720d9b2;
    }
    param_10 = 0x1f;
  }
LAB_6720d9b2:
  fprintf(param_9,s_Scene__d_________________________67215290);
  fprintf(param_9,s_StartTime____d__6721527c);
  fprintf(param_9,s_EndTime____d__6721526c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    fprintf(param_9,s_KeyQP____d__6721525c);
  }
  if (param_5 == 0) {
    fprintf(param_9,s_MinSuggestedQP____d__67215224);
    _Format = s_MaxSuggestedQP____d__6721520c;
  }
  else {
    fprintf(param_9,s_MinQP____d__6721524c);
    uVar10 = 0x1f;
    if (param_10 < 0x20) {
      uVar10 = param_10;
    }
    if (uVar10 < local_10) {
      _Format = s_MaxQP____d__6721523c;
    }
    else {
      _Format = s_MaxQP____d__6721523c;
    }
  }
  fprintf(param_9,_Format);
  fprintf(param_9,s_MaxSuggestedFrameTime____d__672151ec);
  if (param_8 != 1) {
    fprintf(param_9,s_RPRSize____d__672151dc);
  }
  fprintf(param_9,s_KeyFrameRate____d__672151c8);
  fprintf(param_9,s_UpperTargetBitrate____f__672151ac,(double)*(float *)(param_1 + 0x31));
  fprintf(param_9,s_LowerTargetBitrate____f__67215190,(double)*(float *)(param_1 + 0x35));
  fprintf(param_9,s_SceneQP_Hat____d__6721517c);
  return;
}



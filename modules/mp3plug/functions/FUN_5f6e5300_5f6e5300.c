/* Module: mp3plug.dll
   Function: FUN_5f6e5300
   Address: 5f6e5300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6e5300(uint param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
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
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  float *local_a8;
  float *local_a4;
  float *local_a0;
  int local_70;
  float *local_68;
  int local_64;
  float *local_44;
  
  if (param_2 < 5) {
    iVar16 = 0;
    pfVar17 = param_4 + param_1;
    pfVar19 = pfVar17 + param_1;
    pfVar22 = pfVar19 + param_1;
    if (0 < (int)param_1) {
      if (0 < (int)(param_1 & 0xfffffffe)) {
        do {
          fVar1 = *pfVar19;
          fVar2 = *param_4;
          fVar3 = *pfVar22;
          fVar4 = *pfVar17;
          *pfVar19 = *param_4 - *pfVar19;
          *pfVar22 = *pfVar17 - *pfVar22;
          *param_4 = fVar3 + fVar4 + fVar1 + fVar2;
          fVar5 = pfVar17[1];
          iVar16 = iVar16 + 2;
          *pfVar17 = (fVar1 + fVar2) - (fVar3 + fVar4);
          fVar1 = pfVar22[1];
          fVar2 = pfVar19[1];
          fVar3 = param_4[1];
          pfVar19[1] = param_4[1] - pfVar19[1];
          pfVar22[1] = pfVar17[1] - pfVar22[1];
          pfVar19 = pfVar19 + 2;
          pfVar22 = pfVar22 + 2;
          param_4[1] = fVar5 + fVar1 + fVar2 + fVar3;
          pfVar17[1] = (fVar2 + fVar3) - (fVar5 + fVar1);
          param_4 = param_4 + 2;
          pfVar17 = pfVar17 + 2;
        } while (iVar16 < (int)(param_1 & 0xfffffffe));
      }
      if (iVar16 < (int)param_1) {
        while( true ) {
          fVar1 = *pfVar19;
          fVar2 = *param_4;
          fVar3 = *pfVar17;
          fVar4 = *pfVar22;
          *pfVar19 = *param_4 - *pfVar19;
          iVar16 = iVar16 + 1;
          *pfVar22 = *pfVar17 - *pfVar22;
          pfVar19 = pfVar19 + 1;
          pfVar22 = pfVar22 + 1;
          fVar5 = (fVar1 + fVar2) - (fVar3 + fVar4);
          *param_4 = fVar3 + fVar4 + fVar1 + fVar2;
          param_4 = param_4 + 1;
          if ((int)param_1 <= iVar16) break;
          *pfVar17 = fVar5;
          pfVar17 = pfVar17 + 1;
        }
        *pfVar17 = fVar5;
      }
    }
    return;
  }
  pfVar17 = param_4 + param_1;
  local_a8 = (float *)0x0;
  pfVar19 = pfVar17 + param_1;
  local_a4 = param_4;
  pfVar22 = pfVar19 + param_1;
  pfVar18 = pfVar22 + param_1;
  pfVar24 = pfVar18 + param_1;
  pfVar20 = pfVar24 + param_1;
  local_a0 = pfVar20 + param_1;
  if (0 < (int)param_1) {
    while( true ) {
      fVar1 = *pfVar19;
      fVar2 = *local_a4;
      fVar3 = *pfVar22;
      fVar4 = *pfVar17;
      *pfVar19 = *local_a4 - *pfVar19;
      *pfVar22 = *pfVar17 - *pfVar22;
      *local_a4 = fVar3 + fVar4 + fVar1 + fVar2;
      *pfVar17 = (fVar1 + fVar2) - (fVar3 + fVar4);
      local_a4 = local_a4 + 1;
      pfVar17 = pfVar17 + 1;
      pfVar19 = pfVar19 + 1;
      pfVar22 = pfVar22 + 1;
      fVar2 = (*pfVar24 + *local_a0) * _DAT_5f75d4b4;
      fVar1 = (*pfVar24 - *local_a0) * _DAT_5f75d4b0;
      *local_a0 = *pfVar20 + fVar2;
      local_a0 = local_a0 + 1;
      *pfVar24 = fVar2 - *pfVar20;
      local_a8 = (float *)((int)local_a8 + 1);
      pfVar24 = pfVar24 + 1;
      *pfVar20 = *pfVar18 - fVar1;
      fVar1 = fVar1 + *pfVar18;
      pfVar20 = pfVar20 + 1;
      if ((int)param_1 <= (int)local_a8) break;
      *pfVar18 = fVar1;
      pfVar18 = pfVar18 + 1;
    }
    *pfVar18 = fVar1;
  }
  local_44 = (float *)(&DAT_5f740740 + param_3 * 0x1fc);
  local_68 = (float *)(&DAT_5f73ff50 + param_3 * 0x1fc);
  iVar21 = (param_2 >> 2) + -2;
  local_70 = 2;
  iVar16 = 5;
  iVar23 = 2;
  if (1 < iVar21) {
    local_64 = 8;
    do {
      iVar16 = iVar16 + -2;
      if (iVar16 <= local_70) {
        iVar16 = iVar23 * 2 + -1;
        local_70 = iVar23;
      }
      local_a8 = (float *)(iVar16 * 4 * param_1 * 4 + (int)param_4);
      fVar1 = *local_68;
      fVar2 = *local_68;
      fVar3 = *local_68;
      fVar4 = *local_68;
      pfVar19 = local_a8 + param_1;
      fVar5 = *local_68;
      pfVar22 = pfVar19 + param_1;
      local_68 = local_68 + 1;
      fVar6 = *local_44;
      fVar8 = *local_44 * *local_44 - fVar1 * fVar1;
      fVar1 = *local_44;
      fVar7 = *local_44;
      fVar9 = fVar2 * *local_44 + fVar2 * *local_44;
      local_44 = local_44 + 1;
      fVar1 = fVar8 * fVar4 + fVar9 * fVar1;
      fVar2 = fVar6 * fVar8 - fVar3 * fVar9;
      pfVar18 = pfVar22 + param_1;
      pfVar24 = (float *)(local_64 * param_1 * 4 + (int)param_4);
      local_a4 = pfVar24 + param_1;
      local_a0 = (float *)0x0;
      pfVar20 = local_a4 + param_1;
      pfVar17 = pfVar20 + param_1;
      if (0 < (int)param_1) {
        do {
          fVar3 = fVar7 * *local_a4 - *pfVar19 * fVar5;
          fVar11 = *pfVar17 * fVar2 - *pfVar18 * fVar1;
          fVar10 = *pfVar20 * fVar8 - *pfVar22 * fVar9;
          fVar6 = *pfVar24 + fVar10;
          fVar4 = fVar3 + fVar11;
          fVar10 = *pfVar24 - fVar10;
          fVar13 = *pfVar20 * fVar9 + *pfVar22 * fVar8;
          fVar3 = fVar3 - fVar11;
          fVar15 = *pfVar17 * fVar1 + *pfVar18 * fVar2;
          fVar11 = *local_a4 * fVar5 + *pfVar19 * fVar7;
          fVar14 = *local_a8 - fVar13;
          fVar13 = fVar13 + *local_a8;
          *pfVar24 = fVar4 + fVar6;
          fVar12 = fVar11 + fVar15;
          fVar11 = fVar11 - fVar15;
          *pfVar18 = fVar12 + fVar13;
          *pfVar22 = fVar6 - fVar4;
          *local_a4 = fVar12 - fVar13;
          local_a4 = local_a4 + 1;
          pfVar24 = pfVar24 + 1;
          *pfVar20 = fVar10 - fVar11;
          *pfVar19 = fVar3 + fVar14;
          *local_a8 = fVar10 + fVar11;
          local_a0 = (float *)((int)local_a0 + 1);
          pfVar20 = pfVar20 + 1;
          pfVar19 = pfVar19 + 1;
          pfVar22 = pfVar22 + 1;
          pfVar18 = pfVar18 + 1;
          *pfVar17 = fVar3 - fVar14;
          pfVar17 = pfVar17 + 1;
          local_a8 = local_a8 + 1;
        } while ((int)local_a0 < (int)param_1);
      }
      iVar23 = iVar23 + 2;
      local_64 = local_64 + 8;
    } while (iVar23 <= iVar21);
  }
  return;
}



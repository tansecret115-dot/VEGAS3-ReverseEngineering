/* Module: mp3plug.dll
   Function: FUN_5f6e57d0
   Address: 5f6e57d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6e57d0(uint param_1,int param_2,int param_3,float *param_4)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  float *local_b0;
  float *local_ac;
  float *local_a8;
  int local_78;
  float *local_70;
  int local_6c;
  float *local_50;
  int local_4c;
  
  if (param_2 < 5) {
    iVar21 = 0;
    pfVar24 = param_4 + param_1;
    pfVar27 = pfVar24 + param_1;
    pfVar22 = pfVar27 + param_1;
    if (0 < (int)param_1) {
      if (0 < (int)(param_1 & 0xfffffffe)) {
        do {
          fVar17 = *pfVar27 * _DAT_5f75d4d0;
          fVar1 = *pfVar24;
          fVar2 = *param_4;
          fVar3 = *param_4;
          fVar4 = *pfVar24;
          fVar18 = _DAT_5f75d4d4 * *pfVar22;
          *param_4 = fVar17 + fVar1 + fVar2;
          *pfVar27 = (fVar1 + fVar2) - fVar17;
          *pfVar24 = fVar18 + (fVar3 - fVar4);
          *pfVar22 = (fVar3 - fVar4) - fVar18;
          fVar17 = pfVar27[1] * _DAT_5f75d4d0;
          fVar1 = pfVar24[1];
          fVar2 = param_4[1];
          fVar3 = param_4[1];
          fVar4 = pfVar24[1];
          fVar18 = _DAT_5f75d4d4 * pfVar22[1];
          param_4[1] = fVar17 + fVar1 + fVar2;
          iVar21 = iVar21 + 2;
          param_4 = param_4 + 2;
          pfVar27[1] = (fVar1 + fVar2) - fVar17;
          pfVar27 = pfVar27 + 2;
          pfVar24[1] = fVar18 + (fVar3 - fVar4);
          pfVar22[1] = (fVar3 - fVar4) - fVar18;
          pfVar24 = pfVar24 + 2;
          pfVar22 = pfVar22 + 2;
        } while (iVar21 < (int)(param_1 & 0xfffffffe));
      }
      if (iVar21 < (int)param_1) {
        while( true ) {
          fVar18 = *pfVar27 * _DAT_5f75d4d0;
          fVar1 = *pfVar24;
          fVar2 = *param_4;
          fVar3 = *param_4;
          fVar4 = *pfVar24;
          fVar17 = _DAT_5f75d4d4 * *pfVar22;
          *param_4 = fVar18 + fVar1 + fVar2;
          iVar21 = iVar21 + 1;
          param_4 = param_4 + 1;
          *pfVar27 = (fVar1 + fVar2) - fVar18;
          pfVar27 = pfVar27 + 1;
          fVar1 = (fVar3 - fVar4) - fVar17;
          *pfVar24 = fVar17 + (fVar3 - fVar4);
          pfVar24 = pfVar24 + 1;
          if ((int)param_1 <= iVar21) break;
          *pfVar22 = fVar1;
          pfVar22 = pfVar22 + 1;
        }
        *pfVar22 = fVar1;
      }
    }
    return;
  }
  pfVar24 = param_4 + param_1;
  local_b0 = (float *)0x0;
  pfVar27 = pfVar24 + param_1;
  pfVar22 = pfVar27 + param_1;
  local_ac = param_4;
  pfVar28 = pfVar22 + param_1;
  pfVar23 = pfVar28 + param_1;
  local_a8 = pfVar23 + param_1;
  pfVar25 = local_a8 + param_1;
  if (0 < (int)param_1) {
    while( true ) {
      fVar1 = *pfVar24;
      fVar2 = *local_ac;
      fVar17 = *pfVar27 * _DAT_5f75d4b8;
      fVar3 = *pfVar24;
      fVar4 = *local_ac;
      fVar18 = *pfVar22 * _DAT_5f75d4bc;
      *local_ac = fVar17 + fVar1 + fVar2;
      *pfVar27 = (fVar1 + fVar2) - fVar17;
      *pfVar24 = fVar18 + (fVar4 - fVar3);
      *pfVar22 = (fVar4 - fVar3) - fVar18;
      fVar1 = *pfVar28;
      fVar2 = *pfVar25;
      fVar3 = *pfVar23;
      local_ac = local_ac + 1;
      pfVar24 = pfVar24 + 1;
      pfVar27 = pfVar27 + 1;
      pfVar22 = pfVar22 + 1;
      fVar4 = *local_a8;
      *pfVar28 = (*pfVar28 + *local_a8) * _DAT_5f75d4c0;
      fVar17 = (fVar2 + fVar3 + (fVar1 - fVar4)) * _DAT_5f75d4c8;
      *local_a8 = (*pfVar25 - *pfVar23) * _DAT_5f75d4c4;
      *pfVar23 = fVar17;
      local_a8 = local_a8 + 1;
      pfVar28 = pfVar28 + 1;
      fVar1 = ((fVar2 + fVar3) - (fVar1 - fVar4)) * _DAT_5f75d4cc;
      local_b0 = (float *)((int)local_b0 + 1);
      pfVar23 = pfVar23 + 1;
      if ((int)param_1 <= (int)local_b0) break;
      *pfVar25 = fVar1;
      pfVar25 = pfVar25 + 1;
    }
    *pfVar25 = fVar1;
  }
  local_50 = (float *)(&DAT_5f740740 + param_3 * 0x1fc);
  local_70 = (float *)(&DAT_5f73ff50 + param_3 * 0x1fc);
  iVar26 = (param_2 >> 2) + -2;
  local_78 = 2;
  local_4c = 2;
  iVar21 = 5;
  if (1 < iVar26) {
    local_6c = 8;
    do {
      iVar21 = iVar21 + -2;
      if (iVar21 <= local_78) {
        local_78 = local_4c;
        iVar21 = local_4c * 2 + -1;
      }
      fVar2 = -*local_70;
      fVar4 = *local_50 * fVar2 + *local_50 * fVar2;
      fVar18 = *local_50 * *local_50 - fVar2 * fVar2;
      fVar17 = *local_50 * fVar18 - fVar4 * fVar2;
      fVar3 = fVar2 * fVar18 + *local_50 * fVar4;
      fVar1 = *local_50;
      pfVar28 = (float *)(iVar21 * 4 * param_1 * 4 + (int)param_4);
      local_70 = local_70 + 1;
      local_50 = local_50 + 1;
      local_b0 = pfVar28 + param_1;
      pfVar27 = local_b0 + param_1;
      pfVar24 = pfVar27 + param_1;
      local_ac = (float *)(local_6c * param_1 * 4 + (int)param_4);
      pfVar22 = local_ac + param_1;
      local_a8 = (float *)0x0;
      pfVar25 = pfVar22 + param_1;
      pfVar23 = pfVar25 + param_1;
      if (0 < (int)param_1) {
        do {
          fVar5 = *pfVar22;
          fVar6 = *pfVar24;
          fVar7 = *pfVar24;
          fVar8 = *pfVar22;
          fVar9 = *pfVar25;
          fVar10 = *pfVar28;
          fVar11 = *pfVar27;
          fVar12 = *local_ac;
          fVar13 = *pfVar23;
          fVar19 = (*pfVar27 + *local_ac) - (*pfVar28 + *pfVar25);
          fVar14 = *pfVar23;
          fVar15 = *local_b0;
          fVar16 = *local_b0;
          *local_ac = *pfVar28 + *pfVar25 + *pfVar27 + *local_ac;
          local_ac = local_ac + 1;
          fVar20 = (fVar6 - fVar5) - (fVar16 - fVar13);
          *pfVar28 = (fVar16 - fVar13) + (fVar6 - fVar5);
          fVar13 = fVar14 + fVar15 + (fVar12 - fVar11);
          fVar11 = (fVar12 - fVar11) - (fVar14 + fVar15);
          fVar5 = (fVar10 - fVar9) + fVar7 + fVar8;
          fVar6 = (fVar7 + fVar8) - (fVar10 - fVar9);
          *pfVar22 = fVar1 * fVar13 - fVar2 * fVar5;
          *local_b0 = fVar2 * fVar13 + fVar5 * fVar1;
          local_b0 = local_b0 + 1;
          *pfVar25 = fVar18 * fVar19 - fVar4 * fVar20;
          *pfVar27 = fVar20 * fVar18 + fVar19 * fVar4;
          pfVar25 = pfVar25 + 1;
          local_a8 = (float *)((int)local_a8 + 1);
          *pfVar23 = fVar17 * fVar11 - fVar3 * fVar6;
          pfVar27 = pfVar27 + 1;
          pfVar23 = pfVar23 + 1;
          *pfVar24 = fVar6 * fVar17 + fVar11 * fVar3;
          pfVar24 = pfVar24 + 1;
          pfVar28 = pfVar28 + 1;
          pfVar22 = pfVar22 + 1;
        } while ((int)local_a8 < (int)param_1);
      }
      local_6c = local_6c + 8;
      local_4c = local_4c + 2;
    } while (local_4c <= iVar26);
  }
  return;
}



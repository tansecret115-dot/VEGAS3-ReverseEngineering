/* Module: erv13260.dll
   Function: FUN_635f8b10
   Address: 635f8b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f8b10(int param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_7 + 0x23cb);
  local_1c = (int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4;
  local_c = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
  iVar14 = local_1c + 1;
  iVar9 = local_c + 1;
  iVar16 = iVar2;
  if (*(int *)(param_7 + 0x1ce8) != 0) {
    iVar16 = (-(uint)(*(int *)(param_7 + 0x1cec) != 0) & 0x20) + 0x20 + iVar2;
  }
  iVar1 = iVar14 + iVar9 * 0x2a;
  bVar19 = *(int *)(*(int *)(param_3 + iVar1 * 4) + 0x14) == 2;
  iVar10 = *(int *)(*(int *)(param_3 + -0xa8 + iVar1 * 4) + 0x14);
  iVar12 = *(int *)(*(int *)(param_3 + -4 + iVar1 * 4) + 0x14);
  iVar1 = *(int *)(*(int *)(param_3 + 4 + iVar1 * 4) + 0x14);
  if (3 < param_6) {
    fprintf((FILE *)(_iob_exref + 0x20),s_Illegal_block_number_in_FindPred_6360668c);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_14 = iVar14;
  switch(param_6) {
  case 0:
    if (iVar10 != 4 && iVar10 != 3) {
      local_8 = -(uint)(iVar10 == 2) & 3;
    }
    else {
      local_8 = (uint)bVar19;
      local_c = iVar9;
    }
    uVar13 = -(uint)bVar19 & 3;
    if (iVar12 != 4 && iVar12 != 3) {
      local_18 = -(uint)(iVar12 == 2) & 2;
    }
    else {
      local_18 = (uint)bVar19;
      local_1c = iVar14;
    }
    local_10 = -(uint)bVar19 & 2;
    if (iVar9 == 1) {
      local_8 = (uint)bVar19;
      local_c = iVar9;
    }
    if (iVar14 == 1) {
      local_18 = (uint)bVar19;
      local_1c = iVar14;
    }
    break;
  case 1:
    if (iVar10 != 4 && iVar10 != 3) {
      local_8 = -(uint)(iVar10 == 2) & 4;
    }
    else {
      local_8 = -(uint)bVar19 & 2;
      local_c = iVar9;
    }
    uVar13 = -(uint)bVar19 & 4;
    local_18 = (uint)bVar19;
    if (iVar1 != 4 && iVar1 != 3) {
      local_10 = (uint)(iVar1 == 2);
      local_14 = local_1c + 2;
    }
    else {
      local_10 = -(uint)bVar19 & 2;
    }
    if (iVar9 == 1) {
      local_8 = -(uint)bVar19 & 2;
      local_c = iVar9;
    }
    local_1c = iVar14;
    if (iVar14 == (int)((iVar2 >> 0x1f & 0xfU) + iVar2) >> 4) {
      local_10 = -(uint)bVar19 & 2;
      local_14 = iVar14;
    }
    break;
  case 2:
    local_8 = (uint)bVar19;
    uVar13 = -(uint)bVar19 & 3;
    iVar2 = iVar14;
    local_18 = uVar13;
    if (iVar12 != 4 && iVar12 != 3) {
      iVar2 = local_1c;
      local_18 = -(uint)(iVar12 == 2) & 4;
    }
    local_1c = iVar2;
    local_10 = -(uint)bVar19 & 4;
    local_c = iVar9;
    if (iVar14 == 1) {
      local_1c = iVar14;
      local_18 = uVar13;
    }
    break;
  case 3:
    local_8 = -(uint)bVar19 & 2;
    uVar13 = -(uint)bVar19 & 4;
    local_10 = uVar13;
    if (iVar1 != 4 && iVar1 != 3) {
      local_14 = local_1c + 2;
      local_10 = -(uint)(iVar1 == 2) & 3;
    }
    local_1c = iVar14;
    local_18 = -(uint)bVar19 & 3;
    local_c = iVar9;
    if (iVar14 == (int)((iVar2 >> 0x1f & 0xfU) + iVar2) >> 4) {
      local_14 = iVar14;
      local_10 = uVar13;
    }
  }
  piVar3 = *(int **)(param_3 + (iVar14 + ((-(uint)bVar19 & param_6 + 1) * 0x1f + iVar9) * 0x2a) * 4)
  ;
  piVar4 = *(int **)(param_3 + (iVar14 + (local_8 * 0x1f + local_c) * 0x2a) * 4);
  piVar5 = *(int **)(param_3 + (iVar14 + (uVar13 * 0x1f + iVar9) * 0x2a) * 4);
  piVar6 = *(int **)(param_3 + (local_14 + (local_10 * 0x1f + iVar9) * 0x2a) * 4);
  piVar7 = *(int **)(param_3 + (local_1c + (local_18 * 0x1f + iVar9) * 0x2a) * 4);
  iVar10 = (param_1 + ((param_2 + (param_6 & 2) * 4) * iVar16 + (param_6 & 1) * 4) * 2) * 2;
  pbVar8 = (byte *)(piVar3[2] + ((piVar3[3] + piVar3[1] * 2) * iVar16 + *piVar3) * 2 + iVar10 +
                   param_4);
  pbVar11 = (byte *)(piVar4[2] + ((piVar4[3] + piVar4[1] * 2) * iVar16 + *piVar4) * 2 + iVar10 +
                    param_4);
  iVar2 = piVar5[1];
  iVar9 = piVar5[3];
  iVar14 = *piVar5;
  iVar1 = piVar5[2];
  iVar15 = piVar6[2] + ((piVar6[3] + piVar6[1] * 2) * iVar16 + *piVar6) * 2 + iVar10 + param_4;
  pbVar17 = (byte *)(piVar7[2] + ((piVar7[3] + piVar7[1] * 2) * iVar16 + *piVar7) * 2 + iVar10 +
                    param_4);
  *param_5 = (int)((*pbVar11 + 2 + (uint)*pbVar8 * 2 + (uint)*pbVar17) * 2) >> 3;
  param_5[1] = (int)(pbVar17[2] + 4 + (uint)pbVar11[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[2] = (int)(pbVar17[4] + 4 + (uint)pbVar11[4] * 2 + (uint)pbVar8[4] * 5) >> 3;
  param_5[3] = (int)(pbVar17[6] + 4 + (uint)pbVar11[6] * 2 + (uint)pbVar8[6] * 5) >> 3;
  param_5[4] = (int)(*(byte *)(iVar15 + 8) + 4 + (uint)pbVar11[8] * 2 + (uint)pbVar8[8] * 5) >> 3;
  param_5[5] = (int)(*(byte *)(iVar15 + 10) + 4 + (uint)pbVar11[10] * 2 + (uint)pbVar8[10] * 5) >> 3
  ;
  param_5[6] = (int)(*(byte *)(iVar15 + 0xc) + 4 + (uint)pbVar11[0xc] * 2 + (uint)pbVar8[0xc] * 5)
               >> 3;
  param_5[7] = (int)((*(byte *)(iVar15 + 0xe) + 2 + (uint)pbVar8[0xe] * 2 + (uint)pbVar11[0xe]) * 2)
               >> 3;
  iVar12 = iVar16 * 4;
  pbVar8 = pbVar8 + iVar12;
  pbVar11 = pbVar11 + iVar12;
  iVar15 = iVar15 + iVar12;
  pbVar17 = pbVar17 + iVar12;
  param_5[0x10] = (int)((uint)*pbVar8 * 5 + 4 + (uint)*pbVar17 * 2 + (uint)*pbVar11) >> 3;
  param_5[0x11] = (int)(pbVar11[2] + 4 + (uint)pbVar17[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[0x12] = (int)(pbVar17[4] + 4 + (uint)pbVar11[4] * 2 + (uint)pbVar8[4] * 5) >> 3;
  param_5[0x13] = (int)(pbVar17[6] + 4 + (uint)pbVar11[6] * 2 + (uint)pbVar8[6] * 5) >> 3;
  param_5[0x14] = (int)(*(byte *)(iVar15 + 8) + 4 + (uint)pbVar11[8] * 2 + (uint)pbVar8[8] * 5) >> 3
  ;
  param_5[0x15] =
       (int)(*(byte *)(iVar15 + 10) + 4 + (uint)pbVar11[10] * 2 + (uint)pbVar8[10] * 5) >> 3;
  param_5[0x16] =
       (int)(pbVar11[0xc] + 4 + (uint)*(byte *)(iVar15 + 0xc) * 2 + (uint)pbVar8[0xc] * 5) >> 3;
  param_5[0x17] =
       (int)(pbVar11[0xe] + 4 + (uint)*(byte *)(iVar15 + 0xe) * 2 + (uint)pbVar8[0xe] * 5) >> 3;
  pbVar8 = pbVar8 + iVar12;
  pbVar11 = pbVar11 + iVar12;
  pbVar18 = (byte *)(iVar1 + ((iVar9 + iVar2 * 2) * iVar16 + iVar14) * 2 + iVar10 + param_4 +
                    iVar16 * 0x10);
  iVar15 = iVar15 + iVar12;
  pbVar17 = pbVar17 + iVar12;
  param_5[0x20] = (int)((uint)*pbVar8 * 5 + 4 + (uint)*pbVar17 * 2 + (uint)*pbVar11) >> 3;
  param_5[0x21] = (int)(pbVar11[2] + 4 + (uint)pbVar17[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[0x22] = (int)((uint)pbVar17[4] + (uint)pbVar11[4] + 4 + (uint)pbVar8[4] * 6) >> 3;
  param_5[0x23] = (int)((uint)pbVar17[6] + (uint)pbVar11[6] + 4 + (uint)pbVar8[6] * 6) >> 3;
  param_5[0x24] =
       (int)((uint)pbVar11[8] + (uint)*(byte *)(iVar15 + 8) + 4 + (uint)pbVar8[8] * 6) >> 3;
  param_5[0x25] =
       (int)((uint)pbVar11[10] + (uint)*(byte *)(iVar15 + 10) + 4 + (uint)pbVar8[10] * 6) >> 3;
  param_5[0x26] =
       (int)(pbVar11[0xc] + 4 + (uint)*(byte *)(iVar15 + 0xc) * 2 + (uint)pbVar8[0xc] * 5) >> 3;
  param_5[0x27] =
       (int)(pbVar11[0xe] + 4 + (uint)*(byte *)(iVar15 + 0xe) * 2 + (uint)pbVar8[0xe] * 5) >> 3;
  pbVar8 = pbVar8 + iVar12;
  pbVar11 = pbVar11 + iVar12;
  iVar15 = iVar15 + iVar12;
  pbVar17 = pbVar17 + iVar12;
  param_5[0x30] = (int)((uint)*pbVar8 * 5 + 4 + (uint)*pbVar17 * 2 + (uint)*pbVar11) >> 3;
  param_5[0x31] = (int)(pbVar11[2] + 4 + (uint)pbVar17[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[0x32] = (int)((uint)pbVar17[4] + (uint)pbVar11[4] + 4 + (uint)pbVar8[4] * 6) >> 3;
  param_5[0x33] = (int)((uint)pbVar17[6] + (uint)pbVar11[6] + 4 + (uint)pbVar8[6] * 6) >> 3;
  param_5[0x34] =
       (int)((uint)pbVar11[8] + (uint)*(byte *)(iVar15 + 8) + 4 + (uint)pbVar8[8] * 6) >> 3;
  param_5[0x35] =
       (int)((uint)pbVar11[10] + (uint)*(byte *)(iVar15 + 10) + 4 + (uint)pbVar8[10] * 6) >> 3;
  param_5[0x36] =
       (int)(pbVar11[0xc] + 4 + (uint)*(byte *)(iVar15 + 0xc) * 2 + (uint)pbVar8[0xc] * 5) >> 3;
  param_5[0x37] =
       (int)(pbVar11[0xe] + 4 + (uint)*(byte *)(iVar15 + 0xe) * 2 + (uint)pbVar8[0xe] * 5) >> 3;
  pbVar8 = pbVar8 + iVar12;
  iVar15 = iVar15 + iVar12;
  pbVar17 = pbVar17 + iVar12;
  param_5[0x40] = (int)((uint)*pbVar8 * 5 + 4 + (uint)*pbVar17 * 2 + (uint)*pbVar18) >> 3;
  param_5[0x41] = (int)(pbVar18[2] + 4 + (uint)pbVar17[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[0x42] = (int)((uint)pbVar17[4] + (uint)pbVar18[4] + 4 + (uint)pbVar8[4] * 6) >> 3;
  param_5[0x43] = (int)((uint)pbVar17[6] + (uint)pbVar18[6] + 4 + (uint)pbVar8[6] * 6) >> 3;
  param_5[0x44] =
       (int)((uint)pbVar18[8] + (uint)*(byte *)(iVar15 + 8) + 4 + (uint)pbVar8[8] * 6) >> 3;
  param_5[0x45] =
       (int)((uint)pbVar18[10] + (uint)*(byte *)(iVar15 + 10) + 4 + (uint)pbVar8[10] * 6) >> 3;
  param_5[0x46] =
       (int)(pbVar18[0xc] + 4 + (uint)*(byte *)(iVar15 + 0xc) * 2 + (uint)pbVar8[0xc] * 5) >> 3;
  param_5[0x47] =
       (int)(pbVar18[0xe] + 4 + (uint)*(byte *)(iVar15 + 0xe) * 2 + (uint)pbVar8[0xe] * 5) >> 3;
  pbVar8 = pbVar8 + iVar12;
  pbVar18 = pbVar18 + iVar12;
  iVar15 = iVar15 + iVar12;
  pbVar17 = pbVar17 + iVar12;
  param_5[0x50] = (int)((uint)*pbVar8 * 5 + 4 + (uint)*pbVar17 * 2 + (uint)*pbVar18) >> 3;
  param_5[0x51] = (int)(pbVar18[2] + 4 + (uint)pbVar17[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[0x52] = (int)((uint)pbVar17[4] + (uint)pbVar18[4] + 4 + (uint)pbVar8[4] * 6) >> 3;
  param_5[0x53] = (int)((uint)pbVar17[6] + (uint)pbVar18[6] + 4 + (uint)pbVar8[6] * 6) >> 3;
  param_5[0x54] =
       (int)((uint)pbVar18[8] + (uint)*(byte *)(iVar15 + 8) + 4 + (uint)pbVar8[8] * 6) >> 3;
  param_5[0x55] =
       (int)((uint)pbVar18[10] + (uint)*(byte *)(iVar15 + 10) + 4 + (uint)pbVar8[10] * 6) >> 3;
  param_5[0x56] =
       (int)(pbVar18[0xc] + 4 + (uint)*(byte *)(iVar15 + 0xc) * 2 + (uint)pbVar8[0xc] * 5) >> 3;
  param_5[0x57] =
       (int)(pbVar18[0xe] + 4 + (uint)*(byte *)(iVar15 + 0xe) * 2 + (uint)pbVar8[0xe] * 5) >> 3;
  pbVar17 = pbVar17 + iVar12;
  pbVar8 = pbVar8 + iVar12;
  pbVar18 = pbVar18 + iVar12;
  iVar15 = iVar15 + iVar12;
  param_5[0x60] = (int)((uint)*pbVar8 * 5 + 4 + (uint)*pbVar17 * 2 + (uint)*pbVar18) >> 3;
  param_5[0x61] = (int)(pbVar18[2] + 4 + (uint)pbVar17[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[0x62] = (int)(pbVar17[4] + 4 + (uint)pbVar18[4] * 2 + (uint)pbVar8[4] * 5) >> 3;
  param_5[99] = (int)(pbVar17[6] + 4 + (uint)pbVar18[6] * 2 + (uint)pbVar8[6] * 5) >> 3;
  param_5[100] = (int)(*(byte *)(iVar15 + 8) + 4 + (uint)pbVar18[8] * 2 + (uint)pbVar8[8] * 5) >> 3;
  param_5[0x65] =
       (int)(*(byte *)(iVar15 + 10) + 4 + (uint)pbVar18[10] * 2 + (uint)pbVar8[10] * 5) >> 3;
  param_5[0x66] =
       (int)(pbVar18[0xc] + 4 + (uint)*(byte *)(iVar15 + 0xc) * 2 + (uint)pbVar8[0xc] * 5) >> 3;
  param_5[0x67] =
       (int)(pbVar18[0xe] + 4 + (uint)*(byte *)(iVar15 + 0xe) * 2 + (uint)pbVar8[0xe] * 5) >> 3;
  pbVar17 = pbVar17 + iVar12;
  pbVar8 = pbVar8 + iVar12;
  pbVar18 = pbVar18 + iVar12;
  iVar15 = iVar15 + iVar12;
  param_5[0x70] = (int)((*pbVar18 + 2 + (uint)*pbVar8 * 2 + (uint)*pbVar17) * 2) >> 3;
  param_5[0x71] = (int)(pbVar17[2] + 4 + (uint)pbVar18[2] * 2 + (uint)pbVar8[2] * 5) >> 3;
  param_5[0x72] = (int)(pbVar17[4] + 4 + (uint)pbVar18[4] * 2 + (uint)pbVar8[4] * 5) >> 3;
  param_5[0x73] = (int)(pbVar17[6] + 4 + (uint)pbVar18[6] * 2 + (uint)pbVar8[6] * 5) >> 3;
  param_5[0x74] = (int)(*(byte *)(iVar15 + 8) + 4 + (uint)pbVar18[8] * 2 + (uint)pbVar8[8] * 5) >> 3
  ;
  param_5[0x75] =
       (int)(*(byte *)(iVar15 + 10) + 4 + (uint)pbVar18[10] * 2 + (uint)pbVar8[10] * 5) >> 3;
  param_5[0x76] =
       (int)(*(byte *)(iVar15 + 0xc) + 4 + (uint)pbVar18[0xc] * 2 + (uint)pbVar8[0xc] * 5) >> 3;
  param_5[0x77] =
       (int)((*(byte *)(iVar15 + 0xe) + 2 + (uint)pbVar8[0xe] * 2 + (uint)pbVar18[0xe]) * 2) >> 3;
  return;
}



/* Module: rnco3260.dll
   Function: FUN_6372a0f0
   Address: 6372a0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6372a0f0(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,uint param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint local_20;
  uint local_10;
  
  local_10 = param_4;
  if (((param_9 & 1) != 0) && (param_4 != 0)) {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar14 = (&DAT_63791580)[*param_5];
    uVar3 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
    iVar15 = (&DAT_63791580)[*param_6];
    uVar4 = (&DAT_637903e0)[iVar14 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
    uVar5 = (&DAT_637903e0)[iVar15 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
    uVar6 = (&DAT_637903e0)[iVar15 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
    uVar7 = (&DAT_637903e0)[iVar15 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    *param_1 = (&DAT_637903e0)[iVar14 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
    param_1[2] = uVar4;
    param_1[1] = uVar3;
    *param_2 = uVar6;
    param_2[2] = uVar5;
    param_2[1] = uVar7;
    param_1 = param_1 + 3;
    param_2 = param_2 + 3;
    local_10 = param_4 - 1;
  }
  if (1 < (int)local_10) {
    local_20 = local_10 >> 1;
    puVar18 = param_1;
    puVar19 = param_2;
    do {
      bVar1 = *param_7;
      bVar2 = *param_8;
      iVar21 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
      iVar22 = (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2];
      iVar20 = (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2];
      iVar14 = (&DAT_63791580)[*param_5];
      iVar15 = (&DAT_63791580)[*param_6];
      iVar16 = (&DAT_63791580)[param_5[1]];
      iVar17 = (&DAT_63791580)[param_6[1]];
      uVar3 = (&DAT_637903e0)[iVar14 + iVar22];
      uVar4 = (&DAT_637903e0)[iVar14 + iVar20];
      uVar5 = (&DAT_637903e0)[iVar15 + iVar21];
      uVar6 = (&DAT_637903e0)[iVar15 + iVar22];
      uVar7 = (&DAT_637903e0)[iVar15 + iVar20];
      uVar8 = (&DAT_637903e0)[iVar16 + iVar21];
      uVar9 = (&DAT_637903e0)[iVar16 + iVar22];
      uVar10 = (&DAT_637903e0)[iVar16 + iVar20];
      uVar11 = (&DAT_637903e0)[iVar17 + iVar21];
      uVar12 = (&DAT_637903e0)[iVar17 + iVar22];
      uVar13 = (&DAT_637903e0)[iVar17 + iVar20];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      param_1 = puVar18 + 6;
      param_2 = puVar19 + 6;
      *puVar18 = (&DAT_637903e0)[iVar14 + iVar21];
      puVar18[1] = uVar3;
      puVar18[2] = uVar4;
      puVar18[3] = uVar8;
      puVar18[4] = uVar9;
      puVar18[5] = uVar10;
      *puVar19 = uVar5;
      puVar19[1] = uVar6;
      puVar19[2] = uVar7;
      puVar19[3] = uVar11;
      puVar19[5] = uVar13;
      puVar19[4] = uVar12;
      local_10 = local_10 - 2;
      local_20 = local_20 - 1;
      puVar18 = param_1;
      puVar19 = param_2;
    } while (local_20 != 0);
  }
  if (local_10 != 0) {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar14 = (&DAT_63791580)[*param_5];
    iVar15 = (&DAT_63791580)[*param_6];
    uVar3 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
    uVar4 = (&DAT_637903e0)[iVar14 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
    uVar5 = (&DAT_637903e0)[iVar15 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
    uVar6 = (&DAT_637903e0)[iVar15 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
    uVar7 = (&DAT_637903e0)[iVar15 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
    *param_1 = (&DAT_637903e0)[iVar14 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    *param_2 = uVar5;
    param_2[1] = uVar6;
    param_2[2] = uVar7;
  }
  return;
}



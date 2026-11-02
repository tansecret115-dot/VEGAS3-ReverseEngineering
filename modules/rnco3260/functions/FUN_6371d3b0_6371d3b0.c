/* Module: rnco3260.dll
   Function: FUN_6371d3b0
   Address: 6371d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6371d3b0(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,uint param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9)

{
  byte bVar1;
  undefined1 uVar2;
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
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint local_20;
  uint local_10;
  
  local_10 = param_4;
  if (((param_9 & 1) != 0) && (param_4 != 0)) {
    bVar1 = *param_7;
    iVar13 = (&DAT_63791580)[*param_5];
    iVar14 = (&DAT_63791580)[*param_6];
    uVar2 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[*param_8]];
    uVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[*param_8]];
    uVar4 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[*param_8]];
    uVar5 = (&DAT_637903e0)[iVar14 + (&DAT_63792180)[*param_8]];
    uVar6 = (&DAT_637903e0)[iVar14 + (&DAT_63790960)[bVar1]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    *param_1 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar1]];
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    *param_2 = uVar6;
    param_1 = param_1 + 3;
    param_2 = param_2 + 3;
    local_10 = param_4 - 1;
  }
  if (1 < (int)local_10) {
    local_20 = local_10 >> 1;
    do {
      iVar13 = (&DAT_63790960)[*param_7];
      iVar14 = (&DAT_63792180)[*param_8];
      iVar19 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar15 = (&DAT_63791580)[*param_5];
      iVar16 = (&DAT_63791580)[*param_6];
      iVar17 = (&DAT_63791580)[param_5[1]];
      iVar18 = (&DAT_63791580)[param_6[1]];
      uVar2 = (&DAT_637903e0)[iVar15 + iVar19];
      uVar3 = (&DAT_637903e0)[iVar15 + iVar14];
      uVar4 = (&DAT_637903e0)[iVar16 + iVar13];
      uVar5 = (&DAT_637903e0)[iVar16 + iVar19];
      uVar6 = (&DAT_637903e0)[iVar16 + iVar14];
      uVar7 = (&DAT_637903e0)[iVar17 + iVar13];
      uVar8 = (&DAT_637903e0)[iVar17 + iVar19];
      uVar9 = (&DAT_637903e0)[iVar17 + iVar14];
      uVar10 = (&DAT_637903e0)[iVar18 + iVar13];
      uVar11 = (&DAT_637903e0)[iVar18 + iVar19];
      uVar12 = (&DAT_637903e0)[iVar18 + iVar14];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      *param_1 = (&DAT_637903e0)[iVar15 + iVar13];
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar10;
      param_2[5] = uVar12;
      param_2[4] = uVar11;
      param_1 = param_1 + 6;
      param_2 = param_2 + 6;
      local_10 = local_10 - 2;
      local_20 = local_20 - 1;
    } while (local_20 != 0);
  }
  if (local_10 != 0) {
    iVar13 = (&DAT_63791580)[*param_5];
    uVar2 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
    iVar14 = (&DAT_63791580)[*param_6];
    uVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[*param_8]];
    uVar4 = (&DAT_637903e0)[iVar14 + (&DAT_63790960)[*param_7]];
    uVar5 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
    uVar6 = (&DAT_637903e0)[iVar14 + (&DAT_63792180)[*param_8]];
    *param_1 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[*param_7]];
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    *param_2 = uVar4;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
  }
  return;
}



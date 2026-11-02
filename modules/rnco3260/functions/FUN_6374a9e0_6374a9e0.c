/* Module: rnco3260.dll
   Function: FUN_6374a9e0
   Address: 6374a9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6374a9e0(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
            uint param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,byte param_12)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  uint3 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint local_8;
  
  local_8 = param_7;
  if (((param_12 & 1) != 0) && (param_7 != 0)) {
    bVar1 = *param_10;
    bVar2 = *param_11;
    iVar6 = (&DAT_63791580)[*param_8];
    iVar7 = (&DAT_63791580)[*param_9];
    uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)
                               [iVar6 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]],
                               (&DAT_637903e0)
                               [iVar6 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                      (&DAT_637903e0)[iVar6 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
    uVar15 = (uint)uVar10;
    uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)
                               [iVar7 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]],
                               (&DAT_637903e0)
                               [iVar7 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                      (&DAT_637903e0)[iVar7 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    *param_3 = uVar15;
    param_3 = param_3 + 1;
    *param_5 = (uint)uVar11;
    param_5 = param_5 + 1;
    *param_2 = ((*param_1 ^ uVar15) >> 1 & 0x7f7f7f) + (*param_1 & uVar15);
    param_2 = param_2 + 1;
    *param_4 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
    param_4 = param_4 + 1;
    local_8 = param_7 - 1;
    param_1 = param_1 + 1;
  }
  piVar18 = param_4;
  piVar21 = param_2;
  if (1 < (int)local_8) {
    _param_12 = local_8 >> 1;
    do {
      bVar1 = *param_10;
      bVar2 = *param_11;
      iVar20 = (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2];
      iVar22 = (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2];
      iVar14 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
      iVar6 = (&DAT_63791580)[*param_8];
      iVar7 = (&DAT_63791580)[*param_9];
      iVar8 = (&DAT_63791580)[param_8[1]];
      iVar9 = (&DAT_63791580)[param_9[1]];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar14],(&DAT_637903e0)[iVar6 + iVar20]),
                        (&DAT_637903e0)[iVar6 + iVar22]);
      uVar16 = (uint)uVar10;
      uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar14],(&DAT_637903e0)[iVar7 + iVar20]),
                        (&DAT_637903e0)[iVar7 + iVar22]);
      uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar14],(&DAT_637903e0)[iVar8 + iVar20]),
                        (&DAT_637903e0)[iVar8 + iVar22]);
      uVar17 = (uint)uVar12;
      uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar14],(&DAT_637903e0)[iVar9 + iVar20]),
                        (&DAT_637903e0)[iVar9 + iVar22]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      *param_3 = uVar16;
      param_3[1] = uVar17;
      param_3 = param_3 + 2;
      *param_5 = (uint)uVar11;
      param_5[1] = (uint)uVar13;
      param_5 = param_5 + 2;
      puVar19 = param_1 + 2;
      uVar15 = param_1[1];
      *param_2 = ((*param_1 ^ uVar16) >> 1 & 0x7f7f7f) + (*param_1 & uVar16);
      piVar21 = param_2 + 2;
      piVar18 = param_4 + 2;
      param_2[1] = ((uVar15 ^ uVar17) >> 1 & 0x7f7f7f) + (uVar15 & uVar17);
      param_4[1] = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
      *param_4 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      local_8 = local_8 - 2;
      _param_12 = _param_12 - 1;
      param_1 = puVar19;
      param_2 = piVar21;
      param_4 = piVar18;
    } while (_param_12 != 0);
  }
  if (local_8 != 0) {
    bVar1 = *param_10;
    bVar2 = *param_11;
    iVar6 = (&DAT_63791580)[*param_8];
    iVar7 = (&DAT_63791580)[*param_9];
    uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)
                               [iVar6 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]],
                               (&DAT_637903e0)
                               [iVar6 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                      (&DAT_637903e0)[iVar6 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
    uVar15 = (uint)uVar10;
    uVar3 = (&DAT_637903e0)[iVar7 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
    uVar4 = (&DAT_637903e0)[iVar7 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
    uVar5 = (&DAT_637903e0)[iVar7 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
    *param_3 = uVar15;
    uVar11 = CONCAT21(CONCAT11(uVar3,uVar4),uVar5);
    *param_5 = (uint)uVar11;
    *piVar21 = ((*param_1 ^ uVar15) >> 1 & 0x7f7f7f) + (*param_1 & uVar15);
    *piVar18 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
  }
  return;
}



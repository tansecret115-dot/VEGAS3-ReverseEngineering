/* Module: rnco3260.dll
   Function: FUN_637482d0
   Address: 637482d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637482d0(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
            int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,uint param_12,
            int param_13)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint3 uVar5;
  uint3 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_7 >> 1;
  iVar7 = param_7 - local_10;
  if ((param_13 + param_12 & 1) != 0) {
    iVar7 = iVar7 + param_7;
  }
  if (param_7 == 0) {
    return;
  }
  local_8 = param_7 - iVar7 / param_13;
  if (0 < local_8) {
    if ((param_12 & 1) == 0) goto LAB_637483e6;
    bVar1 = *param_11;
    bVar2 = *param_10;
    iVar9 = (&DAT_63791580)[*param_8];
    iVar11 = (&DAT_63791580)[*param_9];
    local_14 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar9 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar9 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar9 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
    local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                      [iVar11 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                      (&DAT_637903e0)
                                      [iVar11 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                             (&DAT_637903e0)
                             [iVar11 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    piVar13 = param_2;
    puVar15 = param_3;
    while( true ) {
      param_11 = param_11 + 1;
      param_10 = param_10 + 1;
      param_2 = piVar13 + 1;
      param_3 = puVar15 + 1;
      iVar9 = ((*param_1 ^ local_14) >> 1 & 0x7f7f7f) + (*param_1 & local_14);
      *piVar13 = iVar9;
      *puVar15 = local_14;
      iVar11 = ((local_c ^ local_14) >> 1 & 0x7f7f7f) + (local_c & local_14);
      *param_4 = iVar11;
      param_4 = param_4 + 1;
      param_1 = param_1 + 1;
      *param_5 = local_c;
      param_5 = param_5 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) break;
      while (local_10 = local_10 - param_13, -1 < local_10) {
        *param_2 = iVar9;
        param_1 = param_1 + 1;
        *param_3 = local_14;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = iVar11;
        param_4 = param_4 + 1;
        *param_5 = local_c;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_63748686;
        }
      }
      local_10 = local_10 + param_7;
LAB_637483e6:
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar12 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar14 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar8 = (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2];
      iVar9 = (&DAT_63791580)[*param_8];
      iVar11 = (&DAT_63791580)[*param_9];
      iVar3 = (&DAT_63791580)[param_8[1]];
      iVar4 = (&DAT_63791580)[param_9[1]];
      uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar14],(&DAT_637903e0)[iVar9 + iVar12]),
                       (&DAT_637903e0)[iVar9 + iVar8]);
      uVar10 = (uint)uVar5;
      uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar11 + iVar14],(&DAT_637903e0)[iVar11 + iVar12]),
                       (&DAT_637903e0)[iVar11 + iVar8]);
      local_14 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar14],
                                         (&DAT_637903e0)[iVar3 + iVar12]),
                                (&DAT_637903e0)[iVar3 + iVar8]);
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar14],
                                        (&DAT_637903e0)[iVar4 + iVar12]),
                               (&DAT_637903e0)[iVar4 + iVar8]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      iVar9 = ((*param_1 ^ uVar10) >> 1 & 0x7f7f7f) + (*param_1 & uVar10);
      iVar11 = ((uint3)((uVar6 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar5);
      *param_2 = iVar9;
      param_2 = param_2 + 1;
      *param_3 = uVar10;
      param_3 = param_3 + 1;
      *param_4 = iVar11;
      param_4 = param_4 + 1;
      *param_5 = (uint)uVar6;
      param_5 = param_5 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) goto LAB_6374877e;
      while( true ) {
        param_1 = param_1 + 1;
        local_10 = local_10 - param_13;
        if (local_10 < 0) break;
        *param_2 = iVar9;
        *param_3 = uVar10;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = iVar11;
        param_4 = param_4 + 1;
        *param_5 = (uint)uVar6;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_6374877e;
        }
      }
      local_10 = local_10 + param_7;
      piVar13 = param_2;
      puVar15 = param_3;
    }
LAB_63748686:
    if ((param_13 + param_12 & 1) == 0) goto LAB_6374877e;
  }
  bVar1 = *param_11;
  bVar2 = *param_10;
  iVar9 = (&DAT_63791580)[*param_8];
  iVar11 = (&DAT_63791580)[*param_9];
  uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
                            ,(&DAT_637903e0)
                             [iVar9 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                   (&DAT_637903e0)[iVar9 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
  local_14 = (uint)uVar5;
  uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)
                            [iVar11 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                            (&DAT_637903e0)
                            [iVar11 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                   (&DAT_637903e0)[iVar11 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
  local_c = (uint)uVar6;
  iVar9 = ((*param_1 ^ local_14) >> 1 & 0x7f7f7f) + (*param_1 & local_14);
  iVar11 = ((uint3)((uVar6 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar5);
LAB_6374877e:
  for (local_8 = local_8 + iVar7 / param_13; local_8 != 0; local_8 = local_8 + -1) {
    *param_2 = iVar9;
    *param_3 = local_14;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    *param_4 = iVar11;
    param_4 = param_4 + 1;
    *param_5 = local_c;
    param_5 = param_5 + 1;
  }
  return;
}



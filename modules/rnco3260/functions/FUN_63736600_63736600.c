/* Module: rnco3260.dll
   Function: FUN_63736600
   Address: 63736600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63736600(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
            int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,uint param_12,
            int param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint3 uVar5;
  uint3 uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_c = param_7 >> 1;
  iVar7 = param_7 - local_c;
  if ((param_13 + param_12 & 1) != 0) {
    iVar7 = iVar7 + param_7;
  }
  if (param_7 == 0) {
    return;
  }
  local_8 = param_7 - iVar7 / param_13;
  puVar8 = param_5;
  if (0 < local_8) {
    if ((param_12 & 1) == 0) goto LAB_63736706;
    iVar10 = (&DAT_63791580)[*param_8];
    iVar12 = (&DAT_63791580)[*param_9];
    local_10 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar10 + (&DAT_63790960)[*param_10]],
                                       (&DAT_637903e0)
                                       [iVar10 + (&DAT_63791d80)[*param_10] +
                                                 (&DAT_637929a0)[*param_11]]),
                              (&DAT_637903e0)[iVar10 + (&DAT_63792180)[*param_11]]);
    local_14 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar12 + (&DAT_63790960)[*param_10]],
                                       (&DAT_637903e0)
                                       [iVar12 + (&DAT_63791d80)[*param_10] +
                                                 (&DAT_637929a0)[*param_11]]),
                              (&DAT_637903e0)[iVar12 + (&DAT_63792180)[*param_11]]);
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    piVar13 = param_2;
    while( true ) {
      param_11 = param_11 + 1;
      param_10 = param_10 + 1;
      param_2 = piVar13 + 1;
      puVar8 = param_5 + 1;
      iVar10 = ((*param_1 ^ local_10) >> 1 & 0x7f7f7f) + (*param_1 & local_10);
      *piVar13 = iVar10;
      iVar12 = ((local_14 ^ local_10) >> 1 & 0x7f7f7f) + (local_14 & local_10);
      param_1 = param_1 + 1;
      *param_3 = local_10;
      param_3 = param_3 + 1;
      *param_4 = iVar12;
      param_4 = param_4 + 1;
      *param_5 = local_14;
      local_8 = local_8 + -1;
      param_5 = puVar8;
      if (local_8 == 0) break;
      while (local_c = local_c - param_13, -1 < local_c) {
        param_1 = param_1 + 1;
        *param_2 = iVar10;
        *param_3 = local_10;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        puVar8 = param_5 + 1;
        *param_4 = iVar12;
        param_4 = param_4 + 1;
        *param_5 = local_14;
        local_8 = local_8 + -1;
        param_5 = puVar8;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_637369a2;
        }
      }
      local_c = local_c + param_7;
LAB_63736706:
      iVar10 = (&DAT_63790960)[*param_10];
      iVar12 = (&DAT_63792180)[*param_11];
      iVar9 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar1 = (&DAT_63791580)[*param_8];
      iVar2 = (&DAT_63791580)[*param_9];
      iVar3 = (&DAT_63791580)[param_8[1]];
      iVar4 = (&DAT_63791580)[param_9[1]];
      uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar1 + iVar10],(&DAT_637903e0)[iVar1 + iVar9]),
                       (&DAT_637903e0)[iVar1 + iVar12]);
      uVar11 = (uint)uVar5;
      uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar2 + iVar10],(&DAT_637903e0)[iVar2 + iVar9]),
                       (&DAT_637903e0)[iVar2 + iVar12]);
      local_10 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar10],
                                         (&DAT_637903e0)[iVar3 + iVar9]),
                                (&DAT_637903e0)[iVar3 + iVar12]);
      local_14 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar10],
                                         (&DAT_637903e0)[iVar4 + iVar9]),
                                (&DAT_637903e0)[iVar4 + iVar12]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      iVar10 = ((*param_1 ^ uVar11) >> 1 & 0x7f7f7f) + (*param_1 & uVar11);
      iVar12 = ((uint3)((uVar6 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar5);
      *param_2 = iVar10;
      param_2 = param_2 + 1;
      *param_3 = uVar11;
      param_3 = param_3 + 1;
      *param_4 = iVar12;
      param_4 = param_4 + 1;
      *param_5 = (uint)uVar6;
      puVar8 = param_5 + 1;
      local_8 = local_8 + -1;
      param_5 = puVar8;
      if (local_8 == 0) goto LAB_63736a8a;
      while( true ) {
        param_1 = param_1 + 1;
        local_c = local_c - param_13;
        if (local_c < 0) break;
        *param_2 = iVar10;
        *param_3 = uVar11;
        param_3 = param_3 + 1;
        *param_4 = iVar12;
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
        *param_5 = (uint)uVar6;
        puVar8 = param_5 + 1;
        local_8 = local_8 + -1;
        param_5 = puVar8;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_63736a8a;
        }
      }
      local_c = local_c + param_7;
      piVar13 = param_2;
    }
LAB_637369a2:
    if ((param_12 + param_13 & 1) == 0) goto LAB_63736a8a;
  }
  iVar10 = (&DAT_63791580)[*param_8];
  iVar12 = (&DAT_63791580)[*param_9];
  uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar10 + (&DAT_63790960)[*param_10]],
                            (&DAT_637903e0)
                            [iVar10 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]),
                   (&DAT_637903e0)[iVar10 + (&DAT_63792180)[*param_11]]);
  local_10 = (uint)uVar5;
  uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar12 + (&DAT_63790960)[*param_10]],
                            (&DAT_637903e0)
                            [iVar12 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]),
                   (&DAT_637903e0)[iVar12 + (&DAT_63792180)[*param_11]]);
  local_14 = (uint)uVar6;
  iVar10 = ((*param_1 ^ local_10) >> 1 & 0x7f7f7f) + (*param_1 & local_10);
  iVar12 = ((uint3)((uVar6 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar5);
LAB_63736a8a:
  for (local_8 = local_8 + iVar7 / param_13; local_8 != 0; local_8 = local_8 + -1) {
    *param_2 = iVar10;
    *param_3 = local_10;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    *param_4 = iVar12;
    param_4 = param_4 + 1;
    *puVar8 = local_14;
    puVar8 = puVar8 + 1;
  }
  return;
}



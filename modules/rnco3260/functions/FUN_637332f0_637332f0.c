/* Module: rnco3260.dll
   Function: FUN_637332f0
   Address: 637332f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637332f0(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
            int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,byte param_12,
            int param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int local_c;
  int local_8;
  
  local_c = param_13 >> 1;
  local_8 = param_7;
  if (param_7 != 0) {
    if ((param_12 & 1) != 0) goto LAB_63733684;
    do {
      local_c = local_c - param_7;
      if (local_c < 0) {
        local_c = local_c + param_13;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_63733684;
        }
        iVar5 = (&DAT_63790960)[*param_10];
        iVar11 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar6 = (&DAT_63792180)[*param_11];
        iVar1 = (&DAT_63791580)[*param_8];
        iVar2 = (&DAT_63791580)[*param_9];
        iVar3 = (&DAT_63791580)[param_8[1]];
        iVar4 = (&DAT_63791580)[param_9[1]];
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar1 + iVar6],(&DAT_637903e0)[iVar1 + iVar11]),
                         (&DAT_637903e0)[iVar1 + iVar5]);
        uVar15 = (uint)uVar7;
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar2 + iVar6],(&DAT_637903e0)[iVar2 + iVar11]),
                         (&DAT_637903e0)[iVar2 + iVar5]);
        uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar6],(&DAT_637903e0)[iVar3 + iVar11]),
                         (&DAT_637903e0)[iVar3 + iVar5]);
        uVar12 = (uint)uVar9;
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar6],(&DAT_637903e0)[iVar4 + iVar11]),
                          (&DAT_637903e0)[iVar4 + iVar5]);
        *param_3 = uVar15;
        param_3[1] = uVar12;
        param_3 = param_3 + 2;
        *param_5 = (uint)uVar8;
        param_5[1] = (uint)uVar10;
        param_5 = param_5 + 2;
        uVar14 = *param_1;
        uVar16 = param_1[1];
        param_1 = param_1 + 2;
        *param_2 = ((uVar14 ^ uVar15) >> 1 & 0x7f7f7f) + (uVar14 & uVar15);
        param_2[1] = ((uVar16 ^ uVar12) >> 1 & 0x7f7f7f) + (uVar16 & uVar12);
        param_2 = param_2 + 2;
        *param_4 = ((uint3)((uVar8 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar8 & uVar7);
        param_4[1] = ((uint3)((uVar10 ^ uVar9) >> 1) & 0x7f7f7f) + (uint)(uVar10 & uVar9);
        param_4 = param_4 + 2;
      }
      else {
        iVar5 = (&DAT_63791580)[*param_8];
        iVar6 = (&DAT_63791580)[*param_9];
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + (&DAT_63792180)[*param_11]],
                                  (&DAT_637903e0)
                                  [iVar5 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]])
                         ,(&DAT_637903e0)[iVar5 + (&DAT_63790960)[*param_10]]);
        uVar16 = (uint)uVar7;
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + (&DAT_63792180)[*param_11]],
                                  (&DAT_637903e0)
                                  [iVar6 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]])
                         ,(&DAT_637903e0)[iVar6 + (&DAT_63790960)[*param_10]]);
        *param_3 = uVar16;
        param_3 = param_3 + 1;
        *param_5 = (uint)uVar8;
        param_5 = param_5 + 1;
        uVar14 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = ((uVar14 ^ uVar16) >> 1 & 0x7f7f7f) + (uVar14 & uVar16);
        param_2 = param_2 + 1;
        *param_4 = ((uint3)((uVar8 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar8 & uVar7);
        param_4 = param_4 + 1;
      }
      local_c = local_c - param_7;
      while( true ) {
        param_11 = param_11 + 1;
        param_8 = param_8 + 2;
        param_10 = param_10 + 1;
        param_9 = param_9 + 2;
        if (local_c < 0) break;
        local_c = local_c - param_7;
        if (local_c < 0) {
          do {
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_c = local_c + param_13;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              return;
            }
LAB_63733684:
            iVar5 = (&DAT_63791580)[*param_8];
            iVar6 = (&DAT_63791580)[*param_9];
            uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + (&DAT_63792180)[*param_11]],
                                      (&DAT_637903e0)
                                      [iVar5 + (&DAT_63791d80)[*param_10] +
                                               (&DAT_637929a0)[*param_11]]),
                             (&DAT_637903e0)[iVar5 + (&DAT_63790960)[*param_10]]);
            uVar14 = (uint)uVar7;
            uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + (&DAT_63792180)[*param_11]],
                                      (&DAT_637903e0)
                                      [iVar6 + (&DAT_63791d80)[*param_10] +
                                               (&DAT_637929a0)[*param_11]]),
                             (&DAT_637903e0)[iVar6 + (&DAT_63790960)[*param_10]]);
            *param_3 = uVar14;
            param_3 = param_3 + 1;
            puVar17 = param_1 + 1;
            *param_5 = (uint)uVar8;
            param_5 = param_5 + 1;
            piVar13 = param_2 + 1;
            *param_2 = ((*param_1 ^ uVar14) >> 1 & 0x7f7f7f) + (*param_1 & uVar14);
            *param_4 = ((uint3)((uVar8 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar8 & uVar7);
            param_4 = param_4 + 1;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_c = local_c - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              param_1 = puVar17;
              param_2 = piVar13;
              if (local_c < 0) goto LAB_637337aa;
              local_c = local_c - param_7;
              if (local_c < 0) break;
              param_8 = param_8 + 2;
              param_9 = param_9 + 2;
              local_c = local_c - param_7;
            }
          } while( true );
        }
        local_c = local_c - param_7;
      }
LAB_637337aa:
      local_c = local_c + param_13;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



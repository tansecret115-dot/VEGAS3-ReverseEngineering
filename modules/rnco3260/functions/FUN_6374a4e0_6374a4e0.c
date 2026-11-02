/* Module: rnco3260.dll
   Function: FUN_6374a4e0
   Address: 6374a4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6374a4e0(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
            int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,byte param_12,
            int param_13)

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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  int local_c;
  int local_8;
  
  local_c = param_13 >> 1;
  local_8 = param_7;
  if (param_7 != 0) {
    if ((param_12 & 1) != 0) goto LAB_6374a88c;
    do {
      local_c = local_c - param_7;
      if (local_c < 0) {
        local_c = local_c + param_13;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_6374a88c;
        }
        bVar1 = *param_10;
        bVar2 = *param_11;
        iVar19 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2];
        iVar20 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar21 = (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2];
        iVar8 = (&DAT_63791580)[*param_9];
        iVar9 = (&DAT_63791580)[*param_8];
        iVar6 = (&DAT_63791580)[param_8[1]];
        iVar7 = (&DAT_63791580)[param_9[1]];
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar19],(&DAT_637903e0)[iVar9 + iVar20]),
                          (&DAT_637903e0)[iVar9 + iVar21]);
        uVar14 = (uint)uVar10;
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar19],(&DAT_637903e0)[iVar8 + iVar20]),
                          (&DAT_637903e0)[iVar8 + iVar21]);
        uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar19],(&DAT_637903e0)[iVar6 + iVar20]),
                          (&DAT_637903e0)[iVar6 + iVar21]);
        uVar15 = (uint)uVar12;
        uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar19],(&DAT_637903e0)[iVar7 + iVar20]),
                          (&DAT_637903e0)[iVar7 + iVar21]);
        *param_3 = uVar14;
        param_3[1] = uVar15;
        param_3 = param_3 + 2;
        *param_5 = (uint)uVar11;
        param_5[1] = (uint)uVar13;
        param_5 = param_5 + 2;
        uVar18 = *param_1;
        uVar16 = param_1[1];
        param_1 = param_1 + 2;
        *param_2 = ((uVar18 ^ uVar14) >> 1 & 0x7f7f7f) + (uVar18 & uVar14);
        param_2[1] = ((uVar16 ^ uVar15) >> 1 & 0x7f7f7f) + (uVar16 & uVar15);
        param_2 = param_2 + 2;
        *param_4 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
        param_4[1] = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
        param_4 = param_4 + 2;
      }
      else {
        bVar1 = *param_10;
        bVar2 = *param_11;
        iVar8 = (&DAT_63791580)[*param_9];
        iVar9 = (&DAT_63791580)[*param_8];
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)
                                   [iVar9 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]],
                                   (&DAT_637903e0)
                                   [iVar9 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]),
                          (&DAT_637903e0)[iVar9 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
        uVar16 = (uint)uVar10;
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)
                                   [iVar8 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]],
                                   (&DAT_637903e0)
                                   [iVar8 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]),
                          (&DAT_637903e0)[iVar8 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
        *param_3 = uVar16;
        param_3 = param_3 + 1;
        *param_5 = (uint)uVar11;
        param_5 = param_5 + 1;
        uVar18 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = ((uVar18 ^ uVar16) >> 1 & 0x7f7f7f) + (uVar18 & uVar16);
        param_2 = param_2 + 1;
        *param_4 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
        param_4 = param_4 + 1;
      }
      local_c = local_c - param_7;
      while( true ) {
        param_11 = param_11 + 1;
        param_8 = param_8 + 2;
        param_9 = param_9 + 2;
        param_10 = param_10 + 1;
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
LAB_6374a88c:
            bVar1 = *param_10;
            bVar2 = *param_11;
            iVar8 = (&DAT_63791580)[*param_8];
            iVar9 = (&DAT_63791580)[*param_9];
            uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar8 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]],
                                       (&DAT_637903e0)
                                       [iVar8 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar8 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
            uVar18 = (uint)uVar10;
            uVar3 = (&DAT_637903e0)[iVar9 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]];
            uVar4 = (&DAT_637903e0)[iVar9 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]];
            uVar5 = (&DAT_637903e0)[iVar9 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
            *param_3 = uVar18;
            param_3 = param_3 + 1;
            uVar11 = CONCAT21(CONCAT11(uVar3,uVar4),uVar5);
            *param_5 = (uint)uVar11;
            param_5 = param_5 + 1;
            puVar22 = param_1 + 1;
            piVar17 = param_2 + 1;
            *param_2 = ((*param_1 ^ uVar18) >> 1 & 0x7f7f7f) + (*param_1 & uVar18);
            *param_4 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
            param_4 = param_4 + 1;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_c = local_c - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              param_1 = puVar22;
              param_2 = piVar17;
              if (local_c < 0) goto LAB_6374a9be;
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
LAB_6374a9be:
      local_c = local_c + param_13;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



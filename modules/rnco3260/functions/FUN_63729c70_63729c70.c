/* Module: rnco3260.dll
   Function: FUN_63729c70
   Address: 63729c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63729c70(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9,int param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
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
  int local_14;
  int local_10;
  
  local_14 = param_10 >> 1;
  local_10 = param_4;
  if (param_4 != 0) {
    if ((param_9 & 1) != 0) goto LAB_63729faf;
    do {
      local_14 = local_14 - param_4;
      if (local_14 < 0) {
        local_14 = local_14 + param_10;
        local_10 = local_10 + -1;
        if (local_10 == 0) {
          local_10 = 1;
          goto LAB_63729faf;
        }
        bVar7 = *param_8;
        bVar8 = *param_7;
        iVar22 = (&DAT_63790d60)[bVar7] + (&DAT_63790960)[bVar8];
        iVar20 = (&DAT_63791d80)[bVar8] + (&DAT_637929a0)[bVar7];
        iVar21 = (&DAT_63792180)[bVar7] + (&DAT_63791980)[bVar8];
        iVar16 = (&DAT_63791580)[*param_6];
        iVar17 = (&DAT_63791580)[*param_5];
        iVar14 = (&DAT_63791580)[param_5[1]];
        iVar15 = (&DAT_63791580)[param_6[1]];
        uVar9 = (&DAT_637903e0)[iVar17 + iVar20];
        uVar10 = (&DAT_637903e0)[iVar17 + iVar21];
        uVar11 = (&DAT_637903e0)[iVar16 + iVar22];
        uVar12 = (&DAT_637903e0)[iVar16 + iVar20];
        uVar13 = (&DAT_637903e0)[iVar16 + iVar21];
        uVar1 = (&DAT_637903e0)[iVar14 + iVar22];
        uVar2 = (&DAT_637903e0)[iVar14 + iVar20];
        uVar3 = (&DAT_637903e0)[iVar14 + iVar21];
        uVar4 = (&DAT_637903e0)[iVar15 + iVar22];
        uVar5 = (&DAT_637903e0)[iVar15 + iVar20];
        uVar6 = (&DAT_637903e0)[iVar15 + iVar21];
        puVar18 = param_1 + 6;
        puVar19 = param_2 + 6;
        *param_1 = (&DAT_637903e0)[iVar17 + iVar22];
        param_1[1] = uVar9;
        param_1[2] = uVar10;
        param_1[3] = uVar1;
        param_1[4] = uVar2;
        param_1[5] = uVar3;
        *param_2 = uVar11;
        param_2[1] = uVar12;
        param_2[2] = uVar13;
        param_2[3] = uVar4;
        param_2[4] = uVar5;
        param_2[5] = uVar6;
      }
      else {
        bVar7 = *param_8;
        bVar8 = *param_7;
        puVar18 = param_1 + 3;
        iVar16 = (&DAT_63791580)[*param_6];
        iVar17 = (&DAT_63791580)[*param_5];
        uVar9 = (&DAT_637903e0)[iVar17 + (&DAT_63791d80)[bVar8] + (&DAT_637929a0)[bVar7]];
        uVar10 = (&DAT_637903e0)[iVar17 + (&DAT_63792180)[bVar7] + (&DAT_63791980)[bVar8]];
        uVar11 = (&DAT_637903e0)[iVar16 + (&DAT_63790d60)[bVar7] + (&DAT_63790960)[bVar8]];
        uVar12 = (&DAT_637903e0)[iVar16 + (&DAT_63791d80)[bVar8] + (&DAT_637929a0)[bVar7]];
        uVar13 = (&DAT_637903e0)[iVar16 + (&DAT_63792180)[bVar7] + (&DAT_63791980)[bVar8]];
        puVar19 = param_2 + 3;
        *param_1 = (&DAT_637903e0)[iVar17 + (&DAT_63790d60)[bVar7] + (&DAT_63790960)[bVar8]];
        param_1[1] = uVar9;
        param_1[2] = uVar10;
        *param_2 = uVar11;
        param_2[1] = uVar12;
        param_2[2] = uVar13;
      }
      local_14 = local_14 - param_4;
      while( true ) {
        param_8 = param_8 + 1;
        param_7 = param_7 + 1;
        param_6 = param_6 + 2;
        param_5 = param_5 + 2;
        if (local_14 < 0) break;
        local_14 = local_14 - param_4;
        if (local_14 < 0) {
          do {
            param_6 = param_6 + 1;
            param_5 = param_5 + 1;
            local_14 = local_14 + param_10;
            local_10 = local_10 + -1;
            param_1 = puVar18;
            param_2 = puVar19;
            if (local_10 == 0) {
              return;
            }
LAB_63729faf:
            puVar18 = param_1 + 3;
            puVar19 = param_2 + 3;
            bVar7 = *param_8;
            bVar8 = *param_7;
            iVar16 = (&DAT_63791580)[*param_6];
            iVar17 = (&DAT_63791580)[*param_5];
            param_5 = param_5 + 1;
            param_6 = param_6 + 1;
            uVar9 = (&DAT_637903e0)[iVar17 + (&DAT_63791d80)[bVar8] + (&DAT_637929a0)[bVar7]];
            uVar10 = (&DAT_637903e0)[iVar17 + (&DAT_63792180)[bVar7] + (&DAT_63791980)[bVar8]];
            uVar11 = (&DAT_637903e0)[iVar16 + (&DAT_63790d60)[bVar7] + (&DAT_63790960)[bVar8]];
            uVar12 = (&DAT_637903e0)[iVar16 + (&DAT_63791d80)[bVar8] + (&DAT_637929a0)[bVar7]];
            uVar13 = (&DAT_637903e0)[iVar16 + (&DAT_63792180)[bVar7] + (&DAT_63791980)[bVar8]];
            *param_1 = (&DAT_637903e0)[iVar17 + (&DAT_63790d60)[bVar7] + (&DAT_63790960)[bVar8]];
            param_1[1] = uVar9;
            param_1[2] = uVar10;
            *param_2 = uVar11;
            param_2[1] = uVar12;
            param_2[2] = uVar13;
            local_14 = local_14 - param_4;
            while( true ) {
              param_8 = param_8 + 1;
              param_7 = param_7 + 1;
              if (local_14 < 0) goto LAB_6372a0d4;
              local_14 = local_14 - param_4;
              if (local_14 < 0) break;
              param_5 = param_5 + 2;
              param_6 = param_6 + 2;
              local_14 = local_14 - param_4;
            }
          } while( true );
        }
        local_14 = local_14 - param_4;
      }
LAB_6372a0d4:
      local_14 = local_14 + param_10;
      local_10 = local_10 + -1;
      param_1 = puVar18;
      param_2 = puVar19;
    } while (local_10 != 0);
  }
  return;
}



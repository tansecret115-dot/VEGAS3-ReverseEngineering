/* Module: rnco3260.dll
   Function: FUN_6371cf70
   Address: 6371cf70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6371cf70(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9,int param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
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
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  int local_14;
  int local_10;
  
  local_14 = param_10 >> 1;
  local_10 = param_4;
  if (param_4 != 0) {
    if ((param_9 & 1) != 0) goto LAB_6371d280;
    do {
      local_14 = local_14 - param_4;
      if (local_14 < 0) {
        local_14 = local_14 + param_10;
        local_10 = local_10 + -1;
        if (local_10 == 0) {
          local_10 = 1;
          goto LAB_6371d280;
        }
        iVar17 = (&DAT_63790960)[*param_7];
        iVar21 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
        iVar18 = (&DAT_63792180)[*param_8];
        iVar13 = (&DAT_63791580)[*param_5];
        iVar14 = (&DAT_63791580)[*param_6];
        iVar15 = (&DAT_63791580)[param_5[1]];
        iVar16 = (&DAT_63791580)[param_6[1]];
        uVar8 = (&DAT_637903e0)[iVar13 + iVar21];
        uVar9 = (&DAT_637903e0)[iVar13 + iVar18];
        uVar10 = (&DAT_637903e0)[iVar14 + iVar17];
        uVar11 = (&DAT_637903e0)[iVar14 + iVar21];
        uVar12 = (&DAT_637903e0)[iVar14 + iVar18];
        uVar1 = (&DAT_637903e0)[iVar15 + iVar17];
        uVar2 = (&DAT_637903e0)[iVar15 + iVar21];
        uVar3 = (&DAT_637903e0)[iVar15 + iVar18];
        uVar4 = (&DAT_637903e0)[iVar16 + iVar17];
        uVar5 = (&DAT_637903e0)[iVar16 + iVar21];
        uVar6 = (&DAT_637903e0)[iVar16 + iVar18];
        *param_1 = (&DAT_637903e0)[iVar13 + iVar17];
        param_1[1] = uVar8;
        param_1[2] = uVar9;
        param_1[3] = uVar1;
        param_1[4] = uVar2;
        param_1[5] = uVar3;
        *param_2 = uVar10;
        param_2[1] = uVar11;
        param_2[2] = uVar12;
        param_2[3] = uVar4;
        param_2[4] = uVar5;
        puVar19 = param_1 + 6;
        param_2[5] = uVar6;
        puVar20 = param_2 + 6;
      }
      else {
        puVar19 = param_1 + 3;
        iVar17 = (&DAT_63791580)[*param_5];
        iVar18 = (&DAT_63791580)[*param_6];
        uVar8 = (&DAT_637903e0)[iVar17 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
        uVar9 = (&DAT_637903e0)[iVar17 + (&DAT_63792180)[*param_8]];
        uVar10 = (&DAT_637903e0)[iVar18 + (&DAT_63790960)[*param_7]];
        uVar11 = (&DAT_637903e0)[iVar18 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
        uVar12 = (&DAT_637903e0)[iVar18 + (&DAT_63792180)[*param_8]];
        puVar20 = param_2 + 3;
        *param_1 = (&DAT_637903e0)[iVar17 + (&DAT_63790960)[*param_7]];
        param_1[1] = uVar8;
        param_1[2] = uVar9;
        *param_2 = uVar10;
        param_2[1] = uVar11;
        param_2[2] = uVar12;
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
            param_1 = puVar19;
            param_2 = puVar20;
            if (local_10 == 0) {
              return;
            }
LAB_6371d280:
            puVar19 = param_1 + 3;
            puVar20 = param_2 + 3;
            iVar17 = (&DAT_63791580)[*param_5];
            bVar7 = *param_6;
            param_5 = param_5 + 1;
            param_6 = param_6 + 1;
            iVar18 = (&DAT_63791580)[bVar7];
            uVar8 = (&DAT_637903e0)[iVar17 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
            uVar9 = (&DAT_637903e0)[iVar17 + (&DAT_63792180)[*param_8]];
            uVar10 = (&DAT_637903e0)[iVar18 + (&DAT_63790960)[*param_7]];
            uVar11 = (&DAT_637903e0)[iVar18 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]
            ;
            uVar12 = (&DAT_637903e0)[iVar18 + (&DAT_63792180)[*param_8]];
            *param_1 = (&DAT_637903e0)[iVar17 + (&DAT_63790960)[*param_7]];
            param_1[1] = uVar8;
            param_1[2] = uVar9;
            *param_2 = uVar10;
            param_2[1] = uVar11;
            param_2[2] = uVar12;
            local_14 = local_14 - param_4;
            while( true ) {
              param_8 = param_8 + 1;
              param_7 = param_7 + 1;
              if (local_14 < 0) goto LAB_6371d38d;
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
LAB_6371d38d:
      local_14 = local_14 + param_10;
      local_10 = local_10 + -1;
      param_1 = puVar19;
      param_2 = puVar20;
    } while (local_10 != 0);
  }
  return;
}



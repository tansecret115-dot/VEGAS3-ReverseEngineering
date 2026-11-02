/* Module: rnco3260.dll
   Function: FUN_63727ea0
   Address: 63727ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63727ea0(uint *param_1,uint *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,byte param_9,int param_10)

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
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_c;
  int local_8;
  
  local_c = param_10 >> 1;
  local_8 = param_4;
  if (param_4 != 0) {
    if ((param_9 & 1) != 0) goto LAB_6372816b;
    do {
      local_c = local_c - param_4;
      if (local_c < 0) {
        local_c = local_c + param_10;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_6372816b;
        }
        bVar7 = *param_7;
        bVar8 = *param_8;
        iVar16 = (&DAT_63790960)[bVar7] + (&DAT_63790d60)[bVar8];
        iVar17 = (&DAT_63791d80)[bVar7] + (&DAT_637929a0)[bVar8];
        iVar18 = (&DAT_63791980)[bVar7] + (&DAT_63792180)[bVar8];
        iVar14 = (&DAT_63791580)[*param_5];
        iVar15 = (&DAT_63791580)[param_5[1]];
        iVar12 = (&DAT_63791580)[*param_6];
        iVar13 = (&DAT_63791580)[param_6[1]];
        uVar9 = (&DAT_637903e0)[iVar12 + iVar16];
        uVar10 = (&DAT_637903e0)[iVar12 + iVar17];
        uVar11 = (&DAT_637903e0)[iVar12 + iVar18];
        uVar1 = (&DAT_637903e0)[iVar15 + iVar16];
        uVar2 = (&DAT_637903e0)[iVar15 + iVar17];
        uVar3 = (&DAT_637903e0)[iVar15 + iVar18];
        uVar4 = (&DAT_637903e0)[iVar13 + iVar16];
        uVar5 = (&DAT_637903e0)[iVar13 + iVar17];
        uVar6 = (&DAT_637903e0)[iVar13 + iVar18];
        *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar14 + iVar16],
                                           (&DAT_637903e0)[iVar14 + iVar17]),
                                  (&DAT_637903e0)[iVar14 + iVar18]);
        param_1[1] = (uint)CONCAT21(CONCAT11(uVar1,uVar2),uVar3);
        param_1 = param_1 + 2;
        *param_2 = (uint)CONCAT21(CONCAT11(uVar9,uVar10),uVar11);
        param_2[1] = (uint)CONCAT21(CONCAT11(uVar4,uVar5),uVar6);
        param_2 = param_2 + 2;
      }
      else {
        bVar7 = *param_7;
        bVar8 = *param_8;
        iVar14 = (&DAT_63791580)[*param_5];
        iVar15 = (&DAT_63791580)[*param_6];
        uVar9 = (&DAT_637903e0)[iVar15 + (&DAT_63790960)[bVar7] + (&DAT_63790d60)[bVar8]];
        uVar10 = (&DAT_637903e0)[iVar15 + (&DAT_63791d80)[bVar7] + (&DAT_637929a0)[bVar8]];
        uVar11 = (&DAT_637903e0)[iVar15 + (&DAT_63791980)[bVar7] + (&DAT_63792180)[bVar8]];
        *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                           [iVar14 + (&DAT_63790960)[bVar7] + (&DAT_63790d60)[bVar8]
                                           ],(&DAT_637903e0)
                                             [iVar14 + (&DAT_63791d80)[bVar7] +
                                                       (&DAT_637929a0)[bVar8]]),
                                  (&DAT_637903e0)
                                  [iVar14 + (&DAT_63791980)[bVar7] + (&DAT_63792180)[bVar8]]);
        param_1 = param_1 + 1;
        *param_2 = (uint)CONCAT21(CONCAT11(uVar9,uVar10),uVar11);
        param_2 = param_2 + 1;
      }
      local_c = local_c - param_4;
      while( true ) {
        param_8 = param_8 + 1;
        param_7 = param_7 + 1;
        param_6 = param_6 + 2;
        param_5 = param_5 + 2;
        if (local_c < 0) break;
        local_c = local_c - param_4;
        if (local_c < 0) {
          do {
            param_6 = param_6 + 1;
            param_5 = param_5 + 1;
            local_c = local_c + param_10;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              return;
            }
LAB_6372816b:
            bVar7 = *param_7;
            bVar8 = *param_8;
            iVar14 = (&DAT_63791580)[*param_5];
            iVar15 = (&DAT_63791580)[*param_6];
            uVar9 = (&DAT_637903e0)[iVar15 + (&DAT_63790960)[bVar7] + (&DAT_63790d60)[bVar8]];
            uVar10 = (&DAT_637903e0)[iVar15 + (&DAT_63791d80)[bVar7] + (&DAT_637929a0)[bVar8]];
            uVar11 = (&DAT_637903e0)[iVar15 + (&DAT_63791980)[bVar7] + (&DAT_63792180)[bVar8]];
            *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                               [iVar14 + (&DAT_63790960)[bVar7] +
                                                         (&DAT_63790d60)[bVar8]],
                                               (&DAT_637903e0)
                                               [iVar14 + (&DAT_63791d80)[bVar7] +
                                                         (&DAT_637929a0)[bVar8]]),
                                      (&DAT_637903e0)
                                      [iVar14 + (&DAT_63791980)[bVar7] + (&DAT_63792180)[bVar8]]);
            param_1 = param_1 + 1;
            *param_2 = (uint)CONCAT21(CONCAT11(uVar9,uVar10),uVar11);
            param_2 = param_2 + 1;
            param_5 = param_5 + 1;
            param_6 = param_6 + 1;
            local_c = local_c - param_4;
            while( true ) {
              param_8 = param_8 + 1;
              param_7 = param_7 + 1;
              if (local_c < 0) goto LAB_63728258;
              local_c = local_c - param_4;
              if (local_c < 0) break;
              param_5 = param_5 + 2;
              param_6 = param_6 + 2;
              local_c = local_c - param_4;
            }
          } while( true );
        }
        local_c = local_c - param_4;
      }
LAB_63728258:
      local_c = local_c + param_10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



/* Module: rnco3260.dll
   Function: FUN_63719650
   Address: 63719650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63719650(uint *param_1,uint *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,byte param_9,int param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_c;
  int local_8;
  
  local_c = param_10 >> 1;
  local_8 = param_4;
  if (param_4 != 0) {
    if ((param_9 & 1) != 0) goto LAB_63719901;
    do {
      local_c = local_c - param_4;
      if (local_c < 0) {
        local_c = local_c + param_10;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_63719901;
        }
        iVar14 = (&DAT_63790960)[*param_7];
        iVar15 = (&DAT_63792180)[*param_8];
        iVar16 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
        iVar10 = (&DAT_63791580)[*param_5];
        iVar11 = (&DAT_63791580)[*param_6];
        iVar12 = (&DAT_63791580)[param_5[1]];
        iVar13 = (&DAT_63791580)[param_6[1]];
        uVar7 = (&DAT_637903e0)[iVar11 + iVar16];
        uVar8 = (&DAT_637903e0)[iVar11 + iVar15];
        uVar9 = (&DAT_637903e0)[iVar11 + iVar14];
        uVar1 = (&DAT_637903e0)[iVar12 + iVar16];
        uVar2 = (&DAT_637903e0)[iVar12 + iVar15];
        uVar3 = (&DAT_637903e0)[iVar12 + iVar14];
        uVar4 = (&DAT_637903e0)[iVar13 + iVar15];
        uVar5 = (&DAT_637903e0)[iVar13 + iVar16];
        uVar6 = (&DAT_637903e0)[iVar13 + iVar14];
        *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar10 + iVar15],
                                           (&DAT_637903e0)[iVar10 + iVar16]),
                                  (&DAT_637903e0)[iVar10 + iVar14]);
        param_1[1] = (uint)CONCAT21(CONCAT11(uVar2,uVar1),uVar3);
        param_1 = param_1 + 2;
        *param_2 = (uint)CONCAT21(CONCAT11(uVar8,uVar7),uVar9);
        param_2[1] = (uint)CONCAT21(CONCAT11(uVar4,uVar5),uVar6);
        param_2 = param_2 + 2;
      }
      else {
        iVar14 = (&DAT_63791580)[*param_5];
        iVar15 = (&DAT_63791580)[*param_6];
        uVar7 = (&DAT_637903e0)[iVar15 + (&DAT_63792180)[*param_8]];
        uVar8 = (&DAT_637903e0)[iVar15 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
        uVar9 = (&DAT_637903e0)[iVar15 + (&DAT_63790960)[*param_7]];
        *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar14 + (&DAT_63792180)[*param_8]],
                                           (&DAT_637903e0)
                                           [iVar14 + (&DAT_63791d80)[*param_7] +
                                                     (&DAT_637929a0)[*param_8]]),
                                  (&DAT_637903e0)[iVar14 + (&DAT_63790960)[*param_7]]);
        param_1 = param_1 + 1;
        *param_2 = (uint)CONCAT21(CONCAT11(uVar7,uVar8),uVar9);
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
LAB_63719901:
            iVar14 = (&DAT_63791580)[*param_5];
            iVar15 = (&DAT_63791580)[*param_6];
            uVar7 = (&DAT_637903e0)[iVar15 + (&DAT_63792180)[*param_8]];
            uVar8 = (&DAT_637903e0)[iVar15 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
            uVar9 = (&DAT_637903e0)[iVar15 + (&DAT_63790960)[*param_7]];
            *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar14 + (&DAT_63792180)[*param_8]],
                                               (&DAT_637903e0)
                                               [iVar14 + (&DAT_63791d80)[*param_7] +
                                                         (&DAT_637929a0)[*param_8]]),
                                      (&DAT_637903e0)[iVar14 + (&DAT_63790960)[*param_7]]);
            param_1 = param_1 + 1;
            *param_2 = (uint)CONCAT21(CONCAT11(uVar7,uVar8),uVar9);
            param_2 = param_2 + 1;
            param_5 = param_5 + 1;
            param_6 = param_6 + 1;
            local_c = local_c - param_4;
            while( true ) {
              param_8 = param_8 + 1;
              param_7 = param_7 + 1;
              if (local_c < 0) goto LAB_637199e3;
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
LAB_637199e3:
      local_c = local_c + param_10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



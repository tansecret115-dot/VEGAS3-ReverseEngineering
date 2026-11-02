/* Module: rnco3260.dll
   Function: FUN_63726800
   Address: 63726800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63726800(uint *param_1,uint *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_4 >> 1;
  iVar6 = param_4 - local_10;
  if ((param_10 + param_9 & 1) != 0) {
    iVar6 = iVar6 + param_4;
  }
  if (param_4 != 0) {
    iVar7 = param_4 - iVar6 / param_10;
    local_8 = iVar7;
    if (iVar7 < 1) {
LAB_63726aec:
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar7 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                        [iVar7 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                        (&DAT_637903e0)
                                        [iVar7 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                               (&DAT_637903e0)
                               [iVar7 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
      uVar9 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                      [iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                      (&DAT_637903e0)
                                      [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                             (&DAT_637903e0)
                             [iVar3 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
      puVar13 = param_2;
    }
    else {
      if ((param_9 & 1) == 0) goto LAB_63726922;
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                        [iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                        (&DAT_637903e0)
                                        [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                               (&DAT_637903e0)
                               [iVar3 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
      uVar9 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                      [iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                      (&DAT_637903e0)
                                      [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                             (&DAT_637903e0)
                             [iVar4 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]);
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      while( true ) {
        param_8 = param_8 + 1;
        param_7 = param_7 + 1;
        *param_1 = local_c;
        *param_2 = uVar9;
        local_8 = iVar7;
        while( true ) {
          local_8 = local_8 + -1;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          if (local_8 == 0) {
            local_8 = 0;
            puVar13 = param_2;
            if ((param_10 + param_9 & 1) == 0) goto LAB_63726ba3;
            goto LAB_63726aec;
          }
          local_10 = local_10 - param_10;
          if (local_10 < 0) break;
          *param_1 = local_c;
          *param_2 = uVar9;
        }
        local_10 = local_10 + param_4;
LAB_63726922:
        bVar1 = *param_8;
        bVar2 = *param_7;
        iVar12 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar14 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar8 = (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2];
        iVar7 = (&DAT_63791580)[*param_5];
        iVar3 = (&DAT_63791580)[*param_6];
        iVar4 = (&DAT_63791580)[param_5[1]];
        iVar5 = (&DAT_63791580)[param_6[1]];
        uVar10 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar14],
                                         (&DAT_637903e0)[iVar7 + iVar12]),
                                (&DAT_637903e0)[iVar7 + iVar8]);
        uVar11 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar14],
                                         (&DAT_637903e0)[iVar3 + iVar12]),
                                (&DAT_637903e0)[iVar3 + iVar8]);
        local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar14],
                                          (&DAT_637903e0)[iVar4 + iVar12]),
                                 (&DAT_637903e0)[iVar4 + iVar8]);
        uVar9 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar14],
                                        (&DAT_637903e0)[iVar5 + iVar12]),
                               (&DAT_637903e0)[iVar5 + iVar8]);
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        *param_1 = uVar10;
        param_1 = param_1 + 1;
        *param_2 = uVar11;
        param_2 = param_2 + 1;
        iVar7 = local_8 + -1;
        local_8 = 0;
        puVar13 = param_2;
        if (iVar7 == 0) break;
        while (local_10 = local_10 - param_10, -1 < local_10) {
          puVar13 = param_2 + 1;
          *param_1 = uVar10;
          *param_2 = uVar11;
          param_1 = param_1 + 1;
          iVar7 = iVar7 + -1;
          param_2 = puVar13;
          if (iVar7 == 0) {
            local_8 = 0;
            goto LAB_63726ba3;
          }
        }
        local_10 = local_10 + param_4;
      }
    }
LAB_63726ba3:
    for (local_8 = local_8 + iVar6 / param_10; local_8 != 0; local_8 = local_8 + -1) {
      *param_1 = local_c;
      *puVar13 = uVar9;
      param_1 = param_1 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  return;
}



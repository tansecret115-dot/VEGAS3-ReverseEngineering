/* Module: rnco3260.dll
   Function: FUN_637285d0
   Address: 637285d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637285d0(uint *param_1,uint *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_4 >> 1;
  iVar6 = param_4 - local_10;
  if ((param_10 + param_9 & 1) != 0) {
    iVar6 = iVar6 + param_4;
  }
  if (param_4 != 0) {
    iVar8 = param_4 - iVar6 / param_10;
    puVar7 = param_1;
    local_8 = iVar8;
    if (iVar8 < 1) {
LAB_637288c0:
      bVar1 = *param_7;
      bVar2 = *param_8;
      iVar8 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                        [iVar8 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]],
                                        (&DAT_637903e0)
                                        [iVar8 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                               (&DAT_637903e0)
                               [iVar8 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
      uVar10 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar3 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]],
                                       (&DAT_637903e0)
                                       [iVar3 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                              (&DAT_637903e0)
                              [iVar3 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
      puVar14 = param_2;
    }
    else {
      if ((param_9 & 1) == 0) goto LAB_637286f5;
      bVar1 = *param_7;
      bVar2 = *param_8;
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                        [iVar3 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]],
                                        (&DAT_637903e0)
                                        [iVar3 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                               (&DAT_637903e0)
                               [iVar3 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
      uVar10 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar4 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]],
                                       (&DAT_637903e0)
                                       [iVar4 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                              (&DAT_637903e0)
                              [iVar4 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]);
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      while( true ) {
        param_8 = param_8 + 1;
        param_7 = param_7 + 1;
        *puVar7 = local_c;
        *param_2 = uVar10;
        local_8 = iVar8;
        while( true ) {
          local_8 = local_8 + -1;
          puVar7 = puVar7 + 1;
          param_2 = param_2 + 1;
          if (local_8 == 0) {
            local_8 = 0;
            puVar14 = param_2;
            if ((param_10 + param_9 & 1) == 0) goto LAB_63728977;
            goto LAB_637288c0;
          }
          local_10 = local_10 - param_10;
          if (local_10 < 0) break;
          *puVar7 = local_c;
          *param_2 = uVar10;
        }
        local_10 = local_10 + param_4;
        param_1 = puVar7;
LAB_637286f5:
        bVar1 = *param_7;
        bVar2 = *param_8;
        iVar13 = (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2];
        iVar15 = (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2];
        iVar9 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2];
        iVar8 = (&DAT_63791580)[*param_5];
        iVar3 = (&DAT_63791580)[*param_6];
        iVar4 = (&DAT_63791580)[param_5[1]];
        iVar5 = (&DAT_63791580)[param_6[1]];
        uVar11 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar9],
                                         (&DAT_637903e0)[iVar8 + iVar13]),
                                (&DAT_637903e0)[iVar8 + iVar15]);
        uVar12 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar9],
                                         (&DAT_637903e0)[iVar3 + iVar13]),
                                (&DAT_637903e0)[iVar3 + iVar15]);
        local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar9],
                                          (&DAT_637903e0)[iVar4 + iVar13]),
                                 (&DAT_637903e0)[iVar4 + iVar15]);
        uVar10 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar9],
                                         (&DAT_637903e0)[iVar5 + iVar13]),
                                (&DAT_637903e0)[iVar5 + iVar15]);
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        puVar7 = param_1 + 1;
        *param_1 = uVar11;
        *param_2 = uVar12;
        param_2 = param_2 + 1;
        iVar8 = local_8 + -1;
        local_8 = 0;
        puVar14 = param_2;
        if (iVar8 == 0) break;
        while (local_10 = local_10 - param_10, -1 < local_10) {
          puVar14 = param_2 + 1;
          *puVar7 = uVar11;
          *param_2 = uVar12;
          puVar7 = puVar7 + 1;
          iVar8 = iVar8 + -1;
          param_2 = puVar14;
          if (iVar8 == 0) {
            local_8 = 0;
            goto LAB_63728977;
          }
        }
        local_10 = local_10 + param_4;
      }
    }
LAB_63728977:
    for (local_8 = local_8 + iVar6 / param_10; local_8 != 0; local_8 = local_8 + -1) {
      *puVar7 = local_c;
      *puVar14 = uVar10;
      puVar7 = puVar7 + 1;
      puVar14 = puVar14 + 1;
    }
  }
  return;
}



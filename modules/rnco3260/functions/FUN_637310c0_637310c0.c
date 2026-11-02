/* Module: rnco3260.dll
   Function: FUN_637310c0
   Address: 637310c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637310c0(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,int param_10)

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
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_10;
  int local_8;
  
  local_10 = param_4 >> 1;
  iVar9 = param_4 - local_10;
  if ((param_10 + param_9 & 1) != 0) {
    iVar9 = iVar9 + param_4;
  }
  if (param_4 != 0) {
    iVar13 = param_4 - iVar9 / param_10;
    local_8 = iVar13;
    if (iVar13 < 1) {
LAB_637313f7:
      bVar1 = *param_7;
      bVar2 = *param_8;
      iVar13 = (&DAT_63791580)[*param_5];
      iVar6 = (&DAT_63791580)[*param_6];
      uVar3 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)
                            [iVar13 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]] << 4 |
               (uint)(byte)(&DAT_6378dbe8)[iVar13 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]
               ) << 4 | (uint)(byte)(&DAT_6378dbe8)
                                    [iVar13 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]]];
      uVar11 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)
                             [iVar6 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]
                ) << 4 | (uint)(byte)(&DAT_6378dbe8)
                                     [iVar6 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]]];
    }
    else {
      if ((param_9 & 1) == 0) goto LAB_637311fe;
      bVar1 = *param_7;
      bVar2 = *param_8;
      iVar6 = (&DAT_63791580)[*param_5];
      iVar7 = (&DAT_63791580)[*param_6];
      uVar3 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]
                << 4 | (uint)(byte)(&DAT_6378dbe8)
                                   [iVar6 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]) << 4 |
               (uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]]]
      ;
      param_5 = param_5 + 1;
      uVar11 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)
                             [iVar7 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]
                ) << 4 | (uint)(byte)(&DAT_6378dbe8)
                                     [iVar7 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]]];
      param_6 = param_6 + 1;
      while( true ) {
        param_8 = param_8 + 1;
        param_7 = param_7 + 1;
        *param_1 = uVar3;
        *param_2 = uVar11;
        local_8 = iVar13;
        while( true ) {
          local_8 = local_8 + -1;
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          if (local_8 == 0) {
            local_8 = 0;
            if ((param_9 + param_10 & 1) == 0) goto LAB_637314d8;
            goto LAB_637313f7;
          }
          local_10 = local_10 - param_10;
          if (local_10 < 0) break;
          *param_1 = uVar3;
          *param_2 = uVar11;
        }
        local_10 = local_10 + param_4;
LAB_637311fe:
        bVar1 = *param_7;
        bVar2 = *param_8;
        iVar10 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2];
        iVar12 = (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2];
        iVar14 = (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2];
        iVar13 = (&DAT_63791580)[*param_5];
        iVar6 = (&DAT_63791580)[*param_6];
        iVar7 = (&DAT_63791580)[param_5[1]];
        iVar8 = (&DAT_63791580)[param_6[1]];
        uVar4 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar13 + iVar14] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar13 + iVar12]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar13 + iVar10]];
        uVar5 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar14] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar12]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar10]];
        uVar3 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar14] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar12]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar10]];
        uVar11 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar8 + iVar14] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar12]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar10]];
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        *param_1 = uVar4;
        param_1 = param_1 + 1;
        *param_2 = uVar5;
        param_2 = param_2 + 1;
        iVar13 = local_8 + -1;
        local_8 = 0;
        if (iVar13 == 0) break;
        while (local_10 = local_10 - param_10, -1 < local_10) {
          *param_1 = uVar4;
          param_1 = param_1 + 1;
          *param_2 = uVar5;
          param_2 = param_2 + 1;
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) {
            local_8 = 0;
            goto LAB_637314d8;
          }
        }
        local_10 = local_10 + param_4;
      }
    }
LAB_637314d8:
    for (local_8 = local_8 + iVar9 / param_10; local_8 != 0; local_8 = local_8 + -1) {
      *param_1 = uVar3;
      param_1 = param_1 + 1;
      *param_2 = uVar11;
      param_2 = param_2 + 1;
    }
  }
  return;
}



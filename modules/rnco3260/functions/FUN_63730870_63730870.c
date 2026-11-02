/* Module: rnco3260.dll
   Function: FUN_63730870
   Address: 63730870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63730870(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9,int param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int local_c;
  int local_8;
  
  local_c = param_10 >> 1;
  local_8 = param_4;
  if (param_4 != 0) {
    if ((param_9 & 1) != 0) goto LAB_63730bb7;
    do {
      local_c = local_c - param_4;
      if (local_c < 0) {
        local_c = local_c + param_10;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_63730bb7;
        }
        bVar3 = *param_7;
        bVar4 = *param_8;
        iVar12 = (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4];
        iVar13 = (&DAT_637929a0)[bVar4] + (&DAT_63791d80)[bVar3];
        iVar10 = (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4];
        iVar8 = (&DAT_63791580)[*param_6];
        iVar9 = (&DAT_63791580)[*param_5];
        iVar6 = (&DAT_63791580)[param_5[1]];
        iVar7 = (&DAT_63791580)[param_6[1]];
        uVar5 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar13]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar12]];
        uVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar6 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar6 + iVar13]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar6 + iVar12]];
        uVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar13]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar12]];
        *param_1 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar10] << 4 |
                    (uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar13]) << 4 |
                    (uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar12]];
        param_1[1] = uVar1;
        param_1 = param_1 + 2;
        *param_2 = uVar5;
        param_2[1] = uVar2;
        param_2 = param_2 + 2;
      }
      else {
        bVar3 = *param_7;
        bVar4 = *param_8;
        iVar8 = (&DAT_63791580)[*param_6];
        iVar9 = (&DAT_63791580)[*param_5];
        uVar5 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)
                              [iVar8 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4]] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)
                             [iVar8 + (&DAT_637929a0)[bVar4] + (&DAT_63791d80)[bVar3]]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)
                             [iVar8 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4]]];
        *param_1 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbe8)
                                 [iVar9 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4]] << 4 |
                    (uint)(byte)(&DAT_6378dbe8)
                                [iVar9 + (&DAT_637929a0)[bVar4] + (&DAT_63791d80)[bVar3]]) << 4 |
                    (uint)(byte)(&DAT_6378dbe8)
                                [iVar9 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4]]];
        param_1 = param_1 + 1;
        *param_2 = uVar5;
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
LAB_63730bb7:
            bVar3 = *param_7;
            bVar4 = *param_8;
            iVar8 = (&DAT_63791580)[*param_6];
            iVar9 = (&DAT_63791580)[*param_5];
            puVar11 = param_1 + 1;
            uVar5 = (&DAT_63795aa0)
                    [((uint)(byte)(&DAT_6378dbe8)
                                  [iVar8 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4]] << 4 |
                     (uint)(byte)(&DAT_6378dbe8)
                                 [iVar8 + (&DAT_637929a0)[bVar4] + (&DAT_63791d80)[bVar3]]) << 4 |
                     (uint)(byte)(&DAT_6378dbe8)
                                 [iVar8 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4]]];
            *param_1 = (&DAT_63795aa0)
                       [((uint)(byte)(&DAT_6378dbe8)
                                     [iVar9 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4]] << 4
                        | (uint)(byte)(&DAT_6378dbe8)
                                      [iVar9 + (&DAT_637929a0)[bVar4] + (&DAT_63791d80)[bVar3]]) <<
                        4 | (uint)(byte)(&DAT_6378dbe8)
                                        [iVar9 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4]]];
            *param_2 = uVar5;
            param_2 = param_2 + 1;
            param_5 = param_5 + 1;
            param_6 = param_6 + 1;
            local_c = local_c - param_4;
            while( true ) {
              param_8 = param_8 + 1;
              param_7 = param_7 + 1;
              param_1 = puVar11;
              if (local_c < 0) goto LAB_63730ccb;
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
LAB_63730ccb:
      local_c = local_c + param_10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



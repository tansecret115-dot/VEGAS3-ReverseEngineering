/* Module: rnco3260.dll
   Function: FUN_63723f90
   Address: 63723f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63723f90(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,int param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  int local_10;
  int local_8;
  
  local_10 = param_4 >> 1;
  iVar8 = param_4 - local_10;
  if ((param_10 + param_9 & 1) != 0) {
    iVar8 = iVar8 + param_4;
  }
  if (param_4 != 0) {
    iVar12 = param_4 - iVar8 / param_10;
    local_8 = iVar12;
    if (iVar12 < 1) {
LAB_637242ae:
      iVar12 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      uVar11 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar12 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63790960)[*param_7]]];
      uVar10 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar3 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63790960)[*param_7]]];
    }
    else {
      if ((param_9 & 1) == 0) goto LAB_637240c3;
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      uVar11 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar3 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63790960)[*param_7]]];
      param_5 = param_5 + 1;
      uVar10 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar4 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_7]]];
      param_6 = param_6 + 1;
      while( true ) {
        param_8 = param_8 + 1;
        param_7 = param_7 + 1;
        *param_1 = uVar11;
        *param_2 = uVar10;
        local_8 = iVar12;
        while( true ) {
          local_8 = local_8 + -1;
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          if (local_8 == 0) {
            local_8 = 0;
            if ((param_9 + param_10 & 1) == 0) goto LAB_6372437c;
            goto LAB_637242ae;
          }
          local_10 = local_10 - param_10;
          if (local_10 < 0) break;
          *param_1 = uVar11;
          *param_2 = uVar10;
        }
        local_10 = local_10 + param_4;
LAB_637240c3:
        iVar12 = (&DAT_63790960)[*param_7];
        iVar3 = (&DAT_63792180)[*param_8];
        iVar9 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
        iVar4 = (&DAT_63791580)[*param_5];
        iVar5 = (&DAT_63791580)[*param_6];
        iVar6 = (&DAT_63791580)[param_5[1]];
        iVar7 = (&DAT_63791580)[param_6[1]];
        uVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar4 + iVar3] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar9]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar12]];
        uVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar3] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar9]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar12]];
        uVar11 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar3] << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar9]) << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar12]];
        uVar10 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar3] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar9]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar12]];
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
        iVar12 = local_8 + -1;
        local_8 = 0;
        if (iVar12 == 0) break;
        while (local_10 = local_10 - param_10, -1 < local_10) {
          *param_1 = uVar1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
          iVar12 = iVar12 + -1;
          if (iVar12 == 0) {
            local_8 = 0;
            goto LAB_6372437c;
          }
        }
        local_10 = local_10 + param_4;
      }
    }
LAB_6372437c:
    for (local_8 = local_8 + iVar8 / param_10; local_8 != 0; local_8 = local_8 + -1) {
      *param_1 = uVar11;
      param_1 = param_1 + 1;
      *param_2 = uVar10;
      param_2 = param_2 + 1;
    }
  }
  return;
}



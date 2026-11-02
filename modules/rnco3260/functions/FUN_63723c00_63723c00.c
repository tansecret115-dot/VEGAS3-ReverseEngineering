/* Module: rnco3260.dll
   Function: FUN_63723c00
   Address: 63723c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63723c00(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,uint param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9)

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
  int iVar11;
  int iVar12;
  uint local_8;
  
  local_8 = param_4;
  if (((param_9 & 1) != 0) && (param_4 != 0)) {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar6 = (&DAT_63791580)[*param_5];
    iVar7 = (&DAT_63791580)[*param_6];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    uVar3 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63792180)[bVar2]] << 4 |
             (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]])
             << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63790960)[bVar1]]];
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    *param_1 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63792180)[bVar2]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]
                ) << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63790960)[bVar1]]];
    param_1 = param_1 + 1;
    *param_2 = uVar3;
    param_2 = param_2 + 1;
    local_8 = param_4 - 1;
  }
  if (1 < (int)local_8) {
    param_4 = local_8 >> 1;
    do {
      iVar6 = (&DAT_63790960)[*param_7];
      iVar12 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar7 = (&DAT_63792180)[*param_8];
      iVar8 = (&DAT_63791580)[*param_5];
      iVar9 = (&DAT_63791580)[*param_6];
      iVar10 = (&DAT_63791580)[param_5[1]];
      iVar11 = (&DAT_63791580)[param_6[1]];
      uVar3 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar9 + iVar7] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar9 + iVar12]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar9 + iVar6]];
      uVar4 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar7] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar12]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar6]];
      uVar5 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar11 + iVar7] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar12]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar6]];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      *param_1 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar8 + iVar7] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar12]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar6]];
      param_1[1] = uVar4;
      *param_2 = uVar3;
      param_2[1] = uVar5;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      local_8 = local_8 - 2;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (local_8 != 0) {
    iVar6 = (&DAT_63791580)[*param_5];
    iVar7 = (&DAT_63791580)[*param_6];
    uVar3 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63792180)[*param_8]] << 4 |
             (uint)(byte)(&DAT_6378dbe8)
                         [iVar7 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
             (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63790960)[*param_7]]];
    *param_1 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar6 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63790960)[*param_7]]];
    *param_2 = uVar3;
  }
  return;
}



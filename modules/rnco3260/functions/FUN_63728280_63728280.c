/* Module: rnco3260.dll
   Function: FUN_63728280
   Address: 63728280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63728280(uint *param_1,uint *param_2,undefined4 param_3,uint param_4,byte *param_5,byte *param_6
            ,byte *param_7,byte *param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
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
  uint local_8;
  
  local_8 = param_4;
  if (((param_9 & 1) != 0) && (param_4 != 0)) {
    bVar1 = *param_8;
    bVar2 = *param_7;
    iVar12 = (&DAT_63791580)[*param_5];
    iVar13 = (&DAT_63791580)[*param_6];
    uVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    uVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    uVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar12 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar12 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar12 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]);
    *param_2 = (uint)CONCAT21(CONCAT11(uVar3,uVar4),uVar5);
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    local_8 = param_4 - 1;
  }
  if (1 < (int)local_8) {
    param_4 = local_8 >> 1;
    do {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar16 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar17 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar18 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar12 = (&DAT_63791580)[*param_5];
      iVar13 = (&DAT_63791580)[*param_6];
      iVar14 = (&DAT_63791580)[param_5[1]];
      uVar3 = (&DAT_637903e0)[iVar13 + iVar18];
      iVar15 = (&DAT_63791580)[param_6[1]];
      uVar4 = (&DAT_637903e0)[iVar13 + iVar16];
      uVar5 = (&DAT_637903e0)[iVar13 + iVar17];
      uVar6 = (&DAT_637903e0)[iVar14 + iVar18];
      uVar7 = (&DAT_637903e0)[iVar14 + iVar16];
      uVar8 = (&DAT_637903e0)[iVar14 + iVar17];
      uVar9 = (&DAT_637903e0)[iVar15 + iVar18];
      uVar10 = (&DAT_637903e0)[iVar15 + iVar16];
      uVar11 = (&DAT_637903e0)[iVar15 + iVar17];
      param_6 = param_6 + 2;
      param_5 = param_5 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar12 + iVar16],
                                         (&DAT_637903e0)[iVar12 + iVar17]),
                                (&DAT_637903e0)[iVar12 + iVar18]);
      param_1[1] = (uint)CONCAT21(CONCAT11(uVar7,uVar8),uVar6);
      *param_2 = (uint)CONCAT21(CONCAT11(uVar4,uVar5),uVar3);
      param_2[1] = (uint)CONCAT21(CONCAT11(uVar10,uVar11),uVar9);
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      local_8 = local_8 - 2;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (local_8 != 0) {
    bVar1 = *param_8;
    bVar2 = *param_7;
    iVar12 = (&DAT_63791580)[*param_5];
    iVar13 = (&DAT_63791580)[*param_6];
    uVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    uVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    uVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar12 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar12 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar12 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]);
    *param_2 = (uint)CONCAT21(CONCAT11(uVar3,uVar4),uVar5);
  }
  return;
}



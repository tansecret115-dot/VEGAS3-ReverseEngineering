/* Module: rnco3260.dll
   Function: FUN_6371b690
   Address: 6371b690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6371b690(uint *param_1,uint *param_2,undefined4 param_3,uint param_4,byte *param_5,byte *param_6
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
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar12 = (&DAT_63791580)[*param_5];
    iVar13 = (&DAT_63791580)[*param_6];
    uVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar1]];
    uVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
    uVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[bVar2]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar12 + (&DAT_63790960)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar12 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]),
                              (&DAT_637903e0)[iVar12 + (&DAT_63792180)[bVar2]]);
    *param_2 = (uint)CONCAT21(CONCAT11(uVar3,uVar4),uVar5);
    param_1 = param_1 + 1;
    local_8 = param_4 - 1;
    param_2 = param_2 + 1;
  }
  if (1 < (int)local_8) {
    param_4 = local_8 >> 1;
    do {
      iVar12 = (&DAT_63790960)[*param_7];
      iVar18 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar13 = (&DAT_63792180)[*param_8];
      iVar14 = (&DAT_63791580)[*param_5];
      iVar15 = (&DAT_63791580)[*param_6];
      iVar16 = (&DAT_63791580)[param_5[1]];
      uVar3 = (&DAT_637903e0)[iVar15 + iVar13];
      iVar17 = (&DAT_63791580)[param_6[1]];
      uVar4 = (&DAT_637903e0)[iVar15 + iVar12];
      uVar5 = (&DAT_637903e0)[iVar15 + iVar18];
      uVar6 = (&DAT_637903e0)[iVar16 + iVar13];
      uVar7 = (&DAT_637903e0)[iVar16 + iVar12];
      uVar8 = (&DAT_637903e0)[iVar16 + iVar18];
      uVar9 = (&DAT_637903e0)[iVar17 + iVar13];
      uVar10 = (&DAT_637903e0)[iVar17 + iVar12];
      uVar11 = (&DAT_637903e0)[iVar17 + iVar18];
      param_6 = param_6 + 2;
      param_5 = param_5 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar14 + iVar12],
                                         (&DAT_637903e0)[iVar14 + iVar18]),
                                (&DAT_637903e0)[iVar14 + iVar13]);
      param_1[1] = (uint)CONCAT21(CONCAT11(uVar7,uVar8),uVar6);
      param_1 = param_1 + 2;
      *param_2 = (uint)CONCAT21(CONCAT11(uVar4,uVar5),uVar3);
      param_2[1] = (uint)CONCAT21(CONCAT11(uVar10,uVar11),uVar9);
      param_2 = param_2 + 2;
      local_8 = local_8 - 2;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (local_8 != 0) {
    iVar12 = (&DAT_63791580)[*param_5];
    iVar13 = (&DAT_63791580)[*param_6];
    uVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[*param_7]];
    uVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
    uVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[*param_8]];
    *param_1 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar12 + (&DAT_63790960)[*param_7]],
                                       (&DAT_637903e0)
                                       [iVar12 + (&DAT_63791d80)[*param_7] +
                                                 (&DAT_637929a0)[*param_8]]),
                              (&DAT_637903e0)[iVar12 + (&DAT_63792180)[*param_8]]);
    *param_2 = (uint)CONCAT21(CONCAT11(uVar3,uVar4),uVar5);
  }
  return;
}



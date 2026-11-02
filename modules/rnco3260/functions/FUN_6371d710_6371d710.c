/* Module: rnco3260.dll
   Function: FUN_6371d710
   Address: 6371d710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6371d710(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,int param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int local_18;
  int local_14;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_14 = param_4 >> 1;
  iVar13 = param_4 - local_14;
  if ((param_10 + param_9 & 1) != 0) {
    iVar13 = iVar13 + param_4;
  }
  if (param_4 != 0) {
    local_18 = param_4 - iVar13 / param_10;
    iVar16 = local_18;
    if (local_18 < 1) {
LAB_6371da3a:
      iVar7 = (&DAT_63791580)[*param_5];
      iVar11 = (&DAT_63791580)[*param_6];
      local_5 = (&DAT_637903e0)[iVar7 + (&DAT_63790960)[*param_7]];
      local_6 = (&DAT_637903e0)[iVar7 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
      local_7 = (&DAT_637903e0)[iVar7 + (&DAT_63792180)[*param_8]];
      local_8 = (&DAT_637903e0)[iVar11 + (&DAT_63790960)[*param_7]];
      local_9 = (&DAT_637903e0)[iVar11 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
      uVar12 = (&DAT_637903e0)[iVar11 + (&DAT_63792180)[*param_8]];
      puVar14 = param_2;
    }
    else {
      if ((param_9 & 1) == 0) goto LAB_6371d811;
      iVar16 = (&DAT_63791580)[*param_5];
      iVar7 = (&DAT_63791580)[*param_6];
      local_5 = (&DAT_637903e0)[iVar16 + (&DAT_63790960)[*param_7]];
      local_6 = (&DAT_637903e0)[iVar16 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
      local_9 = (&DAT_637903e0)[iVar7 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
      local_7 = (&DAT_637903e0)[iVar16 + (&DAT_63792180)[*param_8]];
      uVar12 = (&DAT_637903e0)[iVar7 + (&DAT_63792180)[*param_8]];
      local_8 = (&DAT_637903e0)[iVar7 + (&DAT_63790960)[*param_7]];
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      while( true ) {
        param_8 = param_8 + 1;
        param_7 = param_7 + 1;
        *param_1 = local_5;
        param_1[1] = local_6;
        param_1[2] = local_7;
        *param_2 = local_8;
        param_2[1] = local_9;
        param_2[2] = uVar12;
        while( true ) {
          local_18 = local_18 + -1;
          param_1 = param_1 + 3;
          param_2 = param_2 + 3;
          if (local_18 == 0) {
            iVar16 = 0;
            puVar14 = param_2;
            if ((param_9 + param_10 & 1) == 0) goto LAB_6371dadd;
            goto LAB_6371da3a;
          }
          local_14 = local_14 - param_10;
          if (local_14 < 0) break;
          *param_1 = local_5;
          param_1[1] = local_6;
          param_1[2] = local_7;
          *param_2 = local_8;
          param_2[1] = local_9;
          param_2[2] = uVar12;
        }
        local_14 = local_14 + param_4;
LAB_6371d811:
        iVar16 = (&DAT_63790960)[*param_7];
        iVar7 = (&DAT_63792180)[*param_8];
        iVar15 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
        iVar11 = (&DAT_63791580)[*param_5];
        iVar8 = (&DAT_63791580)[*param_6];
        iVar9 = (&DAT_63791580)[param_5[1]];
        iVar10 = (&DAT_63791580)[param_6[1]];
        uVar1 = (&DAT_637903e0)[iVar11 + iVar16];
        uVar2 = (&DAT_637903e0)[iVar11 + iVar15];
        uVar3 = (&DAT_637903e0)[iVar11 + iVar7];
        uVar4 = (&DAT_637903e0)[iVar8 + iVar16];
        uVar5 = (&DAT_637903e0)[iVar8 + iVar15];
        uVar6 = (&DAT_637903e0)[iVar8 + iVar7];
        local_5 = (&DAT_637903e0)[iVar9 + iVar16];
        local_6 = (&DAT_637903e0)[iVar9 + iVar15];
        local_7 = (&DAT_637903e0)[iVar9 + iVar7];
        local_8 = (&DAT_637903e0)[iVar10 + iVar16];
        local_9 = (&DAT_637903e0)[iVar10 + iVar15];
        uVar12 = (&DAT_637903e0)[iVar10 + iVar7];
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        *param_2 = uVar4;
        param_2[1] = uVar5;
        param_2[2] = uVar6;
        param_1 = param_1 + 3;
        param_2 = param_2 + 3;
        local_18 = local_18 + -1;
        iVar16 = 0;
        puVar14 = param_2;
        if (local_18 == 0) break;
        while (local_14 = local_14 - param_10, -1 < local_14) {
          puVar14 = param_2 + 3;
          *param_1 = uVar1;
          param_1[1] = uVar2;
          param_1[2] = uVar3;
          *param_2 = uVar4;
          param_2[1] = uVar5;
          param_2[2] = uVar6;
          param_1 = param_1 + 3;
          local_18 = local_18 + -1;
          param_2 = puVar14;
          if (local_18 == 0) {
            iVar16 = 0;
            goto LAB_6371dadd;
          }
        }
        local_14 = local_14 + param_4;
      }
    }
LAB_6371dadd:
    for (iVar16 = iVar16 + iVar13 / param_10; iVar16 != 0; iVar16 = iVar16 + -1) {
      *param_1 = local_5;
      param_1[1] = local_6;
      param_1[2] = local_7;
      *puVar14 = local_8;
      puVar14[1] = local_9;
      puVar14[2] = uVar12;
      param_1 = param_1 + 3;
      puVar14 = puVar14 + 3;
    }
  }
  return;
}



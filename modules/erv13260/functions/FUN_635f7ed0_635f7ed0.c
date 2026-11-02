/* Module: erv13260.dll
   Function: FUN_635f7ed0
   Address: 635f7ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl
FUN_635f7ed0(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
            undefined4 *param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  undefined4 *puVar17;
  int local_814 [8];
  int aiStack_7f4 [248];
  uint local_414 [8];
  int local_3f4 [120];
  int local_214 [8];
  int local_1f4 [120];
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puVar4 = param_7;
  iVar5 = (int)((int)param_5 + ((int)param_5 >> 0x1f & 0xfU)) >> 4;
  iVar6 = ((int)(param_4 + (param_4 >> 0x1f & 0xfU)) >> 4) + 1;
  local_c = *(int **)(param_6 + (iVar6 + (iVar5 + 1) * 0x2a) * 4);
  local_10 = *(int **)(param_6 + (iVar6 + (iVar5 + 0x20) * 0x2a) * 4);
  local_14 = *(int **)(param_6 + (iVar6 + (iVar5 + 0x3f) * 0x2a) * 4);
  piVar3 = *(int **)(param_6 + (iVar6 + (iVar5 + 0x5e) * 0x2a) * 4);
  local_8 = *(int **)(param_6 + (iVar6 + (iVar5 + 0x7d) * 0x2a) * 4);
  FUN_635f4640(param_4,(int)param_5,*param_1,(int)local_814,param_8);
  if (*(int *)(param_8 + 0x1ce4) == 0) {
    FUN_635f8980(param_4,(int)param_5,local_c,param_3,local_414,0x10,0,param_8);
  }
  else {
    FUN_635f8b10(param_4,(int)param_5,param_6,param_3,(int *)local_414,0,param_8);
    FUN_635f8b10(param_4,(int)param_5,param_6,param_3,local_3f4,1,param_8);
    FUN_635f8b10(param_4,(int)param_5,param_6,param_3,local_214,2,param_8);
    FUN_635f8b10(param_4,(int)param_5,param_6,param_3,local_1f4,3,param_8);
  }
  iVar5 = local_c[5];
  if ((iVar5 != 0) && (iVar5 != 1)) {
    if (iVar5 != 2) {
      uVar9 = fprintf((FILE *)(_iob_exref + 0x20),s_Illegal_Mode_in_Predict_P__pred__63606668);
      return uVar9 & 0xffffff00;
    }
    if (local_10[6] == 0) {
      iVar5 = 0;
      do {
        iVar7 = 8;
        iVar6 = iVar5;
        do {
          *(int *)((int)param_7 + iVar6) =
               *(int *)((int)local_814 + iVar6) - *(int *)((int)local_414 + iVar6);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar5 = iVar5 + 0x40;
      } while (iVar5 < 0x200);
    }
    else {
      iVar5 = 8;
      puVar11 = param_7;
      do {
        iVar5 = iVar5 + -1;
        puVar17 = puVar11;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        puVar11 = puVar11 + 0x10;
      } while (iVar5 != 0);
    }
    if (local_14[6] == 0) {
      iVar5 = 0;
      piVar16 = param_7 + 8;
      do {
        iVar7 = 8;
        iVar6 = iVar5;
        piVar8 = piVar16;
        do {
          piVar1 = (int *)((int)aiStack_7f4 + iVar6);
          piVar2 = (int *)((int)local_3f4 + iVar6);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + -1;
          *piVar8 = *piVar1 - *piVar2;
          piVar8 = piVar8 + 1;
        } while (iVar7 != 0);
        iVar5 = iVar5 + 0x40;
        piVar16 = piVar16 + 0x10;
      } while (iVar5 < 0x200);
    }
    else {
      iVar5 = 8;
      puVar11 = param_7 + 8;
      do {
        iVar5 = iVar5 + -1;
        puVar17 = puVar11;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        puVar11 = puVar11 + 0x10;
      } while (iVar5 != 0);
    }
    if (piVar3[6] == 0) {
      iVar5 = 0x200;
      do {
        iVar7 = 8;
        iVar6 = iVar5;
        do {
          *(int *)((int)param_7 + iVar6) =
               *(int *)((int)local_814 + iVar6) - *(int *)((int)local_414 + iVar6);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar5 = iVar5 + 0x40;
      } while (iVar5 < 0x400);
    }
    else {
      iVar5 = 8;
      puVar11 = param_7 + 0x80;
      do {
        iVar5 = iVar5 + -1;
        puVar17 = puVar11;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        puVar11 = puVar11 + 0x10;
      } while (iVar5 != 0);
    }
    if (local_8[6] == 0) {
      iVar5 = 0x200;
      piVar16 = param_7 + 0x88;
      do {
        iVar7 = 8;
        iVar6 = iVar5;
        piVar8 = piVar16;
        do {
          piVar1 = (int *)((int)aiStack_7f4 + iVar6);
          piVar2 = (int *)((int)local_3f4 + iVar6);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + -1;
          *piVar8 = *piVar1 - *piVar2;
          piVar8 = piVar8 + 1;
        } while (iVar7 != 0);
        iVar5 = iVar5 + 0x40;
        piVar16 = piVar16 + 0x10;
      } while (iVar5 < 0x400);
    }
    else {
      puVar11 = param_7 + 0x88;
      param_7 = (undefined4 *)0x8;
      do {
        puVar17 = puVar11;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        param_7 = (undefined4 *)((int)param_7 + -1);
        puVar11 = puVar11 + 0x10;
      } while (param_7 != (undefined4 *)0x0);
    }
    uVar9 = local_8[2] + (*local_8 + *local_10 + *piVar3 + *local_14) * 2 + local_14[2] + piVar3[2]
            + local_10[2];
    uVar14 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
    uVar12 = (int)uVar14 >> 0x1f;
    uVar10 = local_14[3] + (local_14[1] + piVar3[1] + local_10[1] + local_8[1]) * 2 + piVar3[3] +
             local_10[3] + local_8[3];
    uVar15 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
    uVar13 = (int)uVar15 >> 0x1f;
    uVar9 = FUN_635f8380(param_4,param_5,
                         (*(int *)(&DAT_63606628 +
                                  (((uVar14 ^ uVar12) - uVar12 & 0xf ^ uVar12) - uVar12) * 4) +
                         ((int)(uVar14 + (uVar12 & 0xf)) >> 4) * 2) *
                         (((-1 < (int)uVar9) - 1 & 0xfffffffe) + 1),
                         (int *)((*(int *)(&DAT_63606628 +
                                          (((uVar15 ^ uVar13) - uVar13 & 0xf ^ uVar13) - uVar13) * 4
                                          ) + ((int)(uVar15 + (uVar13 & 0xf)) >> 4) * 2) *
                                (((-1 < (int)uVar10) - 1 & 0xfffffffe) + 1)),(int)param_1,param_2,
                         (int)puVar4,param_8);
    return uVar9 & 0xffffff00;
  }
  iVar5 = 0;
  do {
    iVar7 = 0x10;
    iVar6 = iVar5;
    do {
      iVar5 = iVar6 + 4;
      iVar7 = iVar7 + -1;
      *(int *)(iVar6 + (int)param_7) =
           *(int *)((int)local_814 + iVar6) - *(int *)((int)local_414 + iVar6);
      iVar6 = iVar5;
    } while (iVar7 != 0);
  } while (iVar5 < 0x400);
  uVar9 = local_c[2] + *local_c * 2;
  uVar10 = local_c[3] + local_c[1] * 2;
  uVar12 = (int)uVar9 >> 0x1f;
  if (((uVar9 ^ uVar12) - uVar12 & 3 ^ uVar12) != uVar12) {
    uVar9 = uVar9 | 2;
  }
  uVar12 = (int)uVar10 >> 0x1f;
  if (((uVar10 ^ uVar12) - uVar12 & 3 ^ uVar12) != uVar12) {
    uVar10 = uVar10 | 2;
  }
  uVar9 = FUN_635f8380(param_4,param_5,(int)uVar9 >> 1,(int *)((int)uVar10 >> 1),(int)param_1,
                       param_2,(int)param_7,param_8);
  return uVar9 & 0xffffff00;
}



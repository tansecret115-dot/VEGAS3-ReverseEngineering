/* Module: vegas30.exe
   Function: FUN_005a7d40
   Address: 005a7d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005a7d40(uint *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,
            uint *param_6,uint param_7,int param_8,uint param_9,int param_10,undefined4 param_11,
            undefined4 param_12,undefined4 param_13,int param_14)

{
  double *pdVar1;
  undefined4 *puVar2;
  bool bVar3;
  double dVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  int *piVar18;
  uint uStack_4bc;
  uint local_4b4;
  int local_4b0;
  int local_4ac;
  double local_4a8;
  int *local_49c;
  int local_498;
  undefined4 local_494;
  undefined4 local_490;
  float local_48c;
  float local_488;
  float local_47c;
  float local_458;
  double local_43c [2];
  int iStack_42c;
  int iStack_428;
  
  local_498 = 0;
  if (*(int *)(param_5 + 0x50) == 0) {
    puVar14 = (uint *)(param_3 + 0x10);
    puVar16 = param_1 + 0x124;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    local_4b0 = *(int *)(param_3 + 0x58);
    local_4ac = *(int *)(param_3 + 0x5c);
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = *param_1 | 0x20;
    param_1[3] = 0;
  }
  else if ((((*(int *)(*(int *)(param_5 + 0x50) + 0x18) != 0) &&
            (piVar5 = (int *)FUN_005f13f0(), piVar5 != (int *)0x0)) &&
           (local_4b4 = *(uint *)(piVar5[2] + 0x134) >> 5 & 1, local_4b4 == 0)) &&
          (local_4b4 = piVar5[0x23] & 1, local_4b4 == 0)) {
    param_1[1] = 0;
    FUN_005f6990();
    local_49c = (int *)param_1[1];
    if (local_49c == (int *)0x0) {
      puVar14 = (uint *)(param_3 + 0x10);
      puVar16 = param_1 + 0x124;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      local_4b0 = *(int *)(param_3 + 0x58);
      local_4ac = *(int *)(param_3 + 0x5c);
      *param_1 = *param_1 | 0x20;
    }
    else {
      puVar14 = (uint *)(piVar5 + 0xe);
      puVar16 = param_1 + 0x124;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      if (*(int *)(param_3 + 0x98) == 0) {
LAB_005a7e49:
        local_4b4 = 1;
      }
      else {
        local_4b4 = *(uint *)(param_3 + 0x50);
        if (*(int *)(param_3 + 0x90) == 1) {
          local_4b4 = local_4b4 << 1;
        }
        if ((int)local_4b4 < 1) goto LAB_005a7e49;
        if (8 < (int)local_4b4) {
          local_4b4 = 8;
        }
      }
      if (*(uint *)(param_3 + 0x90) < 3) {
        uVar7 = *(int *)(piVar5[0xc] + 8) / *(int *)(param_3 + 0x5c);
        if ((int)local_4b4 <= (int)uVar7) {
          local_4b4 = uVar7;
        }
        if (7 < (int)local_4b4) {
          local_4b4 = 8;
        }
      }
      uVar7 = local_4b4;
      iVar10 = (**(code **)(*local_49c + 0x50))(local_49c,_DAT_006106d0 / (double)(int)local_4b4);
      if ((1 < (int)uVar7) && (iVar10 == 0)) {
        param_1[0x127] = 0;
      }
      local_498 = (**(code **)(*(int *)param_1[1] + 0x38))
                            ((int *)param_1[1],local_43c,0x428,0,0,0,0);
      if (local_498 < 0) {
        puVar14 = (uint *)(param_3 + 0x10);
        puVar16 = param_1 + 0x124;
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        local_4b0 = *(int *)(param_3 + 0x58);
        local_4ac = *(int *)(param_3 + 0x5c);
      }
      else {
        local_4b0 = iStack_42c;
        local_4ac = iStack_428;
      }
      uVar7 = _SfGetPixelType_4();
      param_1[0x134] = uVar7;
    }
    if ((*(double *)(param_3 + 0x28) - _DAT_00629d98 <= *(double *)(param_1 + 0x12a)) &&
       (*(double *)(param_1 + 0x12a) <= *(double *)(param_3 + 0x28) + _DAT_00629d98)) {
      param_1[0x12a] = *(uint *)(param_3 + 0x28);
      param_1[299] = *(uint *)(param_3 + 0x2c);
    }
    dVar4 = (double)CONCAT44(param_12,param_11);
    local_4a8 = dVar4 - _DAT_00612af8;
    if ((local_4a8 <= *(double *)(param_1 + 0x128)) &&
       (*(double *)(param_1 + 0x128) <= dVar4 + _DAT_00612af8)) {
      *(double *)(param_1 + 0x128) = dVar4;
    }
    uVar7 = piVar5[0x20];
    uVar8 = piVar5[0x1e];
    iVar10 = piVar5[0x21];
    iVar15 = piVar5[0x1f];
    param_1[6] = uVar7 + uVar8;
    param_1[7] = iVar10 + iVar15 + (uint)CARRY4(uVar7,uVar8);
    if ((((param_1[0x127] == 1) || (param_1[0x127] == 2)) &&
        ((param_7 != param_9 || (param_8 != param_10)))) && (dVar4 == *(double *)(param_1 + 0x128)))
    {
      pdVar1 = (double *)(param_1 + 10);
      uVar17 = FUN_005ced90(param_4,param_5,param_9,param_10,param_11,param_12,pdVar1,param_1 + 8);
      bVar3 = *pdVar1 < _DAT_00629dc0;
      *(undefined8 *)(param_1 + 2) = uVar17;
      if ((bVar3) || (_DAT_00629db8 < *pdVar1)) {
        uVar7 = param_7;
        iVar10 = param_8;
        if ((_DAT_00629d70 == *(double *)(piVar5 + 0x12)) && (DAT_0064aa3c != 0)) {
          uVar7 = param_9;
          iVar10 = param_10;
        }
        uVar17 = FUN_005ced90(param_4,param_5,uVar7,iVar10,param_11,param_12,
                              CONCAT44(param_1 + 8,pdVar1));
        *(undefined8 *)(param_1 + 2) = uVar17;
      }
      uVar7 = param_1[3];
      if (((int)uVar7 < 1) && ((int)uVar7 < 0)) {
        uVar8 = 0;
        uVar6 = 0;
      }
      else {
        uVar8 = param_1[6] - 1;
        uVar6 = param_1[7] - (uint)(param_1[6] == 0);
        if (((int)uVar7 < (int)uVar6) || (((int)uVar7 <= (int)uVar6 && (param_1[2] <= uVar8)))) {
          uVar8 = param_1[2];
          uVar6 = param_1[3];
        }
      }
      param_1[2] = uVar8;
      param_1[3] = uVar6;
      uVar7 = (param_8 - param_10) - (uint)(param_7 < param_9);
      param_1[0xc] = param_7 - param_9;
    }
    else {
      if ((_DAT_00629d70 == *(double *)(piVar5 + 0x12)) && (DAT_0064aa3c != 0)) {
        uVar17 = CONCAT44(param_1 + 8,param_1 + 10);
      }
      else {
        uVar17 = CONCAT44(param_1 + 8,param_1 + 10);
        param_9 = param_7;
        param_10 = param_8;
      }
      uVar17 = FUN_005ced90(param_4,param_5,param_9,param_10,param_11,param_12,uVar17);
      uVar7 = 0;
      *(undefined8 *)(param_1 + 2) = uVar17;
      param_1[0xc] = 0;
    }
    param_1[0xd] = uVar7;
    dVar4 = ABS(*(double *)(param_1 + 10));
    *(double *)(param_1 + 10) = dVar4;
    if (((((*(uint *)(param_3 + 0x80) & 1) == 0 && (*(uint *)(param_5 + 0xf8) >> 7 & 1) == 0) ||
         (*(uint *)(param_3 + 0x90) < 3)) ||
        ((dVar4 = dVar4 * *(double *)(param_1 + 0x128), local_4a8 <= dVar4 &&
         (dVar4 <= (double)CONCAT44(param_12,param_11) + _DAT_00612af8)))) ||
       (_DAT_00629d70 == *(double *)(param_1 + 0x128))) {
      iVar10 = 0;
    }
    else {
      iVar10 = 1;
    }
    uVar7 = *param_1;
    *param_1 = iVar10 << 2 | uVar7 & 0xfffffffb;
    if (((*(uint *)(param_5 + 0xf8) & 0x100) == 0) || ((param_14 != 2 && (param_14 != 3)))) {
      iVar15 = 0;
    }
    else {
      iVar15 = 1;
    }
    *param_1 = iVar15 << 6 | iVar10 << 2 | uVar7 & 0xffffffbb;
    if (iVar15 != 0) {
      *param_2 = 1;
    }
    if ((*(int *)(param_5 + 0x210) != 0) || (*(int *)(param_5 + 0x214) != 0x3ff00000)) {
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = *param_1 & 0xfffffffb | 0x80;
      *param_2 = 1;
    }
    iVar10 = *(int *)(*(int *)(param_5 + 0x50) + 0x18);
    if (iVar10 != 0) {
      if (*(double *)(piVar5 + 0x12) <= _DAT_00612af8) {
        iVar15 = 0;
        iVar12 = 0;
      }
      else {
        uVar17 = ftol();
        iVar15 = (uint)uVar17 + param_1[0xc];
        iVar12 = (int)((ulonglong)uVar17 >> 0x20) + param_1[0xd] +
                 (uint)CARRY4((uint)uVar17,param_1[0xc]);
      }
      uVar7 = FUN_005a7b00(param_1 + 0x121,param_2,*(undefined4 *)(iVar10 + 0x138),iVar15,iVar12,0,0
                           ,piVar5[8],piVar5[9],0,0,param_13,param_11,param_12);
      param_1[0x120] = uVar7;
      iVar10 = *(int *)(*(int *)(param_5 + 0x50) + 0x18);
      if ((*(uint *)(iVar10 + 0x134) & 0x400) != 0) {
        puVar14 = *(uint **)(iVar10 + 0x4c0);
        if (puVar14 == (uint *)0x0) {
          local_4b4 = 0;
        }
        else {
          local_4b4 = *puVar14;
        }
        iVar10 = FUN_0057c190(param_1[5],&local_4b4,4);
        puVar2 = (undefined4 *)param_1[1];
        param_1[5] = param_1[5] + iVar10;
        if (((puVar2 != (undefined4 *)0x0) && (DAT_0065ad5c == 0)) &&
           (iVar10 = (**(code **)*puVar2)(puVar2,&DAT_00610db0), -1 < iVar10)) {
          piVar18 = (int *)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
          (**(code **)(*piVar5 + 100))(piVar5,&local_4a8,&local_49c);
          if ((-1 < local_4ac) && (local_4b0 == 0)) {
            param_1[4] = uStack_4bc;
            *param_1 = *param_1 | 0x100;
          }
          (**(code **)(*piVar18 + 8))(piVar18);
        }
      }
    }
  }
  iVar10 = FUN_0057c190(param_1[5],param_1 + 1,4);
  param_1[5] = param_1[5] + iVar10;
  if (((param_14 != 0) && (*(uint *)(param_3 + 0x1c) != param_1[0x127])) && (param_1[0x127] != 0)) {
    *param_2 = 1;
  }
  puVar14 = param_1 + 0x10;
  uVar7 = FUN_005222c0(puVar14,&local_48c,0,0,param_5 + 0x144,param_7,param_8,
                       *(undefined4 *)(param_5 + 0x18),*(undefined4 *)(param_5 + 0x1c),0x4000,
                       &local_4b0,0,0,0,param_11,param_12);
  uVar7 = (*param_1 ^ uVar7) & 1 ^ *param_1;
  *param_1 = uVar7;
  if (((uVar7 & 1) == 0) ||
     (((local_43c[0] == _DAT_00610fd8 && (local_48c < local_47c)) && (local_488 < local_458)))) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
  }
  *param_1 = iVar10 << 1 | uVar7 & 0xfffffffd;
  param_1[0x135] = *(uint *)(param_5 + 0x208);
  if ((*(uint *)(param_5 + 0x148) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (int)(*(uint *)(param_5 + 0x148) << 0x1e) >> 0x1f;
  }
  uVar9 = (uVar8 & 1) << 3;
  *param_1 = uVar9 | iVar10 << 1 | uVar7 & 0xfffffff5;
  uVar11 = param_7 - *(uint *)(param_5 + 0x18);
  uVar6 = (uint)(param_7 < *(uint *)(param_5 + 0x18));
  iVar15 = param_8 - *(int *)(param_5 + 0x1c);
  uVar13 = iVar15 - uVar6;
  if (((int)uVar13 < 0) ||
     ((uVar13 == 0 || SBORROW4(param_8,*(int *)(param_5 + 0x1c)) != SBORROW4(iVar15,uVar6) &&
      (uVar11 == 0)))) {
    uVar11 = 0;
    uVar13 = 0;
  }
  param_1[0xe] = uVar11;
  param_1[0xf] = uVar13;
  local_494 = *(undefined4 *)(param_3 + 0x58);
  local_490 = *(undefined4 *)(param_3 + 0x5c);
  if (iVar10 != 0) {
    FUN_005a6fc0(param_1 + 0x18,param_1 + 0x116,param_1 + 0x118,&local_48c,param_1 + 0x11a,
                 &local_4b0,&local_494,*(uint *)(param_5 + 0xf8) & 1,uVar8 & 1,param_1[0x12a],
                 param_1[299],*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c));
    *param_2 = 1;
    goto LAB_005a869f;
  }
  if ((((int)param_1[0x11] < -3) || (3 < (int)param_1[0x11])) ||
     (((int)*puVar14 < -3 || (3 < (int)*puVar14)))) {
LAB_005a85bd:
    bVar3 = false;
  }
  else {
    iVar10 = local_4ac * 0x4000;
    local_4a8 = (double)CONCAT44(local_4a8._4_4_,iVar10);
    if (((int)param_1[0x13] < iVar10 + -3) || (iVar10 + 3 < (int)param_1[0x13])) goto LAB_005a85bd;
    iVar10 = local_4b0 * 0x4000;
    local_4a8 = (double)CONCAT44(local_4a8._4_4_,iVar10);
    if (((int)param_1[0x12] < iVar10 + -3) || (iVar10 + 3 < (int)param_1[0x12])) goto LAB_005a85bd;
    bVar3 = true;
  }
  if (((uVar7 & 1) == 0) || (bVar3)) {
    *param_1 = uVar9 | uVar7 & 0xfffffff4;
    *puVar14 = 0;
    param_1[0x11] = 0;
    param_1[0x12] = local_4b0 << 0xe;
    param_1[0x13] = local_4ac << 0xe;
  }
  FUN_005a75b0(param_1 + 0x14,puVar14,param_1 + 0x11a,&local_4b0,&local_494,
               *(uint *)(param_5 + 0xf8) & 1,*param_1 >> 3 & 1,param_1[0x12a],param_1[299],
               *(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c));
  if ((*param_1 & 1) != 0) {
    *param_2 = 1;
  }
  if (((int)(param_1[0x15] - 3) <= (int)param_1[0x11]) &&
     ((int)param_1[0x11] <= (int)(param_1[0x15] + 3))) {
    if (((int)(param_1[0x14] - 3) <= (int)*puVar14) && ((int)*puVar14 <= (int)(param_1[0x14] + 3)))
    {
      if (((int)(param_1[0x17] - 3) <= (int)param_1[0x13]) &&
         ((int)param_1[0x13] <= (int)(param_1[0x17] + 3))) {
        if (((int)(param_1[0x16] - 3) <= (int)param_1[0x12]) &&
           ((int)param_1[0x12] <= (int)(param_1[0x16] + 3))) goto LAB_005a869f;
      }
    }
  }
  if (param_1[0x127] != 0) {
    *param_2 = 1;
  }
LAB_005a869f:
  uVar7 = FUN_005a7b00(param_1 + 0x11f,param_2,*(undefined4 *)(param_5 + 0x140),param_7,param_8,
                       *(undefined4 *)(param_5 + 0x18),*(undefined4 *)(param_5 + 0x1c),
                       *(undefined4 *)(param_5 + 0x20),*(undefined4 *)(param_5 + 0x24),0,0,param_13,
                       param_11,param_12);
  param_1[0x11e] = uVar7;
  param_1[0x122] = *param_6;
  param_1[0x123] = param_6[1];
  return 0;
}



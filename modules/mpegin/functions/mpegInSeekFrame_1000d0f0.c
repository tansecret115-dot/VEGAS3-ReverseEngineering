/* Module: mpegin.dll
   Function: mpegInSeekFrame
   Address: 1000d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x1000d93c) */
/* WARNING: Removing unreachable block (ram,0x1000d4d6) */
/* WARNING: Removing unreachable block (ram,0x1000d81a) */
/* WARNING: Removing unreachable block (ram,0x1000d58f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl mpegInSeekFrame(undefined4 *param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 local_20;
  uint local_18;
  int local_14;
  
                    /* 0xd0f0  4  mpegInSeekFrame */
  puVar5 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 1;
  }
  if (((int)param_1[10] <= (int)param_2) || ((int)param_2 < 0)) {
    FUN_10007e90((int)param_1,(byte *)s_Invalid_frame_number__d__range_i_1001916c);
    return 2;
  }
  *(uint *)(param_1[0x4b95] + 0x40) = param_2;
  *(undefined4 *)(param_1[0x4b95] + 0x168) = 0;
  if (*(int *)(param_1[0x4b95] + 0x40) == 0) {
    *(undefined4 *)(param_1[0x4b95] + 0x30) = 0xffffffff;
  }
  if (param_1[4] == 0) {
    if (1 < *(int *)(param_1[0x4b95] + 0x308)) {
      iVar6 = FUN_1000dbf0((int)param_1);
      return iVar6;
    }
    iVar6 = FUN_1000daf0(param_1);
    return iVar6;
  }
  if (*(double *)(param_1 + 0x12) == *(double *)(param_1 + 0x10)) {
    lVar14 = __allmul(*(uint *)(param_1[0x4b95] + 0xa8),*(int *)(param_1[0x4b95] + 0xac),param_2,
                      (int)param_2 >> 0x1f);
    lVar14 = CONCAT44((int)((ulonglong)lVar14 >> 0x20) + param_1[0x1342] +
                      (uint)CARRY4((uint)lVar14,param_1[0x1341]),(uint)lVar14 + param_1[0x1341]);
  }
  else {
    iVar6 = param_1[0x4b95];
    lVar16 = *(longlong *)(iVar6 + 0xb0);
    FUN_1000e484((double)(int)param_2 * _DAT_10016118);
    lVar14 = __ftol();
    lVar15 = __allmul(*(uint *)(iVar6 + 0xa8),*(int *)(iVar6 + 0xac),param_2,(int)param_2 >> 0x1f);
    lVar14 = lVar15 + lVar14 + *(longlong *)(param_1 + 0x1341);
    if (param_2 != 0) {
      uVar9 = param_2 & 0x80000001;
      bVar13 = uVar9 == 0;
      if ((int)uVar9 < 0) {
        bVar13 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if ((!bVar13) && (param_1[0x32] != 0)) {
        lVar14 = lVar14 + lVar16;
      }
    }
  }
  FUN_1000dfdc(*(double *)(param_1 + 0x10) * _DAT_10016158);
  __ftol();
  iVar6 = param_1[0x4b95];
  uVar9 = *(uint *)(iVar6 + 0xf8);
  iVar7 = *(int *)(iVar6 + 0xfc);
  lVar16 = *(longlong *)(iVar6 + 0xf8);
  local_20 = __ftol();
  local_20 = local_20 + lVar16;
LAB_1000d307:
  while( true ) {
    local_14 = (int)((ulonglong)lVar14 >> 0x20);
    local_18 = (uint)lVar14;
    if ((local_20._4_4_ <= iVar7) && ((local_20._4_4_ < iVar7 || ((uint)local_20 < uVar9)))) {
      local_20 = CONCAT44(iVar7,uVar9);
    }
    FUN_10005520((int *)(iVar6 + 0x128),(uint)local_20,local_20._4_4_,0);
    iVar6 = puVar5[0x4b95];
    *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x74) = 0xffffffff;
    iVar6 = puVar5[0x4b95];
    *(undefined4 *)(iVar6 + 0x78) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x7c) = 0xffffffff;
    iVar6 = FUN_1000bc80((int)puVar5);
    if (iVar6 == 0) break;
    iVar6 = puVar5[0x4b95];
    iVar7 = *(int *)(iVar6 + 0xfc);
    uVar9 = *(uint *)(iVar6 + 0xf8);
    if ((local_20._4_4_ < iVar7) || ((local_20._4_4_ <= iVar7 && ((uint)local_20 <= uVar9))))
    goto LAB_1000daa4;
    local_20 = CONCAT44(local_20._4_4_ + -1 + (uint)(0x1fffff < (uint)local_20),
                        (uint)local_20 - 0x200000);
  }
  if (puVar5[8] == 0) {
    iVar6 = puVar5[0x31];
    while (iVar6 == 0) {
      iVar6 = FUN_1000bc80((int)puVar5);
      if (iVar6 != 0) {
        iVar6 = puVar5[0x4b95];
        iVar7 = *(int *)(iVar6 + 0xfc);
        uVar9 = *(uint *)(iVar6 + 0xf8);
        if ((local_20._4_4_ < iVar7) || ((local_20._4_4_ <= iVar7 && ((uint)local_20 <= uVar9))))
        goto LAB_1000daa4;
        goto LAB_1000d600;
      }
      iVar6 = puVar5[0x31];
    }
  }
  if (puVar5[0x7c] != 3) {
    iVar6 = puVar5[0x6f];
    iVar7 = FUN_1000bc80((int)puVar5);
    if (iVar7 != 0) goto LAB_1000d3f3;
    if (iVar6 != puVar5[0x6f]) goto LAB_1000d4b1;
    FUN_10005520((int *)(puVar5[0x4b95] + 0x128),(uint)local_20,local_20._4_4_,0);
    iVar6 = puVar5[0x4b95];
    *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x74) = 0xffffffff;
    iVar6 = puVar5[0x4b95];
    *(undefined4 *)(iVar6 + 0x78) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x7c) = 0xffffffff;
    iVar6 = FUN_1000bc80((int)puVar5);
    if (iVar6 != 0) goto LAB_1000daa4;
  }
LAB_1000d4b1:
  if (((puVar5[0x70] == 1) && (-1 < *(int *)(puVar5[0x4b95] + 0x74))) &&
     (*(longlong *)(puVar5[0x4b95] + 0x70) <= lVar14)) {
LAB_1000d54a:
    puVar11 = (undefined4 *)0x1;
    param_1 = (undefined4 *)0x1;
    iVar6 = FUN_1000bc80((int)puVar5);
    if (iVar6 == 0) goto LAB_1000d568;
    goto LAB_1000d5de;
  }
  iVar6 = *(int *)(puVar5[0x4b95] + 0x74);
  if ((local_14 < iVar6) || ((local_14 <= iVar6 && (local_18 <= *(uint *)(puVar5[0x4b95] + 0x70)))))
  {
    iVar6 = puVar5[0x4b95];
    iVar7 = *(int *)(iVar6 + 0xfc);
    uVar9 = *(uint *)(iVar6 + 0xf8);
    if ((local_20._4_4_ <= iVar7) && ((local_20._4_4_ < iVar7 || ((uint)local_20 <= uVar9))))
    goto LAB_1000d54a;
    goto LAB_1000d600;
  }
  iVar6 = FUN_1000bc80((int)puVar5);
  if (iVar6 == 0) {
    if ((puVar5[0x7c] != 3) && (iVar6 = FUN_10006440((int)puVar5,0), iVar6 != 0)) goto LAB_1000dabf;
    goto LAB_1000d4b1;
  }
LAB_1000d3f3:
  iVar6 = puVar5[0x4b95];
  iVar7 = *(int *)(iVar6 + 0xfc);
  uVar9 = *(uint *)(iVar6 + 0xf8);
  if ((iVar7 <= local_20._4_4_) && ((iVar7 < local_20._4_4_ || (uVar9 < (uint)local_20))))
  goto LAB_1000d600;
  goto LAB_1000daa4;
LAB_1000d568:
  if (puVar5[0x70] == 1) {
    if ((-1 < *(int *)(puVar5[0x4b95] + 0x74)) && (lVar14 <= *(longlong *)(puVar5[0x4b95] + 0x70)))
    goto LAB_1000d5d5;
    if (-1 < *(int *)(puVar5[0x4b95] + 0x74)) {
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  iVar6 = FUN_1000bc80((int)puVar5);
  if ((iVar6 != 0) || ((puVar5[0x7c] != 3 && (iVar6 = FUN_10006440((int)puVar5,0), iVar6 != 0))))
  goto LAB_1000d5d5;
  goto LAB_1000d568;
LAB_1000d5d5:
  param_1 = puVar11;
  if (1 < (int)puVar11) goto LAB_1000d628;
LAB_1000d5de:
  iVar6 = puVar5[0x4b95];
  iVar7 = *(int *)(iVar6 + 0xfc);
  uVar9 = *(uint *)(iVar6 + 0xf8);
  if ((local_20._4_4_ < iVar7) || ((local_20._4_4_ <= iVar7 && ((uint)local_20 <= uVar9))))
  goto LAB_1000d628;
LAB_1000d600:
  local_20 = CONCAT44(local_20._4_4_ + -1 + (uint)(0x7ffff < (uint)local_20),
                      (uint)local_20 - 0x80000);
  goto LAB_1000d307;
LAB_1000dabf:
  pcVar8 = mpegInGetLastErrString();
  cVar2 = *pcVar8;
joined_r0x1000da9d:
  if (cVar2 == '\0') {
LAB_1000daa4:
    FUN_10007e90((int)puVar5,(byte *)s_Unable_to_find_frame__d_10019198);
  }
  return 1;
LAB_1000d628:
  FUN_10005520((int *)(puVar5[0x4b95] + 0x128),(uint)local_20,local_20._4_4_,0);
  iVar6 = puVar5[0x4b95];
  iVar7 = (*(int *)(iVar6 + 0x134) - *(int *)(iVar6 + 300)) + -4;
  *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x74) = 0xffffffff;
  iVar6 = puVar5[0x4b95];
  *(undefined4 *)(iVar6 + 0x78) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x7c) = 0xffffffff;
  while (param_1 != (undefined4 *)0x0) {
    iVar6 = FUN_1000bc80((int)puVar5);
    if (iVar6 != 0) goto LAB_1000dabf;
    if ((puVar5[0x70] == 1) && (iVar6 = puVar5[0x4b95], -1 < *(int *)(iVar6 + 0x74))) {
      local_20._0_4_ = *(uint *)(iVar6 + 0xf0);
      local_20._4_4_ = *(int *)(iVar6 + 0xf4);
      iVar7 = *(int *)(iVar6 + 0x108);
      param_1 = (undefined4 *)((int)param_1 + -1);
    }
  }
  iVar6 = puVar5[0x4b95];
  *(undefined4 *)(iVar6 + 0x98) = *(undefined4 *)(iVar6 + 0x70);
  *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0x74);
  iVar6 = puVar5[0x4b95];
  puVar5[0x1347] = *(undefined4 *)(iVar6 + 0x80);
  puVar5[0x1348] = *(undefined4 *)(iVar6 + 0x84);
  *(undefined4 *)(iVar6 + 0xa0) = *(undefined4 *)(iVar6 + 0x1c0);
  *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(iVar6 + 0x1c4);
  iVar6 = puVar5[0x4b95];
  if (*(double *)(puVar5 + 0x12) == *(double *)(puVar5 + 0x10)) {
    plVar1 = (longlong *)(iVar6 + 0x70);
    if (lVar14 < *plVar1) {
      __alldiv((uint)(lVar14 - *plVar1),(uint)((ulonglong)(lVar14 - *plVar1) >> 0x20),
               *(uint *)(iVar6 + 0xa8),*(uint *)(iVar6 + 0xac));
    }
    else {
      __alldiv((uint)(lVar14 - *plVar1),(uint)((ulonglong)(lVar14 - *plVar1) >> 0x20),
               *(uint *)(iVar6 + 0xa8),*(uint *)(iVar6 + 0xac));
    }
    lVar16 = __ftol();
    puVar11 = (undefined4 *)lVar16;
  }
  else {
    uVar10 = local_18 - *(uint *)(iVar6 + 0x70);
    uVar9 = puVar5[0x81];
    puVar11 = (undefined4 *)0x0;
    uVar3 = (uint)(local_18 < *(uint *)(iVar6 + 0x70));
    iVar4 = local_14 - *(int *)(iVar6 + 0x74);
    iVar12 = iVar4 - uVar3;
    param_1 = (undefined4 *)0x0;
    if ((iVar12 < 0) ||
       ((iVar12 == 0 || SBORROW4(local_14,*(int *)(iVar6 + 0x74)) != SBORROW4(iVar4,uVar3) &&
        (uVar10 == 0)))) {
      lVar14 = CONCAT44(iVar12,uVar10);
      if ((iVar12 < 1) && (lVar14 = CONCAT44(iVar12,uVar10), iVar12 < 0)) {
        do {
          bVar13 = CARRY4(uVar10,*(uint *)(iVar6 + 0xa8));
          uVar10 = uVar10 + *(uint *)(iVar6 + 0xa8);
          iVar12 = iVar12 + *(int *)(iVar6 + 0xac) + (uint)bVar13;
          if (uVar9 != 0) {
            bVar13 = CARRY4(uVar10,*(uint *)(iVar6 + 0xb0));
            uVar10 = uVar10 + *(uint *)(iVar6 + 0xb0);
            iVar12 = iVar12 + *(int *)(iVar6 + 0xb4) + (uint)bVar13;
          }
          uVar9 = (uint)(uVar9 == 0);
          puVar11 = (undefined4 *)((int)param_1 + -1);
          param_1 = puVar11;
        } while (iVar12 < 0);
LAB_1000d801:
        lVar14 = CONCAT44(iVar12,uVar10);
      }
    }
    else {
      do {
        do {
          bVar13 = uVar10 < *(uint *)(iVar6 + 0xa8);
          uVar10 = uVar10 - *(uint *)(iVar6 + 0xa8);
          iVar12 = (iVar12 - *(int *)(iVar6 + 0xac)) - (uint)bVar13;
          if (uVar9 != 0) {
            bVar13 = uVar10 < *(uint *)(iVar6 + 0xb0);
            uVar10 = uVar10 - *(uint *)(iVar6 + 0xb0);
            iVar12 = (iVar12 - *(int *)(iVar6 + 0xb4)) - (uint)bVar13;
          }
          lVar14 = CONCAT44(iVar12,uVar10);
          uVar9 = (uint)(uVar9 == 0);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        } while (0 < iVar12);
        if (iVar12 < 0) goto LAB_1000d801;
      } while (uVar10 != 0);
    }
  }
  param_1 = (undefined4 *)0x0;
  *(undefined4 *)(iVar6 + 0xc) = 1;
  if (puVar11 != (undefined4 *)0x0) {
    do {
      param_1 = (undefined4 *)((int)param_1 + 1);
      if ((puVar5[0x7c] != 3) && (iVar6 = FUN_10006440((int)puVar5,0), iVar6 != 0))
      goto LAB_1000dabf;
      iVar6 = FUN_1000bc80((int)puVar5);
      if (iVar6 != 0) goto LAB_1000da95;
      if (*(int *)(puVar5[0x4b95] + 0xc) == 0) {
        *(undefined4 *)(puVar5[0x4b95] + 0xc) = 1;
      }
      iVar6 = puVar5[0x4b95];
      lVar16 = lVar14 - *(longlong *)(iVar6 + 0x70);
      if (lVar16 == 0) break;
      if ((lVar16 < 0x100000000) && (lVar16 < 0)) {
        lVar16 = CONCAT44(-((int)((ulonglong)lVar16 >> 0x20) + (uint)((int)lVar16 != 0)),
                          -(int)lVar16);
      }
      lVar15 = __alldiv(*(uint *)(iVar6 + 0xa8),*(uint *)(iVar6 + 0xac),3,0);
    } while (lVar15 <= lVar16);
  }
  iVar6 = puVar5[0x4b95];
  *(undefined4 *)(iVar6 + 0x88) = *(undefined4 *)(iVar6 + 0x70);
  *(undefined4 *)(iVar6 + 0x8c) = *(undefined4 *)(iVar6 + 0x74);
  iVar6 = puVar5[0x4b95];
  puVar5[0x1345] = *(undefined4 *)(iVar6 + 0x80);
  puVar5[0x1346] = *(undefined4 *)(iVar6 + 0x84);
  *(undefined4 *)(iVar6 + 0x90) = *(undefined4 *)(iVar6 + 0x1c0);
  *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar6 + 0x1c4);
  if (puVar5[0x70] == 1) {
    iVar6 = puVar5[0x4b95];
    *(undefined4 *)(iVar6 + 0x98) = *(undefined4 *)(iVar6 + 0x88);
    *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0x8c);
    puVar5[0x1347] = puVar5[0x1345];
    iVar6 = puVar5[0x4b95];
    puVar5[0x1348] = puVar5[0x1346];
    *(undefined4 *)(iVar6 + 0xa0) = *(undefined4 *)(iVar6 + 0x90);
    *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(iVar6 + 0x94);
  }
  iVar6 = puVar5[0x4b95];
  if (*(int *)(iVar6 + 0x308) != 2) {
    if (*(int *)(iVar6 + 0x11c) == 0) {
      *(undefined4 *)(iVar6 + 0x160) = 1;
      FUN_10005520((int *)(puVar5[0x4b95] + 0x128),(uint)local_20,local_20._4_4_,iVar7);
      *(undefined4 *)(puVar5[0x4b95] + 0x160) = 0;
      iVar6 = FUN_10007a60(puVar5,(int)param_1,puVar5[0x6f]);
      if (iVar6 != 0) {
        return 1;
      }
    }
    puVar5[0x71] = puVar5[0x70];
    if (*(int *)(puVar5[0x4b95] + 0x168) != 0) {
LAB_1000da95:
      pcVar8 = mpegInGetLastErrString();
      cVar2 = *pcVar8;
      goto joined_r0x1000da9d;
    }
  }
  return 0;
}



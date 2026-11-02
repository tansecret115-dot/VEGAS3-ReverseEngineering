/* Module: vegas30.exe
   Function: FUN_004be390
   Address: 004be390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004be653) */
/* WARNING: Removing unreachable block (ram,0x004be5ee) */
/* WARNING: Removing unreachable block (ram,0x004be5d8) */
/* WARNING: Removing unreachable block (ram,0x004be712) */
/* WARNING: Removing unreachable block (ram,0x004be796) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_004be390(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  
  iVar4 = param_1;
  uVar11 = *(uint *)(param_1 + 0x174);
  iVar7 = *(int *)(param_1 + 0xb54);
  uVar12 = *(uint *)(param_1 + 0xb50);
  uVar5 = uVar11 & 0xffff;
  if ((iVar7 < 1) && ((iVar7 < 0 || (uVar12 == 0)))) {
    if (uVar5 == 9) {
      if (*(double *)(param_1 + 0x1c0) * _DAT_00610560 < (double)CONCAT44(param_3,param_2)) {
        *(uint *)(param_1 + 0x174) = uVar11 & 0xffff000a | 10;
        param_1 = 10;
        iVar6 = -uVar12;
        iVar8 = iVar7 + (uint)(uVar12 != 0);
        iVar9 = -iVar8;
        if ((-1 < iVar9) && ((iVar9 != 0 && iVar8 < 1 || (iVar6 != 0)))) {
          iVar6 = 0;
          iVar9 = 0;
        }
        uVar11 = *(uint *)(iVar4 + 0xb48);
        iVar8 = *(int *)(iVar4 + 0xb4c);
        *(int *)(iVar4 + 0x1a8) = iVar6;
        *(int *)(iVar4 + 0x1ac) = iVar9;
        uVar5 = *(uint *)(iVar4 + 0x600) - uVar11;
        iVar6 = uVar5 - uVar12;
        iVar7 = (((*(int *)(iVar4 + 0x604) - iVar8) - (uint)(*(uint *)(iVar4 + 0x600) < uVar11)) -
                iVar7) - (uint)(uVar5 < uVar12);
        if ((iVar7 < 1) && (iVar7 < 0)) {
          iVar6 = 0;
          iVar7 = 0;
        }
        uVar12 = *(uint *)(iVar4 + 0x98);
        *(int *)(iVar4 + 0x1b0) = iVar6;
        uVar5 = uVar12 - uVar11;
        *(int *)(iVar4 + 0x1b4) = iVar7;
        *(uint *)(iVar4 + 0x98) = uVar11;
        bVar13 = CARRY4(param_2,uVar5);
        param_2 = param_2 + uVar5;
        param_3 = param_3 + ((*(int *)(iVar4 + 0x9c) - iVar8) - (uint)(uVar12 < uVar11)) +
                  (uint)bVar13;
        *(int *)(iVar4 + 0x9c) = iVar8;
        uVar5 = param_1;
      }
    }
    else if ((uVar5 == 10) &&
            ((double)CONCAT44(param_3,param_2) < *(double *)(param_1 + 0x1c0) * _DAT_00612b08)) {
      uVar5 = *(uint *)(param_1 + 0xb48);
      iVar6 = *(int *)(param_1 + 0xb4c);
      *(uint *)(param_1 + 0x174) = uVar11 & 0xffff0009 | 9;
      param_1 = 9;
      iVar8 = -uVar5;
      iVar9 = iVar6 + (uint)(uVar5 != 0);
      iVar10 = -iVar9;
      if ((-1 < iVar10) && ((iVar10 != 0 && iVar9 < 1 || (iVar8 != 0)))) {
        iVar8 = 0;
        iVar10 = 0;
      }
      *(int *)(iVar4 + 0x1a8) = iVar8;
      *(int *)(iVar4 + 0x1ac) = iVar10;
      if ((iVar7 < 1) && (iVar7 < 0)) {
        uVar12 = 0;
        iVar7 = 0;
      }
      *(uint *)(iVar4 + 0x1b0) = uVar12;
      uVar11 = *(uint *)(iVar4 + 0x98);
      *(int *)(iVar4 + 0x1b4) = iVar7;
      uVar12 = uVar11 - uVar5;
      *(uint *)(iVar4 + 0x98) = uVar5;
      bVar13 = CARRY4(param_2,uVar12);
      param_2 = param_2 + uVar12;
      param_3 = param_3 + ((*(int *)(iVar4 + 0x9c) - iVar6) - (uint)(uVar11 < uVar5)) + (uint)bVar13
      ;
      *(int *)(iVar4 + 0x9c) = iVar6;
      uVar5 = param_1;
    }
  }
  param_1 = uVar5;
  iVar7 = *(int *)(iVar4 + 0x1ac);
  uVar11 = *(uint *)(iVar4 + 0x1a8);
  if ((iVar7 < param_3) || ((iVar7 <= param_3 && (uVar11 <= param_2)))) {
    iVar7 = *(int *)(iVar4 + 0x1b4);
    uVar11 = *(uint *)(iVar4 + 0x1b0);
    if ((param_3 < iVar7) || ((param_3 <= iVar7 && (param_2 <= uVar11)))) {
      iVar7 = param_3;
      uVar11 = param_2;
    }
  }
  lVar2 = CONCAT44(iVar7,uVar11);
  uVar12 = *(uint *)(iVar4 + 0x98);
  iVar7 = *(int *)(iVar4 + 0x9c) + iVar7 + (uint)CARRY4(uVar12,uVar11);
  lVar15 = CONCAT44(iVar7,uVar12 + uVar11);
  if (param_4 == 0) {
    lVar15 = FUN_004959b0(iVar4,0,uVar12 + uVar11,iVar7,param_1 == 8);
    uVar12 = *(uint *)(iVar4 + 0x98);
    lVar2 = *(longlong *)(iVar4 + 0x1a8);
    lVar15 = lVar15 - *(longlong *)(iVar4 + 0x98);
    if ((*(longlong *)(iVar4 + 0x1a8) <= lVar15) &&
       (lVar2 = lVar15, *(longlong *)(iVar4 + 0x1b0) < lVar15)) {
      lVar2 = *(longlong *)(iVar4 + 0x1b0);
    }
    lVar15 = lVar2 + CONCAT44(*(undefined4 *)(iVar4 + 0x9c),uVar12);
  }
  iVar7 = (int)((ulonglong)lVar15 >> 0x20);
  if (param_1 == 8) {
    if ((lVar15 < 0x100000000) && (lVar15 < 0)) {
      lVar15 = 0;
    }
    else {
      lVar2 = CONCAT44((*(int *)(iVar4 + 0x604) - *(int *)(iVar4 + 0xb54)) -
                       (uint)(*(uint *)(iVar4 + 0x600) < *(uint *)(iVar4 + 0xb50)),
                       *(uint *)(iVar4 + 0x600) - *(uint *)(iVar4 + 0xb50));
      if (lVar2 < lVar15) {
        lVar15 = lVar2;
      }
    }
    lVar15 = lVar15 - *(longlong *)(iVar4 + 0xb48);
    bVar13 = lVar15 != 0;
    if (bVar13) {
      *(longlong *)(iVar4 + 0xb48) = lVar15 + *(longlong *)(iVar4 + 0xb48);
    }
    bVar14 = *(uint *)(iVar4 + 0xb48) < uVar12;
    iVar7 = *(uint *)(iVar4 + 0xb48) - uVar12;
LAB_004be7d4:
    iVar6 = (*(int *)(iVar4 + 0xb4c) - *(int *)(iVar4 + 0x9c)) - (uint)bVar14;
  }
  else {
    if (param_1 == 9) {
      uVar11 = *(uint *)(iVar4 + 0xb50);
      puVar1 = (uint *)(iVar4 + 0xb48);
      lVar3 = *(longlong *)puVar1;
      lVar2 = CONCAT44(*(int *)(iVar4 + 0xb4c) + *(int *)(iVar4 + 0xb54) +
                       (uint)CARRY4(*puVar1,uVar11),*puVar1 + uVar11);
      if ((lVar15 < 0x100000000) && (lVar15 < 0)) {
        lVar15 = 0;
      }
      else if (lVar2 < lVar15) {
        lVar15 = lVar2;
      }
      lVar15 = lVar15 - *(longlong *)puVar1;
      bVar13 = lVar15 != 0;
      if (bVar13) {
        *(int *)(iVar4 + 0xb48) = (int)(lVar15 + lVar3);
        *(uint *)(iVar4 + 0xb50) = uVar11 - (uint)lVar15;
        *(int *)(iVar4 + 0xb4c) = (int)((ulonglong)(lVar15 + lVar3) >> 0x20);
        *(uint *)(iVar4 + 0xb54) =
             (*(int *)(iVar4 + 0xb54) - (int)((ulonglong)lVar15 >> 0x20)) -
             (uint)(uVar11 < (uint)lVar15);
      }
      bVar14 = *(uint *)(iVar4 + 0xb48) < *(uint *)(iVar4 + 0x98);
      iVar7 = *(uint *)(iVar4 + 0xb48) - *(uint *)(iVar4 + 0x98);
      goto LAB_004be7d4;
    }
    if (param_1 != 10) goto LAB_004be895;
    puVar1 = (uint *)(iVar4 + 0xb48);
    uVar11 = *puVar1;
    uVar12 = *(uint *)(iVar4 + 0xb50);
    lVar2 = *(longlong *)puVar1;
    if (((*(longlong *)puVar1 <= lVar15) && (lVar2 = lVar15, *(int *)(iVar4 + 0x604) <= iVar7)) &&
       ((*(int *)(iVar4 + 0x604) < iVar7 || (*(uint *)(iVar4 + 0x600) < (uint)lVar15)))) {
      lVar2 = *(longlong *)(iVar4 + 0x600);
    }
    lVar2 = lVar2 - CONCAT44(*(int *)(iVar4 + 0xb4c) + *(int *)(iVar4 + 0xb54) +
                             (uint)CARRY4(uVar11,uVar12),uVar11 + uVar12);
    bVar13 = lVar2 != 0;
    if (bVar13) {
      *(longlong *)(iVar4 + 0xb50) = lVar2 + *(longlong *)(iVar4 + 0xb50);
    }
    uVar12 = uVar11 - *(uint *)(iVar4 + 0x98);
    iVar7 = uVar12 + *(uint *)(iVar4 + 0xb50);
    iVar6 = ((*(int *)(iVar4 + 0xb4c) - *(int *)(iVar4 + 0x9c)) -
            (uint)(uVar11 < *(uint *)(iVar4 + 0x98))) + *(int *)(iVar4 + 0xb54) +
            (uint)CARRY4(uVar12,*(uint *)(iVar4 + 0xb50));
  }
  lVar2 = CONCAT44(iVar6,iVar7);
  if (bVar13) {
    FUN_004530a0(iVar4,0x8001);
    if ((*(uint *)(iVar4 + 0x18) & 0x10000) == 0) {
      if (*(int *)(iVar4 + 0xab4) != 0) {
        (**(code **)(*(int *)(iVar4 + 0xab4) + 0x20))(iVar4,0);
      }
      FUN_004530a0(iVar4,4);
      lVar2 = CONCAT44(iVar6,iVar7);
    }
    else {
      param_3 = *(int *)(iVar4 + 0xb54);
      uVar11 = *(uint *)(iVar4 + 0xb48);
      iVar8 = *(int *)(iVar4 + 0xb4c);
      uVar12 = *(uint *)(iVar4 + 0xb50);
      if ((param_1 == 10) ||
         (((param_1 != 9 && (*(int *)(iVar4 + 0xb7c) < 1)) && (*(int *)(iVar4 + 0xb7c) < 0)))) {
        bVar13 = CARRY4(uVar11,uVar12);
        uVar11 = uVar11 + uVar12;
        iVar8 = iVar8 + param_3 + (uint)bVar13;
        bVar13 = uVar12 != 0;
        uVar12 = -uVar12;
        param_3 = -(param_3 + (uint)bVar13);
      }
      FUN_00453340(iVar4,uVar11,iVar8,uVar12,param_3,
                   (-(uint)(param_5 != 0) & 0xffffffc0) + 0x40 | 0x20);
      lVar2 = CONCAT44(iVar6,iVar7);
    }
  }
LAB_004be895:
  *(longlong *)(iVar4 + 0x198) = lVar2;
  return lVar2;
}



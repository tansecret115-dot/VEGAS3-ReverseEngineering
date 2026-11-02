/* Module: erv23260.dll
   Function: FUN_6380e950
   Address: 6380e950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6380ea73) */
/* WARNING: Removing unreachable block (ram,0x6380eebb) */

void __thiscall FUN_6380e950(void *this,int param_1,int *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  iVar10 = param_1;
  bVar1 = *(byte *)(param_1 + 100);
  bVar3 = 0;
  if (((bVar1 & 4) != 0) ||
     (bVar2 = false, *(char *)(*(int *)((int)this + 0xc4) + (*(int *)(param_1 + 4) >> 4)) != '\0'))
  {
    bVar2 = true;
  }
  if ((bVar1 & 1) == 0) {
    local_28 = param_1 + -0x7c;
    if (*(int *)(param_1 + -0x24) == 4) {
      bVar3 = 1;
    }
  }
  else {
    bVar3 = 0;
    local_28 = 0;
  }
  if (bVar2) {
    bVar13 = false;
    bVar14 = false;
    local_10 = 0;
    iVar11 = 0;
  }
  else {
    iVar11 = param_1 + *(int *)((int)this + 0x124) * -0x7c;
    bVar13 = *(int *)(iVar11 + 0x58) == 4;
    local_10 = iVar11 + 0x7c;
    bVar14 = *(int *)(iVar11 + 0xd4) == 4;
  }
  if ((param_3 != 0) && (*(int *)(param_1 + 0x58) == 4)) {
    if ((bVar1 & 1) == 0) {
LAB_6380ea77:
      if (bVar2) {
        local_1c = *(int *)(local_28 + 8 + (uint)bVar3 * 8);
        param_1 = *(int *)(local_28 + 0xc + (uint)bVar3 * 8);
        param_3 = param_1;
        local_18 = local_1c;
        local_14 = local_1c;
        local_8 = param_1;
      }
      else {
        local_1c = *(int *)(local_28 + 8 + (uint)bVar3 * 8);
        param_3 = *(int *)(local_28 + 0xc + (uint)bVar3 * 8);
        local_18 = *(int *)(iVar11 + 8 + (-(uint)bVar13 & 2) * 8);
        local_8 = *(int *)(iVar11 + 0xc + (-(uint)bVar13 & 2) * 8);
        uVar5 = -(uint)bVar14 & 2;
        local_14 = *(int *)(local_10 + 8 + uVar5 * 8);
LAB_6380eaf2:
        param_1 = *(int *)(local_10 + 0xc + uVar5 * 8);
      }
    }
    else {
      if (!bVar2) {
        if ((bVar1 & 1) == 0) goto LAB_6380ea77;
        local_1c = 0;
        param_3 = 0;
        local_18 = *(int *)(iVar11 + 8 + (-(uint)bVar13 & 2) * 8);
        local_8 = *(int *)(iVar11 + 0xc + (-(uint)bVar13 & 2) * 8);
        uVar5 = -(uint)bVar14 & 2;
        local_14 = *(int *)(local_10 + 8 + uVar5 * 8);
        goto LAB_6380eaf2;
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      param_1 = 0;
      local_8 = 0;
      param_3 = 0;
    }
    if ((*(byte *)(iVar10 + 100) & 2) != 0) {
      local_14 = 0;
      param_1 = 0;
    }
    iVar12 = local_14;
    if (local_14 < local_18) {
      iVar12 = local_18;
    }
    if (iVar12 < local_1c) {
      local_30 = local_1c;
    }
    else {
      local_30 = local_18;
      if (local_18 <= local_14) {
        local_30 = local_14;
      }
    }
    iVar12 = local_14;
    if (local_18 < local_14) {
      iVar12 = local_18;
    }
    if (local_1c < iVar12) {
      local_2c = local_1c;
    }
    else {
      local_2c = local_18;
      if (local_14 <= local_18) {
        local_2c = local_14;
      }
    }
    *param_2 = ((local_14 + local_18 + local_1c) - local_2c) - local_30;
    iVar12 = param_1;
    if (param_1 < local_8) {
      iVar12 = local_8;
    }
    if (iVar12 < param_3) {
      local_2c = param_3;
    }
    else {
      local_2c = local_8;
      if (local_8 <= param_1) {
        local_2c = param_1;
      }
    }
    iVar12 = param_1;
    if (local_8 < param_1) {
      iVar12 = local_8;
    }
    if (param_3 < iVar12) {
      local_30 = param_3;
    }
    else {
      local_30 = local_8;
      if (param_1 <= local_8) {
        local_30 = param_1;
      }
    }
    param_2[1] = ((param_1 + local_8 + param_3) - local_30) - local_2c;
    if ((((bVar1 & 1) != 0) && (bVar2)) ||
       ((((bVar1 & 1) == 0 || ((bVar2 && ((bVar1 & 1) == 0)))) && (bVar2)))) {
      iVar12 = *(int *)(iVar10 + 8);
      iVar11 = *(int *)(iVar10 + 0xc);
      iVar6 = iVar12;
      iVar4 = iVar12;
      param_3 = iVar11;
      local_8 = iVar11;
    }
    else {
      param_3 = *(int *)(iVar10 + 0xc);
      iVar12 = *(int *)(iVar10 + 8);
      iVar4 = *(int *)(iVar11 + 8 + (-(uint)bVar13 & 3) * 8);
      local_8 = *(int *)(iVar11 + 0xc + (-(uint)bVar13 & 3) * 8);
      iVar6 = *(int *)(local_10 + 8 + (-(uint)bVar14 & 2) * 8);
      iVar11 = *(int *)(local_10 + 0xc + (-(uint)bVar14 & 2) * 8);
    }
    if ((*(byte *)(iVar10 + 100) & 2) != 0) {
      iVar11 = 0;
      iVar6 = 0;
    }
    iVar9 = iVar4;
    if (iVar4 <= iVar6) {
      iVar9 = iVar6;
    }
    param_1 = iVar12;
    if ((iVar12 <= iVar9) && (param_1 = iVar4, iVar4 <= iVar6)) {
      param_1 = iVar6;
    }
    iVar9 = iVar4;
    if (iVar6 <= iVar4) {
      iVar9 = iVar6;
    }
    iVar7 = iVar12;
    if ((iVar9 <= iVar12) && (iVar7 = iVar4, iVar6 <= iVar4)) {
      iVar7 = iVar6;
    }
    param_2[2] = ((iVar6 + iVar4 + iVar12) - param_1) - iVar7;
    iVar12 = local_8;
    if (local_8 <= iVar11) {
      iVar12 = iVar11;
    }
    iVar4 = param_3;
    if ((param_3 <= iVar12) && (iVar4 = local_8, local_8 <= iVar11)) {
      iVar4 = iVar11;
    }
    iVar12 = local_8;
    if (iVar11 <= local_8) {
      iVar12 = iVar11;
    }
    iVar6 = param_3;
    if ((iVar12 <= param_3) && (iVar6 = local_8, iVar11 <= local_8)) {
      iVar6 = iVar11;
    }
    iVar12 = 0;
    param_2[3] = ((iVar11 + local_8 + param_3) - iVar4) - iVar6;
    if (((bVar1 & 1) != 0) && (bVar2)) {
      param_3 = 0;
      goto LAB_6380ed2d;
    }
    if ((bVar1 & 1) == 0) {
LAB_6380ecf7:
      if (bVar2) {
        iVar12 = *(int *)(local_28 + 8 + (-(uint)bVar3 & 3) * 8);
        param_3 = *(int *)(local_28 + 0xc + (-(uint)bVar3 & 3) * 8);
        goto LAB_6380ed2d;
      }
    }
    else {
      if (!bVar2) {
        param_3 = 0;
        goto LAB_6380ed2d;
      }
      if ((bVar1 & 1) == 0) goto LAB_6380ecf7;
    }
    iVar12 = *(int *)(local_28 + 8 + (-(uint)bVar3 & 3) * 8);
    param_3 = *(int *)(local_28 + 0xc + (-(uint)bVar3 & 3) * 8);
LAB_6380ed2d:
    iVar11 = *(int *)(iVar10 + 8);
    iVar4 = *(int *)(iVar10 + 0x10);
    iVar6 = *(int *)(iVar10 + 0x14);
    iVar9 = *(int *)(iVar10 + 0xc);
    iVar7 = iVar11;
    if (iVar11 <= iVar4) {
      iVar7 = iVar4;
    }
    local_30 = iVar12;
    if ((iVar12 <= iVar7) && (local_30 = iVar11, iVar11 <= iVar4)) {
      local_30 = iVar4;
    }
    iVar7 = iVar11;
    if (iVar4 <= iVar11) {
      iVar7 = iVar4;
    }
    iVar8 = iVar12;
    if ((iVar7 <= iVar12) && (iVar8 = iVar11, iVar4 <= iVar11)) {
      iVar8 = iVar4;
    }
    param_2[4] = ((iVar4 + iVar11 + iVar12) - local_30) - iVar8;
    iVar11 = iVar9;
    if (iVar9 <= iVar6) {
      iVar11 = iVar6;
    }
    iVar12 = param_3;
    if ((param_3 <= iVar11) && (iVar12 = iVar9, iVar9 <= iVar6)) {
      iVar12 = iVar6;
    }
    iVar11 = iVar9;
    if (iVar6 <= iVar9) {
      iVar11 = iVar6;
    }
    iVar4 = param_3;
    if ((iVar11 <= param_3) && (iVar4 = iVar9, iVar6 <= iVar9)) {
      iVar4 = iVar6;
    }
    param_2[5] = ((iVar6 + iVar9 + param_3) - iVar4) - iVar12;
    iVar11 = *(int *)(iVar10 + 0x1c);
    iVar12 = *(int *)(iVar10 + 0x10);
    iVar4 = *(int *)(iVar10 + 0x18);
    iVar6 = *(int *)(iVar10 + 0xc);
    iVar9 = *(int *)(iVar10 + 8);
    iVar10 = *(int *)(iVar10 + 0x14);
    iVar7 = iVar9;
    if (iVar9 <= iVar12) {
      iVar7 = iVar12;
    }
    param_1 = iVar4;
    if ((iVar4 <= iVar7) && (param_1 = iVar9, iVar9 <= iVar12)) {
      param_1 = iVar12;
    }
    iVar7 = iVar9;
    if (iVar12 <= iVar9) {
      iVar7 = iVar12;
    }
    iVar8 = iVar4;
    if ((iVar7 <= iVar4) && (iVar8 = iVar9, iVar12 <= iVar9)) {
      iVar8 = iVar12;
    }
    param_2[6] = ((iVar12 + iVar9 + iVar4) - param_1) - iVar8;
    iVar12 = iVar6;
    if (iVar6 <= iVar10) {
      iVar12 = iVar10;
    }
    iVar4 = iVar11;
    if ((iVar11 <= iVar12) && (iVar4 = iVar6, iVar6 <= iVar10)) {
      iVar4 = iVar10;
    }
    iVar12 = iVar6;
    if (iVar10 <= iVar6) {
      iVar12 = iVar10;
    }
    if (iVar11 < iVar12) {
      param_2[7] = (iVar10 + iVar6) - iVar4;
      return;
    }
    iVar12 = iVar6;
    if (iVar10 <= iVar6) {
      iVar12 = iVar10;
    }
    param_2[7] = ((iVar10 + iVar6 + iVar11) - iVar4) - iVar12;
    return;
  }
  if ((*(int *)((int)this + 0x158) != 3) && (*(int *)((int)this + 0x158) != 5)) {
    iVar10 = 0;
    if ((bVar1 & 1) == 0) {
LAB_6380eec0:
      if (bVar2) {
        iVar12 = *(int *)(local_28 + 8 + (uint)bVar3 * 8);
        iVar4 = *(int *)(local_28 + 0xc + (uint)bVar3 * 8);
        iVar6 = iVar12;
        iVar10 = iVar12;
        iVar11 = iVar4;
        param_3 = iVar4;
        goto joined_r0x6380f056;
      }
      iVar10 = *(int *)(local_28 + 8 + (uint)bVar3 * 8);
      param_3 = *(int *)(local_28 + 0xc + (uint)bVar3 * 8);
    }
    else {
      if (bVar2) {
        iVar12 = 0;
        iVar4 = 0;
        param_3 = 0;
        iVar6 = 0;
        iVar11 = 0;
        goto joined_r0x6380f056;
      }
      if ((bVar1 & 1) == 0) goto LAB_6380eec0;
      param_3 = 0;
    }
    iVar12 = *(int *)(local_10 + 8 + (-(uint)bVar14 & 2) * 8);
    iVar4 = *(int *)(local_10 + 0xc + (-(uint)bVar14 & 2) * 8);
    iVar6 = *(int *)(iVar11 + 8 + (-(uint)bVar13 & 2) * 8);
    iVar11 = *(int *)(iVar11 + 0xc + (-(uint)bVar13 & 2) * 8);
    goto joined_r0x6380f056;
  }
  if (((bVar1 & 1) != 0) && (bVar2)) {
    iVar12 = 0;
    iVar4 = 0;
    param_3 = 0;
    iVar6 = 0;
    iVar10 = 0;
    iVar11 = 0;
    goto joined_r0x6380f056;
  }
  if ((bVar1 & 1) == 0) {
LAB_6380efa5:
    if (bVar2) {
      if (*(int *)(local_28 + 0x58) == *(int *)(param_1 + 0x58)) {
        iVar12 = *(int *)(local_28 + 8);
        iVar4 = *(int *)(local_28 + 0xc);
        iVar6 = iVar12;
        iVar10 = iVar12;
        iVar11 = iVar4;
        param_3 = iVar4;
      }
      else {
        iVar12 = 0;
        iVar4 = 0;
        param_3 = 0;
        iVar6 = iVar12;
        iVar10 = iVar12;
        iVar11 = 0;
      }
      goto joined_r0x6380f056;
    }
LAB_6380efe2:
    iVar12 = *(int *)(param_1 + 0x58);
    if (*(int *)(local_28 + 0x58) == iVar12) {
      iVar10 = *(int *)(local_28 + 8);
      param_3 = *(int *)(local_28 + 0xc);
    }
    else {
      iVar10 = 0;
      param_3 = 0;
    }
    if (*(int *)(iVar11 + 0x58) == iVar12) {
      iVar6 = *(int *)(iVar11 + 8);
      iVar11 = *(int *)(iVar11 + 0xc);
    }
    else {
      iVar6 = 0;
      iVar11 = 0;
    }
    if (*(int *)(local_10 + 0x58) == iVar12) {
      iVar12 = *(int *)(local_10 + 8);
      iVar4 = *(int *)(local_10 + 0xc);
      goto joined_r0x6380f056;
    }
  }
  else {
    if (bVar2) {
      if ((bVar1 & 1) == 0) goto LAB_6380efa5;
      goto LAB_6380efe2;
    }
    iVar10 = 0;
    param_3 = 0;
    if (*(int *)(iVar11 + 0x58) == *(int *)(param_1 + 0x58)) {
      iVar6 = *(int *)(iVar11 + 8);
      iVar11 = *(int *)(iVar11 + 0xc);
    }
    else {
      iVar6 = 0;
      iVar11 = 0;
    }
    if (*(int *)(local_10 + 0x58) == *(int *)(param_1 + 0x58)) {
      iVar12 = *(int *)(local_10 + 8);
      iVar4 = *(int *)(local_10 + 0xc);
      goto joined_r0x6380f056;
    }
  }
  iVar12 = 0;
  iVar4 = 0;
joined_r0x6380f056:
  if ((bVar1 & 2) != 0) {
    iVar4 = 0;
    iVar12 = 0;
  }
  iVar9 = iVar6;
  if (iVar6 <= iVar12) {
    iVar9 = iVar12;
  }
  param_1 = iVar10;
  if ((iVar10 <= iVar9) && (param_1 = iVar6, iVar6 <= iVar12)) {
    param_1 = iVar12;
  }
  iVar9 = iVar6;
  if (iVar12 <= iVar6) {
    iVar9 = iVar12;
  }
  iVar7 = iVar10;
  if ((iVar9 <= iVar10) && (iVar7 = iVar6, iVar12 <= iVar6)) {
    iVar7 = iVar12;
  }
  *param_2 = ((iVar12 + iVar6 + iVar10) - iVar7) - param_1;
  iVar10 = iVar11;
  if (iVar11 <= iVar4) {
    iVar10 = iVar4;
  }
  iVar12 = param_3;
  if ((param_3 <= iVar10) && (iVar12 = iVar11, iVar11 <= iVar4)) {
    iVar12 = iVar4;
  }
  iVar10 = iVar11;
  if (iVar4 <= iVar11) {
    iVar10 = iVar4;
  }
  if (param_3 < iVar10) {
    param_2[1] = (iVar4 + iVar11) - iVar12;
    return;
  }
  iVar10 = iVar11;
  if (iVar4 <= iVar11) {
    iVar10 = iVar4;
  }
  param_2[1] = ((iVar4 + iVar11 + param_3) - iVar12) - iVar10;
  return;
}



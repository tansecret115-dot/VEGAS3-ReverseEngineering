/* Module: vegas30.exe
   Function: FUN_00453340
   Address: 00453340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00453803) */
/* WARNING: Removing unreachable block (ram,0x00453885) */

void FUN_00453340(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  HWND pHVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  longlong lVar14;
  RECT RStack_10;
  
  uVar12 = param_6 | 0x20;
  if (DAT_00647794 == 0) {
    uVar12 = param_6 & 0xffffffdf;
  }
  param_6 = uVar12;
  if ((param_6 & 0x10) != 0) {
    if (DAT_00647794 != 0) {
      param_6 = param_6 | 0x20;
    }
    param_4 = *(uint *)(param_1 + 0xb78) + *(uint *)(param_1 + 0xb70);
    param_5 = *(int *)(param_1 + 0xb7c) + *(int *)(param_1 + 0xb74) +
              (uint)CARRY4(*(uint *)(param_1 + 0xb78),*(uint *)(param_1 + 0xb70));
    if ((param_5 < 1) && (param_5 < 0)) {
      param_5 = 0;
      param_4 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x604);
      if ((iVar6 <= param_5) && ((iVar6 < param_5 || (*(uint *)(param_1 + 0x600) < param_4)))) {
        param_5 = iVar6;
        param_4 = *(uint *)(param_1 + 0x600);
      }
    }
    if ((param_3 < 1) && (param_3 < 0)) {
      param_2 = 0;
      param_3 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x604);
      if ((iVar6 <= param_3) && ((iVar6 < param_3 || (*(uint *)(param_1 + 0x600) < param_2)))) {
        param_2 = *(uint *)(param_1 + 0x600);
        param_3 = iVar6;
      }
      bVar13 = param_4 < param_2;
      param_4 = param_4 - param_2;
      param_5 = (param_5 - param_3) - (uint)bVar13;
    }
  }
  if ((param_3 < 1) && (param_3 < 0)) {
    iVar6 = 0;
    param_2 = 0;
    uVar12 = param_2;
LAB_00453459:
    param_2 = uVar12;
    param_3 = iVar6;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x604);
    uVar12 = *(uint *)(param_1 + 0x600);
    if ((iVar6 <= param_3) && ((iVar6 < param_3 || (uVar12 < param_2)))) goto LAB_00453459;
  }
  uVar12 = param_2 + param_4;
  iVar6 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
  if ((iVar6 < 1) && (iVar6 < 0)) {
    uVar12 = 0;
    iVar6 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x604);
    if ((iVar9 <= iVar6) && ((iVar9 < iVar6 || (*(uint *)(param_1 + 0x600) < uVar12)))) {
      uVar12 = *(uint *)(param_1 + 0x600);
      iVar6 = iVar9;
    }
  }
  param_4 = uVar12 - param_2;
  param_5 = (iVar6 - param_3) - (uint)(uVar12 < param_2);
  pcVar1 = *(code **)(*(int *)(param_1 + 0xab4) + 0x2c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,&param_2,&param_4);
    if ((param_3 < 1) && (param_3 < 0)) {
      iVar6 = 0;
      param_2 = 0;
      uVar12 = param_2;
LAB_004534f5:
      param_2 = uVar12;
      param_3 = iVar6;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x604);
      uVar12 = *(uint *)(param_1 + 0x600);
      if ((iVar6 <= param_3) && ((iVar6 < param_3 || (uVar12 < param_2)))) goto LAB_004534f5;
    }
    uVar12 = param_2 + param_4;
    iVar6 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
    if ((iVar6 < 1) && (iVar6 < 0)) {
      uVar12 = 0;
      iVar6 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x604);
      if ((iVar9 <= iVar6) && ((iVar9 < iVar6 || (*(uint *)(param_1 + 0x600) < uVar12)))) {
        uVar12 = *(uint *)(param_1 + 0x600);
        iVar6 = iVar9;
      }
    }
    param_4 = uVar12 - param_2;
    param_5 = (iVar6 - param_3) - (uint)(uVar12 < param_2);
  }
  if ((((*(uint *)(param_1 + 0xb70) == param_2) && (*(int *)(param_1 + 0xb74) == param_3)) &&
      (*(uint *)(param_1 + 0xb78) == param_4)) && (*(int *)(param_1 + 0xb7c) == param_5)) {
    bVar13 = false;
    if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
      if (*(int *)(param_1 + 0xab4) == 0) {
        return;
      }
      if ((*(uint *)(param_1 + 0x18) & 0x4000) != 0) {
        return;
      }
      (**(code **)(*(int *)(param_1 + 0xab4) + 0x1c))(param_1,param_6);
      return;
    }
  }
  else {
    bVar13 = true;
  }
  if (((*(uint *)(param_1 + 0xb78) != param_4) || (*(int *)(param_1 + 0xb7c) != param_5)) ||
     ((*(uint *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0 && (bVar13)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pHVar7 = GetFocus();
  if ((pHVar7 == *(HWND *)(param_1 + 4)) && (*(int *)(param_1 + 0xb24) == 0)) {
    bVar4 = true;
    FUN_00452e00(param_1);
  }
  else {
    bVar4 = false;
  }
  uVar12 = param_6;
  if ((param_6 & 0x40) == 0) {
    if ((param_6 & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xc30) = 1;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xc30);
      *(undefined4 *)(param_1 + 0xc30) = 0;
      if (iVar6 == 0) goto LAB_0045363c;
    }
    FUN_00454020(param_1,~param_6 >> 7 & 1);
  }
LAB_0045363c:
  iVar6 = *(int *)(param_1 + 0xb78);
  iVar9 = *(int *)(param_1 + 0xb7c);
  *(uint *)(param_1 + 0xb70) = param_2;
  *(uint *)(param_1 + 0xb78) = param_4;
  *(int *)(param_1 + 0xb74) = param_3;
  *(int *)(param_1 + 0xb7c) = param_5;
  if ((bVar13) && (*(int *)(param_1 + 0xab4) != 0)) {
    (**(code **)(*(int *)(param_1 + 0xab4) + 0x1c))(param_1,uVar12);
  }
  if (((uVar12 & 0x20) != 0) &&
     ((*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0 || (DAT_00647794 == 2)))) {
    if ((iVar6 == 0 && iVar9 == 0) && (DAT_00647794 < 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00453280(param_1,param_2,param_3,param_4,param_5,uVar8);
  }
  uVar10 = *(uint *)(param_1 + 0x18);
  if ((uVar10 & 2) != 0) {
    if ((uVar12 & 1) == 0) {
      *(uint *)(param_1 + 0x18) = uVar10 | 0x10;
      (**(code **)(*(int *)(param_1 + 0xab0) + 8))(param_1,0xffffffff,0xffffffff);
    }
    else if (((uVar12 & 2) == 0) || ((uVar10 & 0x10) == 0)) {
      *(uint *)(param_1 + 0x18) = uVar10 & 0xffffffef | 0x80;
      if (*(int *)(param_1 + 0xab0) != 0) {
        (**(code **)(*(int *)(param_1 + 0xab0) + 8))
                  (param_1,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74));
      }
    }
  }
  if ((bVar4) &&
     (((*(uint *)(param_1 + 0x18) & 2) == 0 || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)))) {
    FUN_00452ea0(param_1);
  }
  if (!bVar3) {
    FUN_004530a0(param_1,0x400);
    return;
  }
  uVar12 = *(uint *)(param_1 + 0xb70);
  iVar6 = *(int *)(param_1 + 0xb74);
  uVar10 = *(uint *)(param_1 + 0xb78) + uVar12;
  iVar9 = *(int *)(param_1 + 0xb7c) + iVar6 + (uint)CARRY4(*(uint *)(param_1 + 0xb78),uVar12);
  RStack_10.left = uVar10;
  RStack_10.top = iVar9;
  if ((iVar6 <= iVar9) && ((iVar6 < iVar9 || (uVar12 < uVar10)))) {
    RStack_10.left = uVar12;
    RStack_10.top = iVar6;
  }
  if ((iVar9 <= iVar6) && ((iVar9 < iVar6 || (uVar10 < uVar12)))) {
    iVar9 = iVar6;
    uVar10 = uVar12;
  }
  iVar6 = *(int *)(param_1 + 0xb90);
  iVar2 = *(int *)(param_1 + 0xb94);
  if (iVar6 == 0 && iVar2 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    lVar14 = ftol();
    uVar5 = lVar14 + *(int *)(param_1 + 0xac0);
    uVar12 = (uint)uVar5;
    if ((uVar5 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar12))))
    {
      if (0x3fff < (longlong)uVar5) {
        uVar12 = 0x3fff;
      }
    }
    else {
      uVar12 = 0xffffc000;
    }
  }
  if (iVar6 == 0 && iVar2 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    RStack_10.left = uVar10 + 1;
    RStack_10.top = iVar9 + (uint)(0xfffffffe < uVar10);
    lVar14 = ftol();
    uVar5 = lVar14 + *(int *)(param_1 + 0xac0);
    uVar10 = (uint)uVar5;
    if ((uVar5 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar10))))
    {
      if (0x3fff < (longlong)uVar5) {
        uVar10 = 0x3fff;
      }
    }
    else {
      uVar10 = 0xffffc000;
    }
  }
  uVar11 = *(uint *)(param_1 + 0xac0);
  if ((int)*(uint *)(param_1 + 0xac0) < (int)uVar12) {
    uVar11 = uVar12;
  }
  if ((int)*(uint *)(param_1 + 0xac8) <= (int)uVar10) {
    uVar10 = *(uint *)(param_1 + 0xac8);
  }
  RStack_10.top = *(LONG *)(param_1 + 0xac4);
  RStack_10.bottom = *(LONG *)(param_1 + 0xacc);
  iVar6 = *(int *)(param_1 + 0xb84);
  RStack_10.left = *(uint *)(param_1 + 0xb80);
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  uVar12 = iVar6 + RStack_10.left;
  if (RStack_10.left == uVar11) {
    RStack_10.left = uVar10;
    if ((int)uVar12 <= (int)uVar10) {
      RStack_10.left = uVar12;
    }
  }
  else {
    if (uVar12 == uVar10) {
      uVar12 = uVar11;
      if ((int)uVar11 <= RStack_10.left) {
        uVar12 = RStack_10.left;
      }
      if ((int)uVar11 < RStack_10.left) {
        RStack_10.left = uVar11;
      }
      RStack_10.left = RStack_10.left - 1;
      goto LAB_00453921;
    }
    if ((int)uVar11 < RStack_10.left) {
      RStack_10.left = uVar11;
    }
  }
  RStack_10.left = RStack_10.left - 1;
  if ((int)uVar12 < (int)uVar10) {
    uVar12 = uVar10;
  }
LAB_00453921:
  RStack_10.right = uVar12 + 1;
  InvalidateRect(*(HWND *)(param_1 + 4),&RStack_10,0);
  FUN_004530a0(param_1,0x8404);
  DAT_0064767c = DAT_0064767c | 4;
  return;
}



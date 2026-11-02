/* Module: vidcap30.exe
   Function: FUN_0043d660
   Address: 0043d660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043d660(int param_1,RECT *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  RECT local_10;
  
  piVar2 = (int *)_SfGetUIFontSize_4(100);
  iVar1 = *piVar2;
  iVar9 = param_2->top + 4;
  iVar3 = GetSystemMetrics(0x2d);
  iVar3 = iVar3 / 2 + 4 + param_2->left;
  iVar4 = *(int *)(param_1 + 0x1644) + iVar3;
  iVar1 = iVar4 + -1 + iVar1 * 2;
  iVar8 = param_2->right;
  iVar6 = *(int *)(param_1 + 0x1648) + iVar1;
  iVar7 = (iVar6 - *(int *)(param_1 + 0xb0)) + 4;
  iVar5 = iVar8 + -3;
  if (iVar7 <= *(int *)(param_1 + 0x1788)) {
    iVar7 = *(int *)(param_1 + 0x1788);
  }
  *(int *)(param_1 + 200) = iVar7;
  if ((*(byte *)(param_1 + 0x1ae8) & 9) == 0) {
    local_10.bottom = iVar9 + *(int *)(param_1 + 0x1630);
    iVar10 = local_10.bottom + *(int *)(param_1 + 0x1640);
    local_10.left = iVar1;
    local_10.top = iVar9;
    local_10.right = iVar5;
    IntersectRect((LPRECT)(param_1 + 0x1520),&local_10,param_2);
    local_10.bottom = *(int *)(param_1 + 0x163c) + iVar10;
    local_10.left = iVar1 + 1;
    iVar8 = iVar8 + -4;
    iVar7 = iVar10 + *(int *)(param_1 + 0x1638) + *(int *)(param_1 + 0x1640);
    local_10.top = iVar10;
    local_10.right = iVar8;
    IntersectRect((LPRECT)(param_1 + 0x1530),&local_10,param_2);
    local_10.bottom = iVar7 + *(int *)(param_1 + 0x1630);
    iVar9 = local_10.bottom + *(int *)(param_1 + 0x1640);
    local_10.left = iVar1;
    local_10.top = iVar7;
    local_10.right = iVar5;
    IntersectRect((LPRECT)(param_1 + 0x1550),&local_10,param_2);
    local_10.bottom = *(int *)(param_1 + 0x163c) + iVar9;
    local_10.left = iVar1 + 1;
    iVar7 = *(int *)(param_1 + 0x1638);
    iVar5 = *(int *)(param_1 + 0x1640);
    local_10.top = iVar9;
    local_10.right = iVar8;
    IntersectRect((LPRECT)(param_1 + 0x1540),&local_10,param_2);
    local_10.top = iVar9 + iVar7 + iVar5 + 1;
    *(LONG *)(param_1 + 0x164c) = local_10.top;
    local_10.top = local_10.top + *(int *)(param_1 + 0x1640);
    local_10.bottom = local_10.top + *(int *)(param_1 + 0x1630);
    iVar8 = *(int *)(param_1 + 0x1640) + local_10.bottom;
    local_10.left = iVar1;
    local_10.right = iVar6;
    IntersectRect((LPRECT)(param_1 + 0x1560),&local_10,param_2);
    local_10.bottom = iVar8 + *(int *)(param_1 + 0x1630);
    iVar7 = local_10.bottom + *(int *)(param_1 + 0x1640);
    local_10.left = iVar1;
    local_10.top = iVar8;
    local_10.right = iVar6;
    IntersectRect((LPRECT)(param_1 + 0x1570),&local_10,param_2);
    local_10.bottom = iVar7 + *(int *)(param_1 + 0x1630);
    iVar8 = local_10.bottom + *(int *)(param_1 + 0x1640);
    local_10.left = iVar1;
    local_10.top = iVar7;
    local_10.right = iVar6;
    IntersectRect((LPRECT)(param_1 + 0x1580),&local_10,param_2);
    iVar8 = iVar8 + 1;
    *(int *)(param_1 + 0x1650) = iVar8;
    local_10.top = iVar8 + *(int *)(param_1 + 0x1640);
    local_10.bottom = *(int *)(param_1 + 0x1414) + local_10.top;
    local_10.right = *(int *)(param_1 + 0x1410) + iVar3;
    local_10.left = iVar3;
    IntersectRect((LPRECT)(param_1 + 0x1620),&local_10,param_2);
    FUN_0042fcc0(*(undefined4 *)(param_1 + 0x151c),param_1 + 0x1620);
    local_10.top = *(int *)(param_1 + 0x1524);
    local_10.bottom = local_10.top + *(int *)(param_1 + 0x1630);
    local_10.left = iVar3;
    local_10.right = iVar4;
    IntersectRect((LPRECT)(param_1 + 0x1590),&local_10,param_2);
    FUN_00460850(*(undefined4 *)(param_1 + 0x14f8),0x47,0,param_1 + 0x1590);
    local_10.top = *(int *)(param_1 + 0x1534);
    local_10.bottom = *(int *)(param_1 + 0x1638) + local_10.top;
    local_10.left = iVar3;
    local_10.right = iVar4;
    IntersectRect((LPRECT)(param_1 + 0x15a0),&local_10,param_2);
    FUN_00460850(*(undefined4 *)(param_1 + 0x14fc),0x47,0,param_1 + 0x15a0);
    local_10.top = *(int *)(param_1 + 0x1554);
    local_10.bottom = local_10.top + *(int *)(param_1 + 0x1630);
    local_10.left = iVar3;
    local_10.right = iVar4;
    IntersectRect((LPRECT)(param_1 + 0x15c0),&local_10,param_2);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1504),0x47,0,param_1 + 0x15c0);
    local_10.top = *(int *)(param_1 + 0x1544);
    local_10.bottom = *(int *)(param_1 + 0x1638) + local_10.top;
    local_10.left = iVar3;
    local_10.right = iVar4;
    IntersectRect((LPRECT)(param_1 + 0x15b0),&local_10,param_2);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1500),0x47,0,param_1 + 0x15b0);
    local_10.top = *(int *)(param_1 + 0x1564);
    local_10.bottom = local_10.top + *(int *)(param_1 + 0x1630);
    local_10.left = iVar3;
    local_10.right = iVar4;
    IntersectRect((LPRECT)(param_1 + 0x15d0),&local_10,param_2);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1508),0x47,0,param_1 + 0x15d0);
    local_10.top = *(int *)(param_1 + 0x1574);
    local_10.bottom = local_10.top + *(int *)(param_1 + 0x1630);
    local_10.left = iVar3;
    local_10.right = iVar4;
    IntersectRect((LPRECT)(param_1 + 0x15e0),&local_10,param_2);
    FUN_00460850(*(undefined4 *)(param_1 + 0x150c),0x47,0,param_1 + 0x15e0);
    local_10.top = *(int *)(param_1 + 0x1584);
    local_10.bottom = local_10.top + *(int *)(param_1 + 0x1630);
    local_10.left = iVar3;
    local_10.right = iVar4;
    IntersectRect((LPRECT)(param_1 + 0x15f0),&local_10,param_2);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1510),0x47,0,(LPRECT)(param_1 + 0x15f0));
    local_10.top = *(int *)(param_1 + 0x165c) + *(int *)(param_1 + 0x1564);
    local_10.bottom = *(int *)(param_1 + 0x1658) + local_10.top;
    local_10.left = *(int *)(param_1 + 0x1568) + 4;
    local_10.right = *(int *)(param_1 + 0x1654) + local_10.left;
    IntersectRect((LPRECT)(param_1 + 0x1600),&local_10,param_2);
    FUN_0042fcc0(*(undefined4 *)(param_1 + 0x1514),(LPRECT)(param_1 + 0x1600));
    local_10.top = *(int *)(param_1 + 0x1574) + *(int *)(param_1 + 0x165c);
    local_10.bottom = *(int *)(param_1 + 0x1658) + local_10.top;
    local_10.left = *(int *)(param_1 + 0x1578) + 4;
    local_10.right = *(int *)(param_1 + 0x1654) + local_10.left;
    IntersectRect((LPRECT)(param_1 + 0x1610),&local_10,param_2);
    FUN_0042fcc0(*(undefined4 *)(param_1 + 0x1518),(LPRECT)(param_1 + 0x1610));
    return;
  }
  local_10.top = param_2->top;
  local_10.bottom = *(int *)(param_1 + 0x178c) + local_10.top;
  local_10.right = param_2->right;
  local_10.left = local_10.right - *(int *)(param_1 + 0x1788);
  IntersectRect((LPRECT)(param_1 + 0x1768),&local_10,param_2);
  local_10.top = *(LONG *)(param_1 + 0x1774);
  local_10.bottom = GetSystemMetrics(0x2e);
  local_10.bottom = local_10.bottom + param_2->bottom;
  local_10.left = GetSystemMetrics(0x2d);
  local_10.right = param_2->right;
  local_10.left = local_10.left + param_2->left;
  IntersectRect((LPRECT)(param_1 + 0x1778),&local_10,param_2);
  return;
}



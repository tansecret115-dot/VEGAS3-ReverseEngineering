/* Module: vidcap30.exe
   Function: FUN_0043df70
   Address: 0043df70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043df70(int param_1,RECT *param_2)

{
  LPRECT ptVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_38 [2];
  RECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  FUN_0042ffb0(*(undefined4 *)(param_1 + 0x13c4),local_38);
  local_30.left = param_2->left;
  local_30.top = param_2->top;
  local_30.right = param_2->right;
  local_30.bottom = param_2->bottom;
  iVar2 = GetSystemMetrics(0x2e);
  local_30.right = local_30.right + -4;
  local_30.left = local_30.left + 4;
  local_30.top = local_30.top + iVar2 + 4;
  local_30.bottom = local_30.bottom + -4;
  iVar2 = local_30.bottom - *(int *)(param_1 + 0x140c);
  if (local_30.top < iVar2) {
    local_30.top = iVar2;
  }
  IntersectRect(&local_20,&local_30,param_2);
  local_30.left = param_2->left;
  local_30.top = param_2->top;
  local_30.right = param_2->right;
  local_30.bottom = param_2->bottom;
  iVar2 = GetSystemMetrics(0x2e);
  local_30.left = local_30.left + 4;
  local_30.top = local_30.top + iVar2 + 4;
  local_30.right = local_30.right + -4;
  local_30.bottom = local_20.top + -4;
  IntersectRect(&local_10,&local_30,param_2);
  local_30.top = local_10.top;
  uVar3 = (local_20.bottom - local_10.top) / 3;
  uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
  local_30.bottom = local_10.top + uVar3;
  local_30.right = local_20.right;
  local_30.left = local_20.right - *(int *)(param_1 + 0x13e8);
  ptVar1 = (LPRECT)(param_1 + 0x142c);
  IntersectRect(ptVar1,&local_30,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13e4),0x47,0,ptVar1);
  local_30.top = *(LONG *)(param_1 + 0x1430);
  local_30.bottom = *(LONG *)(param_1 + 0x1438);
  local_30.right = ptVar1->left + -4;
  local_30.left = local_30.right - *(int *)(param_1 + 0x1400);
  IntersectRect((LPRECT)(param_1 + 0x145c),&local_30,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d8),0x47,0,param_1 + 0x145c);
  if ((*(int *)(param_1 + 0x1434) - ptVar1->left < *(int *)(param_1 + 0x13e8)) ||
     (*(int *)(param_1 + 0x1438) - *(int *)(param_1 + 0x1430) < *(int *)(param_1 + 0x13ec))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FUN_00460850(*(undefined4 *)(param_1 + 0x13e4),0x18,uVar4,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d8),0x18,uVar4,0);
  ptVar1 = (LPRECT)(param_1 + 0x144c);
  local_30.top = local_10.top + uVar3;
  local_30.bottom = uVar3 + local_30.top;
  local_30.right = local_10.right;
  local_30.left = local_10.right - *(int *)(param_1 + 0x13e8);
  IntersectRect(ptVar1,&local_30,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13e0),0x47,0,ptVar1);
  local_30.top = *(LONG *)(param_1 + 0x1450);
  local_30.bottom = *(LONG *)(param_1 + 0x1458);
  local_30.right = ptVar1->left + -4;
  local_30.left = local_30.right - *(int *)(param_1 + 0x1400);
  IntersectRect((LPRECT)(param_1 + 0x147c),&local_30,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),0x47,0,param_1 + 0x147c);
  if ((*(int *)(param_1 + 0x1454) - ptVar1->left < *(int *)(param_1 + 0x13e8)) ||
     (*(int *)(param_1 + 0x1458) - *(int *)(param_1 + 0x1450) < *(int *)(param_1 + 0x13ec))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FUN_00460850(*(undefined4 *)(param_1 + 0x13e0),0x18,uVar4,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),0x18,uVar4,0);
  ptVar1 = (LPRECT)(param_1 + 0x143c);
  local_30.top = local_10.top + uVar3 * 2;
  local_30.bottom = uVar3 + local_30.top;
  local_30.right = local_20.right;
  local_30.left = local_20.right - *(int *)(param_1 + 0x13e8);
  IntersectRect(ptVar1,&local_30,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13dc),0x47,0,ptVar1);
  local_30.top = *(LONG *)(param_1 + 0x1440);
  local_30.bottom = *(LONG *)(param_1 + 0x1448);
  local_30.right = ptVar1->left + -4;
  local_30.left = local_30.right - *(int *)(param_1 + 0x1400);
  IntersectRect((LPRECT)(param_1 + 0x146c),&local_30,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),0x47,0,param_1 + 0x146c);
  if ((*(int *)(param_1 + 0x1444) - ptVar1->left < *(int *)(param_1 + 0x13e8)) ||
     (*(int *)(param_1 + 0x1448) - *(int *)(param_1 + 0x1440) < *(int *)(param_1 + 0x13ec))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FUN_00460850(*(undefined4 *)(param_1 + 0x13dc),0x18,uVar4,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),0x18,uVar4,0);
  local_20.right = GetSystemMetrics(0x2d);
  local_20.right = *(int *)(param_1 + 0x146c) - local_20.right;
  local_30.top = *(int *)(param_1 + 0x1420) + local_20.top;
  *(LONG *)(param_1 + 0x1418) = local_20.right + -4;
  local_30.bottom = local_20.bottom;
  local_20.right = local_20.right + -8;
  local_30.left = local_20.left;
  iVar2 = local_20.right - *(int *)(param_1 + 0x13f0);
  local_30.right = *(int *)(param_1 + 0x1408) + 8 + local_20.left;
  if (iVar2 <= local_30.right) {
    local_30.right = iVar2;
  }
  local_10.right = local_20.right;
  IntersectRect((LPRECT)(param_1 + 0x148c),&local_30,param_2);
  FUN_0042fcc0(*(undefined4 *)(param_1 + 0x13c0),(LPRECT)(param_1 + 0x148c));
  local_30.top = *(int *)(param_1 + 0x1424) + local_20.top;
  local_30.bottom = *(int *)(param_1 + 0x13f4) + local_30.top;
  local_30.left = *(int *)(param_1 + 0x1494);
  local_30.right = local_30.left + *(int *)(param_1 + 0x13f0);
  if (local_20.right <= local_30.right) {
    local_30.right = local_20.right;
  }
  ptVar1 = (LPRECT)(param_1 + 0x14ac);
  IntersectRect(ptVar1,&local_30,param_2);
  _TrackbarInst_Move_8(*(undefined4 *)(param_1 + 0x13c8),ptVar1);
  FUN_00431c30(*(undefined4 *)(DAT_005ba4c0 + 0x98),*(undefined4 *)(param_1 + 8),ptVar1,0x1fb,
               0xffffffff);
  local_30.top = *(int *)(param_1 + 0x1420) + local_10.top;
  local_30.left = local_10.left;
  local_30.right = local_10.left + local_38[0];
  local_30.bottom = local_10.bottom;
  if (local_10.right <= local_30.right) {
    local_30.right = local_10.right;
  }
  IntersectRect((LPRECT)(param_1 + 0x149c),&local_30,param_2);
  FUN_0042fcc0(*(undefined4 *)(param_1 + 0x13c4),(LPRECT)(param_1 + 0x149c));
  return;
}



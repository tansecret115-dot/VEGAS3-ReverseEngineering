/* Module: sfpagepeel.dll
   Function: FUN_00419380
   Address: 00419380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419380(HWND param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  SHORT SVar3;
  LONG LVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  int local_34;
  double local_30;
  double local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [4];
  
  bVar1 = false;
  LVar4 = GetWindowLongA(param_1,0);
  if (*(int *)(LVar4 + 0x13c) != 0) {
    if (param_2 != 0x1b) {
      return;
    }
    *(undefined4 *)(LVar4 + 0x13c) = 0;
    *(undefined4 *)(LVar4 + 0x158) = *(undefined4 *)(LVar4 + 0x168);
    *(undefined4 *)(LVar4 + 0x15c) = *(undefined4 *)(LVar4 + 0x16c);
    *(undefined4 *)(LVar4 + 0x160) = *(undefined4 *)(LVar4 + 0x170);
    *(undefined4 *)(LVar4 + 0x164) = *(undefined4 *)(LVar4 + 0x174);
    FUN_00418a00(*(HWND *)(LVar4 + 8));
    return;
  }
  param_1 = (HWND)0x0;
  local_34 = 0;
  switch(param_2) {
  case 9:
    iVar6 = 1;
    SVar3 = GetKeyState(0x10);
    FUN_00419220(LVar4,*(int *)(LVar4 + 0x140),(uint)(SVar3 < 0),iVar6);
    break;
  case 0x20:
    if (*(int *)(LVar4 + 0x140) == 1) {
      iVar6 = FUN_00414f20(LVar4);
      FUN_00414ef0(LVar4,(uint)(iVar6 == 0));
      FUN_00415530(LVar4);
    }
    else {
      if (*(int *)(LVar4 + 0x140) != 7) break;
      FUN_00414f30((undefined4 *)(LVar4 + 0x1fc),LVar4,0);
      FUN_00415530(LVar4);
      *(undefined4 *)(LVar4 + 0x140) = 8;
      *(undefined4 *)(LVar4 + 0x1f8) = 0;
      *(undefined4 *)(LVar4 + 0x13c) = 0;
      pHVar7 = *(HWND *)(LVar4 + 8);
      uVar5 = GetDlgCtrlID(pHVar7);
      PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar7);
    }
    FUN_00418a00(*(HWND *)(LVar4 + 8));
    break;
  case 0x25:
    param_1 = (HWND)0xffffffff;
    bVar1 = true;
    break;
  case 0x26:
    bVar1 = true;
    local_34 = 1;
    break;
  case 0x27:
    bVar1 = true;
    param_1 = (HWND)0x1;
    break;
  case 0x28:
    local_34 = -1;
    bVar1 = true;
  }
  iVar6 = FUN_00415410(LVar4,&local_20);
  if ((iVar6 == 0) || (!bVar1)) {
    return;
  }
  switch(*(undefined4 *)(LVar4 + 0x140)) {
  case 3:
    local_20 = (float)(int)param_1 * _DAT_00475088 + local_20;
    FUN_00415030(LVar4,&local_20);
    FUN_00415530(LVar4);
    FUN_00416070(LVar4);
    pHVar7 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar7);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar7);
    FUN_00418a00(*(HWND *)(LVar4 + 8));
    return;
  case 4:
    local_1c = (float)(int)param_1 * _DAT_00475088 + local_1c;
    FUN_00415030(LVar4,&local_20);
    FUN_00415530(LVar4);
    FUN_00416070(LVar4);
    pHVar7 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar7);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar7);
    FUN_00418a00(*(HWND *)(LVar4 + 8));
    return;
  case 5:
    local_18 = (float)(int)param_1 * _DAT_00475088 + local_18;
    FUN_00415030(LVar4,&local_20);
    break;
  case 6:
    local_14 = (float)local_34 * _DAT_00475088 + local_14;
    FUN_00415030(LVar4,&local_20);
    FUN_00415530(LVar4);
    FUN_00416070(LVar4);
    pHVar7 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar7);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar7);
    FUN_00418a00(*(HWND *)(LVar4 + 8));
    return;
  default:
    goto switchD_004194e2_caseD_7;
  case 8:
    FUN_004152c0(local_10,LVar4,0);
    FUN_00414c20(&local_30,local_10);
    bVar1 = _DAT_00474ea0 == local_30;
    local_30 = (double)((float)(int)param_1 * _DAT_00475088 + (float)local_30);
    fVar2 = (float)local_28 - (float)local_34 * _DAT_00475088;
    local_28 = (double)fVar2;
    if (bVar1) {
      local_30 = -1.0;
    }
    else if (_DAT_0046fdc8 <= local_30) {
      if (_DAT_0046fdc0 < local_30) {
        local_30 = local_30 - _DAT_0046fdc0;
      }
    }
    else {
      local_30 = local_30 + _DAT_0046fdc0;
    }
    if ((float)_DAT_0046fdc8 <= fVar2) {
      if ((float)_DAT_0046fdc0 < fVar2) {
        local_28 = 1.0;
      }
    }
    else {
      local_28 = 0.0;
    }
    FUN_00415ee0(local_10,&local_30);
    FUN_00414f30(local_10,LVar4,0);
  }
  FUN_00415530(LVar4);
  FUN_00416070(LVar4);
  pHVar7 = *(HWND *)(LVar4 + 8);
  uVar5 = GetDlgCtrlID(pHVar7);
  PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar7);
switchD_004194e2_caseD_7:
  FUN_00418a00(*(HWND *)(LVar4 + 8));
  return;
}



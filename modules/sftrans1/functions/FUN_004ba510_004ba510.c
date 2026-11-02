/* Module: sftrans1.dll
   Function: FUN_004ba510
   Address: 004ba510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba510(HWND param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  SHORT SVar3;
  LONG LVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  HWND pHVar8;
  int local_34;
  double local_30;
  double local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
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
    FUN_004b9b90(*(undefined4 *)(LVar4 + 8));
    return;
  }
  param_1 = (HWND)0x0;
  local_34 = 0;
  switch(param_2) {
  case 9:
    uVar7 = 1;
    SVar3 = GetKeyState(0x10);
    FUN_004ba3b0(LVar4,*(undefined4 *)(LVar4 + 0x140),SVar3 < 0,uVar7);
    break;
  case 0x20:
    if (*(int *)(LVar4 + 0x140) == 1) {
      iVar6 = FUN_004b60b0(LVar4);
      FUN_004b6080(LVar4,iVar6 == 0);
      FUN_004b66c0(LVar4);
    }
    else {
      if (*(int *)(LVar4 + 0x140) != 7) break;
      FUN_004b60c0(LVar4 + 0x1fc,LVar4,0);
      FUN_004b66c0(LVar4);
      *(undefined4 *)(LVar4 + 0x140) = 8;
      *(undefined4 *)(LVar4 + 0x1f8) = 0;
      *(undefined4 *)(LVar4 + 0x13c) = 0;
      pHVar8 = *(HWND *)(LVar4 + 8);
      uVar5 = GetDlgCtrlID(pHVar8);
      PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    }
    FUN_004b9b90(*(undefined4 *)(LVar4 + 8));
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
  iVar6 = FUN_004b65a0(LVar4,&local_20);
  if ((iVar6 == 0) || (!bVar1)) {
    return;
  }
  switch(*(undefined4 *)(LVar4 + 0x140)) {
  case 3:
    local_20 = (float)(int)param_1 * _DAT_00566ab8 + local_20;
    FUN_004b61c0(LVar4,&local_20);
    FUN_004b66c0(LVar4);
    FUN_004b7200(LVar4);
    pHVar8 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar8);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    FUN_004b9b90(*(undefined4 *)(LVar4 + 8));
    return;
  case 4:
    local_1c = (float)(int)param_1 * _DAT_00566ab8 + local_1c;
    FUN_004b61c0(LVar4,&local_20);
    FUN_004b66c0(LVar4);
    FUN_004b7200(LVar4);
    pHVar8 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar8);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    FUN_004b9b90(*(undefined4 *)(LVar4 + 8));
    return;
  case 5:
    local_18 = (float)(int)param_1 * _DAT_00566ab8 + local_18;
    FUN_004b61c0(LVar4,&local_20);
    break;
  case 6:
    local_14 = (float)local_34 * _DAT_00566ab8 + local_14;
    FUN_004b61c0(LVar4,&local_20);
    FUN_004b66c0(LVar4);
    FUN_004b7200(LVar4);
    pHVar8 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar8);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    FUN_004b9b90(*(undefined4 *)(LVar4 + 8));
    return;
  default:
    goto switchD_004ba672_caseD_7;
  case 8:
    FUN_004b6450(local_10,LVar4,0);
    FUN_004b5db0(&local_30,local_10);
    bVar1 = _DAT_00557828 == local_30;
    local_30 = (double)((float)(int)param_1 * _DAT_00566ab8 + (float)local_30);
    fVar2 = (float)local_28 - (float)local_34 * _DAT_00566ab8;
    local_28 = (double)fVar2;
    if (bVar1) {
      local_30 = -1.0;
    }
    else if (_DAT_00555910 <= local_30) {
      if (_DAT_00555908 < local_30) {
        local_30 = local_30 - _DAT_00555908;
      }
    }
    else {
      local_30 = local_30 + _DAT_00555908;
    }
    if ((float)_DAT_00555910 <= fVar2) {
      if ((float)_DAT_00555908 < fVar2) {
        local_28 = 1.0;
      }
    }
    else {
      local_28 = 0.0;
    }
    FUN_004b7070(local_10,&local_30);
    FUN_004b60c0(local_10,LVar4,0);
  }
  FUN_004b66c0(LVar4);
  FUN_004b7200(LVar4);
  pHVar8 = *(HWND *)(LVar4 + 8);
  uVar5 = GetDlgCtrlID(pHVar8);
  PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
switchD_004ba672_caseD_7:
  FUN_004b9b90(*(undefined4 *)(LVar4 + 8));
  return;
}



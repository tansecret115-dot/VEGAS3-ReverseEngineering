/* Module: vidcap30.exe
   Function: FUN_00504670
   Address: 00504670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00504670(HWND param_1,int param_2)

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
    FUN_00503cf0(*(undefined4 *)(LVar4 + 8));
    return;
  }
  param_1 = (HWND)0x0;
  local_34 = 0;
  switch(param_2) {
  case 9:
    uVar7 = 1;
    SVar3 = GetKeyState(0x10);
    FUN_00504510(LVar4,*(undefined4 *)(LVar4 + 0x140),SVar3 < 0,uVar7);
    break;
  case 0x20:
    if (*(int *)(LVar4 + 0x140) == 1) {
      iVar6 = FUN_00500210(LVar4);
      FUN_005001e0(LVar4,iVar6 == 0);
      FUN_00500820(LVar4);
    }
    else {
      if (*(int *)(LVar4 + 0x140) != 7) break;
      FUN_00500220(LVar4 + 0x1fc,LVar4,0);
      FUN_00500820(LVar4);
      *(undefined4 *)(LVar4 + 0x140) = 8;
      *(undefined4 *)(LVar4 + 0x1f8) = 0;
      *(undefined4 *)(LVar4 + 0x13c) = 0;
      pHVar8 = *(HWND *)(LVar4 + 8);
      uVar5 = GetDlgCtrlID(pHVar8);
      PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    }
    FUN_00503cf0(*(undefined4 *)(LVar4 + 8));
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
  iVar6 = FUN_00500700(LVar4,&local_20);
  if ((iVar6 == 0) || (!bVar1)) {
    return;
  }
  switch(*(undefined4 *)(LVar4 + 0x140)) {
  case 3:
    local_20 = (float)(int)param_1 * _DAT_0059b9bc + local_20;
    FUN_00500320(LVar4,&local_20);
    FUN_00500820(LVar4);
    FUN_00501360(LVar4);
    pHVar8 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar8);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    FUN_00503cf0(*(undefined4 *)(LVar4 + 8));
    return;
  case 4:
    local_1c = (float)(int)param_1 * _DAT_0059b9bc + local_1c;
    FUN_00500320(LVar4,&local_20);
    FUN_00500820(LVar4);
    FUN_00501360(LVar4);
    pHVar8 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar8);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    FUN_00503cf0(*(undefined4 *)(LVar4 + 8));
    return;
  case 5:
    local_18 = (float)(int)param_1 * _DAT_0059b9bc + local_18;
    FUN_00500320(LVar4,&local_20);
    break;
  case 6:
    local_14 = (float)local_34 * _DAT_0059b9bc + local_14;
    FUN_00500320(LVar4,&local_20);
    FUN_00500820(LVar4);
    FUN_00501360(LVar4);
    pHVar8 = *(HWND *)(LVar4 + 8);
    uVar5 = GetDlgCtrlID(pHVar8);
    PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
    FUN_00503cf0(*(undefined4 *)(LVar4 + 8));
    return;
  default:
    goto switchD_005047d2_caseD_7;
  case 8:
    FUN_005005b0(local_10,LVar4,0);
    FUN_004fff10(&local_30,local_10);
    bVar1 = _DAT_0059a188 == local_30;
    local_30 = (double)((float)(int)param_1 * _DAT_0059b9bc + (float)local_30);
    fVar2 = (float)local_28 - (float)local_34 * _DAT_0059b9bc;
    local_28 = (double)fVar2;
    if (bVar1) {
      local_30 = -1.0;
    }
    else if (_DAT_00589f10 <= local_30) {
      if (_DAT_00587ad0 < local_30) {
        local_30 = local_30 - _DAT_00587ad0;
      }
    }
    else {
      local_30 = local_30 + _DAT_00587ad0;
    }
    if ((float)_DAT_00589f10 <= fVar2) {
      if ((float)_DAT_00587ad0 < fVar2) {
        local_28 = 1.0;
      }
    }
    else {
      local_28 = 0.0;
    }
    FUN_005011d0(local_10,&local_30);
    FUN_00500220(local_10,LVar4,0);
  }
  FUN_00500820(LVar4);
  FUN_00501360(LVar4);
  pHVar8 = *(HWND *)(LVar4 + 8);
  uVar5 = GetDlgCtrlID(pHVar8);
  PostMessageA(*(HWND *)(LVar4 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)pHVar8);
switchD_005047d2_caseD_7:
  FUN_00503cf0(*(undefined4 *)(LVar4 + 8));
  return;
}



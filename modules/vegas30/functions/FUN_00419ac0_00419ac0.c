/* Module: vegas30.exe
   Function: FUN_00419ac0
   Address: 00419ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419ac0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  SHORT SVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  HDWP pvVar7;
  int iVar8;
  uint cy;
  int iVar9;
  bool bVar10;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar2 = param_1;
  piVar4 = (int *)(param_1 + 0x1f0);
  bVar10 = ((byte)*(undefined4 *)(param_1 + 0xc) & 3) != 3;
  piVar1 = (int *)(param_1 + 0x1e8);
  iVar9 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
  local_24 = 0;
  param_1 = 0;
  cy = *piVar4 - *piVar1;
  local_20.left = iVar9;
  piVar4 = (int *)_SfGetUIFontSize_4(100);
  if (*(int *)(iVar2 + 0x8c) == 5) {
    local_2c = ((int)(*piVar4 * 0x32 + (*piVar4 * 0x32 >> 0x1f & 3U)) >> 2) + 3;
  }
  else {
    local_2c = 0;
  }
  if (*(int *)(iVar2 + 0x220) != 0) {
    iVar8 = *(int *)(iVar2 + 0x224);
    *(undefined4 *)(iVar2 + 0x228) = 0;
    *(undefined4 *)(iVar2 + 0x22c) = 0;
    if (iVar8 != 0) {
      piVar4 = (int *)(*(int *)(iVar2 + 0x220) + 0xc);
      do {
        iVar5 = *(int *)(iVar2 + 0x228);
        if (*(int *)(iVar2 + 0x228) <= piVar4[-1]) {
          iVar5 = piVar4[-1];
        }
        *(int *)(iVar2 + 0x228) = iVar5;
        iVar5 = *(int *)(iVar2 + 0x22c);
        if (*(int *)(iVar2 + 0x22c) <= *piVar4) {
          iVar5 = *piVar4;
        }
        piVar4 = piVar4 + 0x11;
        iVar8 = iVar8 + -1;
        *(int *)(iVar2 + 0x22c) = iVar5;
      } while (iVar8 != 0);
    }
    if (1 < *(uint *)(iVar2 + 0x224)) {
      param_1 = *(int *)(iVar2 + 0x24c);
    }
    if (bVar10) {
      iVar9 = *(int *)(iVar2 + 0x228);
      cy = *(uint *)(iVar2 + 0x22c);
      local_20.left = iVar9;
    }
    else {
      iVar8 = param_1;
      if (param_1 < 1) {
        iVar8 = 2;
      }
      iVar5 = *(int *)(iVar2 + 0x228);
      if (iVar5 <= iVar9) {
        iVar9 = iVar5;
        local_20.left = iVar5;
      }
      uVar6 = cy - iVar8;
      cy = *(uint *)(iVar2 + 0x22c);
      if ((int)(((int)uVar6 < 0) - 1 & uVar6) < (int)cy) {
        cy = ((int)uVar6 < 0) - 1 & uVar6;
      }
    }
    iVar8 = FUN_00422820(iVar2);
    SetWindowPos(*(HWND *)(iVar2 + 0x238),*(HWND *)(iVar2 + 0x250),*(int *)(iVar2 + 0x1e4),
                 *(int *)(iVar2 + 0x1e8),iVar9,cy,(-(uint)(iVar8 != 0) & 0x40) + 0x40 | 0x10);
    iVar8 = FUN_00422820(iVar2);
    if ((iVar8 == 0) && (1 < *(uint *)(iVar2 + 0x224))) {
      local_24 = 8;
    }
  }
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x1e4) + 7 + iVar9;
  *(uint *)(iVar2 + 0x278) = *(int *)(iVar2 + 0x1e8) + 2 + cy;
  local_10.left = *(int *)(iVar2 + 0x26c);
  local_10.top = *(int *)(iVar2 + 0x270);
  local_10.right = *(int *)(iVar2 + 0x274);
  local_10.bottom = *(int *)(iVar2 + 0x278);
  iVar8 = *(int *)(iVar2 + 0x2d0) - *(int *)(iVar2 + 0x2c8);
  InflateRect(&local_10,-7,-7);
  iVar9 = *(int *)(iVar2 + 0x228) - iVar8;
  local_10.top = local_10.top + 2;
  if (local_10.right - local_10.left < iVar9) {
    iVar9 = local_10.right - local_10.left;
  }
  local_10.left = iVar8 + local_10.left;
  if (local_10.right <= local_10.left) {
    local_10.left = local_10.right;
  }
  if (iVar9 + local_10.left <= local_10.right) {
    local_10.right = iVar9 + local_10.left;
  }
  InvalidateRect(*(HWND *)(iVar2 + 0x1c8),(RECT *)0x0,0);
  pvVar7 = BeginDeferWindowPos(3);
  pvVar7 = (HDWP)FUN_00417e50(pvVar7,iVar2,0x14,&local_10);
  EndDeferWindowPos(pvVar7);
  if (bVar10) {
    iVar9 = param_1;
    if (param_1 < 1) {
      iVar9 = 2;
    }
    local_2c = *(int *)(iVar2 + 0x1e4) + local_2c + 9 + local_20.left;
    local_28 = *(int *)(iVar2 + 0x1e8) + iVar9 + cy;
    if (local_2c <= *(int *)(iVar2 + 0x1dc)) {
      local_2c = *(int *)(iVar2 + 0x1dc);
    }
    if (local_28 <= *(int *)(iVar2 + 0x1e0)) {
      local_28 = *(int *)(iVar2 + 0x1e0);
    }
    if (((((*(byte *)(iVar2 + 0xc) & 8) == 0) || (*(int *)(iVar2 + 0x8c) == 5)) &&
        (SVar3 = GetKeyState(0x10), -1 < SVar3)) && (param_2 == 0)) {
      GetClientRect(*(HWND *)(iVar2 + 8),&local_20);
      if (local_2c <= local_20.right - local_20.left) {
        local_2c = local_20.right - local_20.left;
      }
      if (local_28 <= local_20.bottom - local_20.top) {
        local_28 = local_20.bottom - local_20.top;
      }
    }
    FUN_00416750(iVar2,&local_2c,0);
    GetWindowRect(*(HWND *)(iVar2 + 8),&local_10);
    FUN_004180f0(iVar2,&local_10);
    SetWindowPos(*(HWND *)(iVar2 + 8),(HWND)0x0,local_10.left,local_10.top,
                 local_10.right - local_10.left,local_10.bottom - local_10.top,0x14);
  }
  iVar9 = *(int *)(iVar2 + 0x26c);
  local_10.top = *(LONG *)(iVar2 + 0x270);
  SetWindowPos(*(HWND *)(iVar2 + 0x250),(HWND)0x0,iVar9,*(int *)(iVar2 + 0x278) + -2,
               (*(int *)(iVar2 + 0x274) + -2) - iVar9,param_1,0x14);
  ShowWindow(*(HWND *)(iVar2 + 0x250),local_24);
  return;
}



/* Module: vegas30.exe
   Function: FUN_0051e450
   Address: 0051e450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051e450(int param_1,int param_2)

{
  uint uVar1;
  LONG LVar2;
  LONG LVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  HDWP hWinPosInfo;
  int iVar10;
  HWND hWndInsertAfter;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  tagRECT local_e0;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  LONG local_b4;
  int local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  tagRECT local_94;
  undefined1 local_84 [4];
  int local_80;
  int local_7c [2];
  int local_74;
  tagRECT local_6c;
  undefined1 local_5c [64];
  undefined1 local_1c [28];
  
  puVar14 = local_84;
  uVar4 = _SfGetUIFont_4(100);
  _SfGetFontSize_8(uVar4,puVar14);
  iVar5 = GetSystemMetrics(0x2e);
  iVar6 = GetSystemMetrics(0x2d);
  *(int *)(param_1 + 0x290) = iVar5 + iVar6;
  iVar5 = local_80;
  if (local_80 < 0x19) {
    iVar5 = 0x18;
  }
  GetClientRect(*(HWND *)(param_1 + 8),&local_e0);
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) == 3) || ((*(uint *)(param_1 + 0xc) & 0x80) != 0)) {
    *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
    InflateRect(&local_e0,0,-3);
  }
  else {
    *(LONG *)(param_1 + 0x1f0) = local_e0.right;
    *(LONG *)(param_1 + 500) = local_e0.bottom;
    iVar6 = GetSystemMetrics(3);
    local_e0.bottom = local_e0.bottom - iVar6;
    iVar6 = GetSystemMetrics(2);
    *(LONG *)(param_1 + 0x1e8) = local_e0.right - iVar6;
    *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 9;
    local_e0.left = local_e0.left + 3;
    local_e0.top = local_e0.top + 3;
    *(LONG *)(param_1 + 0x1ec) = local_e0.bottom;
    local_e0.right = local_e0.right + -3;
    InvalidateRect(*(HWND *)(param_1 + 0x1f8),(RECT *)0x0,1);
  }
  LVar3 = local_e0.top;
  LVar2 = local_e0.left;
  local_a4 = local_e0.right;
  local_a0 = local_e0.bottom;
  FUN_00412930(param_1,*(undefined4 *)(param_1 + 0x108),0,0,0,local_7c,0,0,0);
  local_b8 = local_74 - local_7c[0];
  SetWindowPos(*(HWND *)(param_1 + 0x210),(HWND)0x0,1000,1000,param_2,1000,8);
  local_d0 = 1000 - *(int *)(*(int *)(*(int *)(param_1 + 0x90) + 0x50) + 0x1c);
  if ((*(int *)(param_1 + 0x98) == 0) || ((*(uint *)(*(int *)(param_1 + 0x98) + 4) & 0x1000) == 0))
  {
    iVar6 = FUN_005382e0(1);
    local_d0 = local_d0 + 1 + iVar6;
  }
  else {
    local_bc = ftol();
    if (local_bc == 0) {
      iVar6 = FUN_005382e0(1);
      local_d0 = iVar6 * 3 + local_d0 + 1;
    }
    else {
      iVar6 = FUN_005382e0(1);
      if (local_bc < iVar6 + local_d0) {
        iVar6 = FUN_005382e0(1);
        iVar6 = local_d0 + iVar6;
      }
      else {
        local_d0 = (local_a0 + iVar5 * -2) - LVar3;
        iVar6 = local_bc;
        if (local_d0 < local_bc) goto LAB_0051e686;
      }
      local_d0 = iVar6;
    }
  }
LAB_0051e686:
  local_a0 = local_a0 - local_d0;
  *(LONG *)(param_1 + 0xd0) = LVar2 + 0x20;
  *(int *)(param_1 + 0xd4) = iVar5 + LVar3;
  local_cc = local_e0.left;
  local_c8 = local_e0.top;
  local_c4 = local_e0.right;
  local_c0 = local_e0.bottom;
  *(int *)(param_1 + 200) = LVar2;
  *(LONG *)(param_1 + 0xcc) = LVar3;
  uVar7 = FUN_0051e370((int *)(param_1 + 200),&local_e0,&local_cc,1,1);
  *(uint *)(param_1 + 0xc4) = (uVar7 ^ *(uint *)(param_1 + 0xc4)) & 1 ^ *(uint *)(param_1 + 0xc4);
  *(int *)(param_1 + 0xb0) = LVar2 + 0x23;
  *(LONG *)(param_1 + 0xb4) = LVar3 + 2;
  *(int *)(param_1 + 0xb8) = local_a4 + 0x23;
  *(int *)(param_1 + 0xbc) = local_80 + 5 + LVar3;
  local_cc = local_e0.left;
  local_c8 = local_e0.top;
  local_c4 = local_e0.right;
  local_c0 = local_e0.bottom;
  uVar7 = FUN_0051e370((int *)(param_1 + 0xb0),&local_e0,&local_cc,1,1);
  *(uint *)(param_1 + 0xac) = (uVar7 ^ *(uint *)(param_1 + 0xac)) & 1 ^ *(uint *)(param_1 + 0xac);
  local_b0 = local_80 + 7;
  SetWindowPos(*(HWND *)(param_1 + 0xf0),(HWND)0x0,1000,1000,1000,1000,8);
  GetWindowRect(*(HWND *)(param_1 + 0xf0),&local_6c);
  piVar12 = &local_9c;
  uVar13 = 0xffffffff;
  uVar4 = _SfGetString_8(DAT_00647204,0x697d);
  uVar8 = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(uVar8,uVar4,uVar13,piVar12);
  iVar6 = ((local_6c.bottom - local_98) - local_6c.top) / 2;
  *(int *)(param_1 + 0x110) = LVar2;
  *(int *)(param_1 + 0x114) = local_b0 + iVar6 + LVar3;
  *(int *)(param_1 + 0x118) = local_9c + LVar2;
  local_cc = local_e0.left;
  *(int *)(param_1 + 0x11c) = local_98 + iVar6 + local_b0 + LVar3;
  local_c4 = local_e0.right;
  local_c8 = local_e0.top;
  local_c0 = local_e0.bottom;
  uVar7 = FUN_0051e370((int *)(param_1 + 0x110),&local_e0,&local_cc,1,1);
  local_bc = local_9c + 3;
  *(uint *)(param_1 + 0x10c) = (uVar7 ^ *(uint *)(param_1 + 0x10c)) & 1 ^ *(uint *)(param_1 + 0x10c)
  ;
  piVar12 = (int *)(param_1 + 0xf8);
  local_94.left = (local_a4 + -3) - local_b8;
  *piVar12 = local_94.left;
  *(int *)(param_1 + 0xfc) = local_b0 + LVar3;
  local_b4 = local_b0 + LVar3 + iVar5;
  *(int *)(param_1 + 0x100) = local_a4 + -3;
  *(LONG *)(param_1 + 0x104) = local_b4;
  uVar7 = FUN_0051e370(piVar12,&local_e0,piVar12,local_b8,iVar5);
  *(uint *)(param_1 + 0xf4) = (uVar7 ^ *(uint *)(param_1 + 0xf4)) & 1 ^ *(uint *)(param_1 + 0xf4);
  *(int *)(param_1 + 0xe0) = LVar2 + local_bc;
  *(int *)(param_1 + 0xe4) = local_b0 + LVar3;
  *(LONG *)(param_1 + 0xe8) = local_94.left + -3;
  *(LONG *)(param_1 + 0xec) = local_b4;
  local_cc = local_e0.left;
  local_c8 = local_e0.top;
  local_c4 = local_e0.right;
  local_c0 = local_e0.bottom;
  uVar7 = FUN_0051e370((int *)(param_1 + 0xe0),&local_e0,&local_cc,0x19,1);
  *(uint *)(param_1 + 0xdc) = (uVar7 ^ *(uint *)(param_1 + 0xdc)) & 1 ^ *(uint *)(param_1 + 0xdc);
  *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  iVar10 = LVar3 + local_b0 + 3 + iVar5;
  *(LONG *)(param_1 + 0x148) = LVar2 + 0x1b;
  local_c0 = local_e0.bottom - local_d0;
  *(int *)(param_1 + 0x140) = LVar2;
  *(int *)(param_1 + 0x144) = iVar10;
  *(int *)(param_1 + 0x14c) = local_c0 + -3;
  local_cc = local_e0.left;
  local_c8 = local_e0.top + iVar5;
  local_c4 = local_e0.right;
  uVar7 = FUN_0051e370((int *)(param_1 + 0x140),&local_e0,&local_cc,1,iVar5);
  local_bc = 0x1b;
  *(uint *)(param_1 + 0x13c) = (uVar7 ^ *(uint *)(param_1 + 0x13c)) & 1 ^ *(uint *)(param_1 + 0x13c)
  ;
  iVar6 = 0;
  if (((*(byte *)(param_1 + 0xa8) & 1) == 0) ||
     ((*(byte *)(*(int *)(param_1 + 0x98) + 4) & 0x20) == 0)) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe | 4;
  }
  else {
    if (*(HWND *)(param_1 + 0x168) != (HWND)0x0) {
      GetWindowRect(*(HWND *)(param_1 + 0x168),&local_94);
      iVar6 = local_94.right - local_94.left;
    }
    *(int *)(param_1 + 0x158) = LVar2 + 0x1d;
    *(int *)(param_1 + 0x15c) = iVar10 + 2;
    *(LONG *)(param_1 + 0x160) = LVar2 + 0x1d + iVar6;
    local_c0 = local_e0.bottom - local_d0;
    *(int *)(param_1 + 0x164) = local_c0 + -5;
    local_cc = local_e0.left;
    local_c8 = local_e0.top + iVar5;
    local_c4 = local_e0.right;
    local_b4 = local_c0;
    uVar7 = FUN_0051e370((int *)(param_1 + 0x158),&local_e0,&local_cc,iVar6,0x14);
    uVar7 = (uVar7 ^ *(uint *)(param_1 + 0x154)) & 1 ^ *(uint *)(param_1 + 0x154);
    *(uint *)(param_1 + 0x154) = (~uVar7 & 1) << 2 | uVar7 & 0xfffffffb;
    if ((uVar7 & 1) == 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x98) + 4);
      *(uint *)(*(int *)(param_1 + 0x98) + 4) =
           ((int)(uVar7 << 0x1f) >> 0x1a ^ uVar1) & 0x20 ^ uVar1;
      FUN_0051df70(param_1);
      FUN_0051cef0(param_1);
    }
    else {
      local_bc = (*(int *)(param_1 + 0x160) - *(int *)(param_1 + 0x158)) + 0x1f;
    }
  }
  iVar6 = local_d0;
  *(int *)(param_1 + 0x174) = iVar10;
  *(int *)(param_1 + 0x178) = local_a4 + -3;
  *(int *)(param_1 + 0x170) = LVar2 + local_bc;
  local_c0 = local_e0.bottom - local_d0;
  *(int *)(param_1 + 0x17c) = local_c0 + -3;
  local_cc = local_e0.left;
  local_c8 = local_e0.top + iVar5;
  local_c4 = local_e0.right;
  uVar7 = FUN_0051e370((int *)(param_1 + 0x170),&local_e0,&local_cc,1,iVar5);
  *(uint *)(param_1 + 0x16c) = (uVar7 ^ *(uint *)(param_1 + 0x16c)) & 1 ^ *(uint *)(param_1 + 0x16c)
  ;
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    local_94.left = *(int *)(param_1 + 0x178) - *(int *)(param_1 + 0x170);
    iVar10 = *(int *)(param_1 + 0x98);
    local_94.top = *(int *)(param_1 + 0x17c) - *(int *)(param_1 + 0x174);
    if ((*(int *)(iVar10 + 0x14) == 0) && (*(int *)(iVar10 + 0x18) == 0)) {
      local_b4 = GetWindowLongA(*(HWND *)(param_1 + 0x180),-0x15);
      iVar10 = FUN_00522a00(0);
      FUN_005a62e0(local_5c,*(int *)(iVar10 + 8) + 0x18,*(int *)(param_1 + 0x98) + 0x24);
      FUN_005a6440(local_5c,local_5c,local_1c,0x3f8ccccd,0x3f8ccccd);
      FUN_00512a70(local_b4,0,local_5c,param_1 + 0x170);
      iVar10 = *(int *)(param_1 + 0x98);
      *(LONG *)(iVar10 + 0x14) = local_94.left;
      *(LONG *)(iVar10 + 0x18) = local_94.top;
    }
    else {
      FUN_0051e290(iVar10,&local_94);
    }
  }
  *(int *)(param_1 + 0x204) = local_a0;
  *(int *)(param_1 + 0x208) = local_a4;
  *(int *)(param_1 + 0x20c) = local_a0 + iVar6;
  local_c8 = local_e0.top + iVar5;
  local_cc = local_e0.left;
  local_c4 = local_e0.right;
  local_c0 = local_e0.bottom;
  *(int *)(param_1 + 0x200) = LVar2;
  uVar7 = FUN_0051e370((int *)(param_1 + 0x200),&local_e0,&local_cc,1,iVar5);
  iVar6 = 0x10;
  iVar5 = 0;
  *(uint *)(param_1 + 0x1fc) = (uVar7 ^ *(uint *)(param_1 + 0x1fc)) & 1 ^ *(uint *)(param_1 + 0x1fc)
  ;
  pbVar9 = (byte *)(param_1 + 0xac);
  do {
    if ((*(int *)(pbVar9 + 0x14) != 0) && ((*pbVar9 & 4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    pbVar9 = pbVar9 + 0x18;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  hWndInsertAfter = (HWND)0x0;
  hWinPosInfo = BeginDeferWindowPos(iVar5);
  piVar12 = (int *)(param_1 + 0xb4);
  local_b8 = 0x10;
  do {
    if ((piVar12[3] != 0) && ((piVar12[-2] & 4U) == 0)) {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,(HWND)piVar12[3],hWndInsertAfter,piVar12[-1],*piVar12
                                   ,piVar12[1] - piVar12[-1],piVar12[2] - *piVar12,
                                   (-(uint)((piVar12[-2] & 1U) != 0) & 0xffffffc0) + 0x80 | 0x10);
      hWndInsertAfter = (HWND)piVar12[3];
    }
    piVar12 = piVar12 + 6;
    local_b8 = local_b8 + -1;
  } while (local_b8 != 0);
  EndDeferWindowPos(hWinPosInfo);
  puVar11 = (undefined4 *)(param_1 + 0xc0);
  iVar5 = 0x10;
  do {
    if (((HWND)*puVar11 != (HWND)0x0) && ((*(byte *)(puVar11 + -5) & 4) == 0)) {
      InvalidateRect((HWND)*puVar11,(RECT *)0x0,0);
    }
    puVar11 = puVar11 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}



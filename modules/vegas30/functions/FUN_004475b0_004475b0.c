/* Module: vegas30.exe
   Function: FUN_004475b0
   Address: 004475b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004475b0(int param_1,HWND param_2,int param_3)

{
  LPRECT lprc;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  byte *pbVar8;
  HDWP hWinPosInfo;
  HWND hWndInsertAfter;
  int iVar9;
  SCROLLINFO *pSVar10;
  undefined4 uVar11;
  HWND *ppHVar12;
  undefined1 *puVar13;
  uint local_78;
  HWND local_70;
  int local_6c;
  int local_68;
  undefined1 local_64 [4];
  int local_60;
  tagRECT local_5c;
  tagRECT local_4c;
  int local_3c;
  int local_38;
  HWND local_34;
  int local_30;
  SCROLLINFO local_2c;
  undefined4 local_10;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x234) == 0) {
    return;
  }
  puVar13 = local_64;
  uVar1 = _SfGetUIFont_4(100);
  _SfGetFontSize_8(uVar1,puVar13);
  iVar2 = (int)(local_60 + (local_60 >> 0x1f & 3U)) >> 2;
  if (iVar2 < 6) {
    iVar2 = 6;
  }
  iVar9 = local_60 + iVar2;
  if (iVar9 < 0x1a) {
    iVar9 = 0x19;
  }
  local_68 = iVar2 + iVar9;
  GetSystemMetrics(2);
  GetSystemMetrics(3);
  if ((param_1 == 0) || (*(int *)(param_1 + 0xac) == 0)) {
switchD_00447635_caseD_2:
    local_78 = 0;
  }
  else {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      local_78 = ~*(uint *)(param_1 + 0x9c) >> 9 & 1;
      break;
    default:
      goto switchD_00447635_caseD_2;
    case 5:
    case 7:
    case 8:
      local_78 = 1;
    }
  }
  local_5c.right = (LONG)param_2;
  local_4c.right = (LONG)param_2;
  local_5c.left = 0;
  local_5c.top = 0;
  local_5c.bottom = param_3;
  local_4c.left = 0;
  local_4c.top = 0;
  local_4c.bottom = param_3;
  InflateRect(&local_4c,-3,-3);
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) == 3) || ((*(uint *)(param_1 + 0xc) & 0x80) != 0)) {
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfffffff6;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
    InflateRect(&local_5c,0,-5);
  }
  else {
    *(LONG *)(param_1 + 0x244) = local_5c.right;
    *(LONG *)(param_1 + 0x248) = local_5c.bottom;
    iVar3 = GetSystemMetrics(3);
    local_5c.bottom = local_5c.bottom - iVar3;
    iVar3 = GetSystemMetrics(2);
    *(LONG *)(param_1 + 0x23c) = local_5c.right - iVar3;
    *(LONG *)(param_1 + 0x240) = local_5c.bottom;
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 9;
    local_5c.left = local_5c.left + 5;
    local_4c.bottom = local_5c.bottom;
    local_5c.right = (int)&((HWND)(local_5c.right + -8))->unused + 3;
    local_5c.top = local_5c.top + 5;
    InvalidateRect(*(HWND *)(param_1 + 0x24c),(RECT *)0x0,1);
  }
  if ((((*(byte *)(param_1 + 0x9c) & 0x10) == 0) && (*(int *)(param_1 + 0xac) != 0)) &&
     ((iVar3 = *(int *)(param_1 + 0xa8), iVar3 == 1 ||
      ((((iVar3 == 2 || (iVar3 == 3)) || (iVar3 == 7)) || (iVar3 == 8)))))) {
    local_3c = local_4c.left;
    local_38 = local_4c.top;
    *(int *)(param_1 + 0xd4) = local_4c.left;
    *(LONG *)(param_1 + 0xdc) = local_4c.left + 0x20;
    *(LONG *)(param_1 + 0xd8) = local_4c.top;
    local_30 = local_4c.bottom;
    local_34 = (HWND)local_4c.right;
    *(LONG *)(param_1 + 0xe0) = local_4c.top + iVar9;
    uVar4 = FUN_004474d0((int *)(param_1 + 0xd4),&local_4c,&local_3c,0x10,iVar9 / 2);
    uVar4 = (*(uint *)(param_1 + 0xd0) ^ uVar4) & 1 ^ *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = uVar4;
    if ((uVar4 & 1) != 0) {
      local_4c.left = local_4c.left + 0x26;
    }
    if ((*(HWND *)(param_1 + 0x15c) != (HWND)0x0) &&
       (local_70 = (HWND)SendMessageA(*(HWND *)(param_1 + 0x15c),0x423,0,0), local_70 != (HWND)0x0))
    {
      pSVar10 = &local_2c;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        pSVar10->cbSize = 0;
        pSVar10 = (SCROLLINFO *)&pSVar10->fMask;
      }
      local_2c.nMin = *(int *)(param_1 + 8);
      local_2c.nPage = *(UINT *)(param_1 + 0xd4);
      local_2c.cbSize = 0x2c;
      local_2c.nMax = 0x41a;
      local_2c.nPos = *(int *)(param_1 + 0xd8);
      local_8 = 0xffffffff;
      local_2c.fMask = 0x10;
      local_2c.nTrackPos = *(int *)(param_1 + 0xdc);
      local_10 = *(undefined4 *)(param_1 + 0xe0);
      SendMessageA(local_70,0x406,0,(LPARAM)&local_2c);
      SendMessageA(local_70,0x401,1,0);
    }
  }
  else {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if ((local_78 == 0) || (*(int *)(param_1 + 0xa8) == 5)) {
    local_70 = (HWND)local_4c.right;
  }
  else {
    local_70 = (HWND)((int)&((HWND)(local_4c.right + -0x60))->unused + 3);
  }
  local_34 = (HWND)local_4c.right;
  *(int *)(param_1 + 0xec) = local_4c.left;
  local_38 = local_4c.top;
  local_30 = local_4c.bottom;
  *(LONG *)(param_1 + 0xf0) = local_4c.top + 2;
  *(HWND *)(param_1 + 0xf4) = local_70;
  *(LONG *)(param_1 + 0xf8) = local_4c.top + 6 + local_60;
  local_3c = local_4c.left;
  uVar4 = FUN_004474d0((int *)(param_1 + 0xec),&local_4c,&local_3c,1,1);
  *(uint *)(param_1 + 0xe8) = (*(uint *)(param_1 + 0xe8) ^ uVar4) & 1 ^ *(uint *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffffe;
  lprc = (LPRECT)(param_1 + 0x14c);
  lprc->left = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if ((local_78 == 0) || (*(int *)(param_1 + 0xa8) == 5)) {
    local_4c.right = (int)(int *)local_5c.right + 2;
    *(LONG *)(param_1 + 0x154) = local_4c.right;
    local_4c.top = local_4c.top + 2 + local_60 + iVar2;
    *(LONG *)(param_1 + 0x150) = local_4c.top;
    *(LONG *)(param_1 + 0x158) = local_4c.top + iVar9;
    local_38 = local_5c.top;
    local_34 = (HWND)local_5c.right;
    local_30 = local_5c.bottom;
    local_4c.left = local_5c.left;
    local_3c = local_5c.left + 0x20;
    lprc->left = (LONG)((int)&((HWND)(local_5c.right + -0x58))->unused + 3);
    uVar4 = FUN_004474d0(lprc,&local_5c,&local_3c,0x15,0x13);
    uVar4 = (*(uint *)(param_1 + 0x148) ^ uVar4) & 1 ^ *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x148) = uVar4 | 8;
    if ((uVar4 & 1) != 0) {
      local_4c.right = local_4c.right + -0x5d;
    }
  }
  else {
    *(LONG *)(param_1 + 0x154) = local_4c.right;
    lprc->left = (LONG)((int)&((HWND)(local_4c.right + -0x58))->unused + 1);
    *(LONG *)(param_1 + 0x150) = local_4c.top;
    *(LONG *)(param_1 + 0x158) = local_4c.top + iVar9;
    OffsetRect(lprc,0,(*(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0xf0)) / 2 -
                      (*(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x150)) / 2);
    local_4c.left = local_5c.left;
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 9;
    local_4c.right = (int)(int *)local_5c.right + 2;
    local_4c.top = local_4c.top + iVar9;
  }
  if ((local_78 == 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    *(int *)(param_1 + 0x134) = local_4c.left;
    *(LONG *)(param_1 + 0x138) = local_4c.top;
    *(LONG *)(param_1 + 0x13c) = local_4c.right;
    *(LONG *)(param_1 + 0x140) = local_4c.top + iVar9;
    local_3c = local_5c.left;
    local_38 = local_5c.top;
    local_34 = (HWND)local_5c.right;
    local_30 = local_5c.bottom;
    uVar4 = FUN_004474d0((int *)(param_1 + 0x134),&local_5c,&local_3c,6,iVar9);
    local_4c.left = local_5c.left;
    *(uint *)(param_1 + 0x130) =
         (*(uint *)(param_1 + 0x130) ^ uVar4) & 1 ^ *(uint *)(param_1 + 0x130);
    local_4c.right = local_5c.right;
    local_4c.top = local_4c.top + 1 + iVar9;
  }
  else {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    if (*(int *)(param_1 + 0xa8) == 5) {
      local_70 = (HWND)(local_4c.right + -local_4c.left);
      iVar3 = iVar9 * 2;
      if (*(HWND *)(param_1 + 300) != (HWND)0x0) {
        GetWindowRect(*(HWND *)(param_1 + 300),(LPRECT)&local_2c);
        iVar3 = local_2c.nMax - local_2c.fMask;
      }
      *(LONG *)(param_1 + 0x11c) = local_4c.left;
      *(LONG *)(param_1 + 0x120) = local_4c.top;
      *(int *)(param_1 + 0x124) = (int)&local_70->unused + local_4c.left;
      *(int *)(param_1 + 0x128) = iVar3 + local_4c.top;
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
      OffsetRect((LPRECT)(param_1 + 0x14c),0,
                 (*(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x120)) / 2 -
                 (*(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x150)) / 2);
      local_4c.left = local_5c.left;
      local_4c.top = local_4c.top + 4 + iVar3;
      local_4c.right = local_5c.right;
    }
    else {
      local_4c.left = local_5c.left;
      local_4c.right = local_5c.right;
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  local_5c.left = local_4c.left;
  local_5c.right = local_4c.right;
  SetWindowPos(*(HWND *)(param_1 + 0x264),(HWND)0x0,1000,1000,(int)param_2,1000,8);
  iVar3 = FUN_005382e0(1);
  iVar3 = iVar3 + 1000 + (iVar2 - *(int *)(*(int *)(*(int *)(param_1 + 0x80) + 0x50) + 0x1c));
  iVar5 = ftol();
  if ((iVar5 < iVar3) || (iVar3 = local_4c.bottom - local_4c.top, iVar3 < iVar5)) {
    iVar5 = iVar3;
  }
  local_4c.bottom = local_4c.bottom - iVar5;
  *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) & 0xfffffffe | 8;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 2;
  piVar7 = (int *)(param_1 + 0x164);
  *piVar7 = local_4c.left;
  *(LONG *)(param_1 + 0x168) = local_4c.top;
  *(LONG *)(param_1 + 0x16c) = local_4c.right;
  *(LONG *)(param_1 + 0x170) = local_4c.bottom;
  local_3c = local_5c.left;
  local_38 = local_5c.top;
  local_34 = (HWND)local_5c.right;
  iVar3 = *(int *)(param_1 + 0xb4);
  local_30 = local_4c.bottom;
  if (iVar3 == 0) {
    *piVar7 = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  else {
    if (((iVar3 != -0x1c) && (*(int *)(iVar3 + 0x3c) != 0)) && (*(int *)(iVar3 + 0x40) != 0)) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffd;
      *piVar7 = local_4c.left;
      *(LONG *)(param_1 + 0x168) = local_4c.top;
      *(LONG *)(param_1 + 0x16c) = local_4c.right;
      *(LONG *)(param_1 + 0x170) = local_4c.bottom;
    }
    uVar4 = FUN_004474d0(piVar7,&local_5c,&local_3c,0x20,local_68 * 2);
    *(uint *)(param_1 + 0x160) =
         (*(uint *)(param_1 + 0x160) ^ uVar4) & 1 ^ *(uint *)(param_1 + 0x160);
  }
  *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  if ((((*(byte *)(param_1 + 0x160) & 1) != 0) && (*(int *)(param_1 + 0xb4) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0xb4) + 0x14) != 0)) {
    iVar3 = *(int *)(param_1 + 0x16c);
    ppHVar12 = &local_70;
    uVar11 = 0xffffffff;
    uVar1 = _SfGetString_8(DAT_00647204,0x5085);
    uVar6 = _SfGetUIFont_4(100);
    _SfGetTextExtent_16(uVar6,uVar1,uVar11,ppHVar12);
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x168) + 6;
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x168) + 6 + iVar9;
    local_3c = local_5c.left;
    local_38 = local_5c.top;
    local_34 = (HWND)local_5c.right;
    local_30 = local_4c.bottom;
    *(int *)(param_1 + 0x1ac) = iVar3 + -0x3c;
    *(int *)(param_1 + 0x1b4) = iVar3 + -6;
    uVar4 = FUN_004474d0((int *)(param_1 + 0x1ac),&local_5c,&local_3c,1,iVar9);
    *(uint *)(param_1 + 0x1a8) =
         (uVar4 ^ *(uint *)(param_1 + 0x1a8)) & 1 ^ *(uint *)(param_1 + 0x1a8);
    SetWindowPos(*(HWND *)(param_1 + 0x1a4),(HWND)0x0,1000,1000,1000,1000,8);
    GetWindowRect(*(HWND *)(param_1 + 0x1a4),(LPRECT)&local_2c);
    SetWindowPos(*(HWND *)(param_1 + 0x1a4),(HWND)0x0,0,0,0,0,8);
    iVar3 = local_2c.nMax - local_2c.fMask;
    if ((int)(local_2c.nMax - local_2c.fMask) <= local_6c) {
      iVar3 = local_6c;
    }
    iVar3 = (iVar3 - local_6c) / 2 + iVar2;
    *(int *)(param_1 + 0x188) = local_6c + *(int *)(param_1 + 0x168) + iVar3;
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x168) + iVar3;
    local_3c = local_5c.left;
    local_38 = local_5c.top;
    local_34 = (HWND)local_5c.right;
    local_30 = local_4c.bottom;
    *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x164) + 6;
    *(int *)(param_1 + 0x184) = (int)&local_70[1].unused + *(int *)(param_1 + 0x164) + 2;
    uVar4 = FUN_004474d0((int *)(param_1 + 0x17c),&local_5c,&local_3c,8,8);
    *(uint *)(param_1 + 0x178) =
         (uVar4 ^ *(uint *)(param_1 + 0x178)) & 1 ^ *(uint *)(param_1 + 0x178);
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x1ac) + -6;
    *(int *)(param_1 + 0x198) = iVar2 + *(int *)(param_1 + 0x168);
    local_3c = local_5c.left;
    local_38 = local_5c.top;
    local_34 = (HWND)local_5c.right;
    local_30 = local_4c.bottom;
    *(int *)(param_1 + 0x194) = (int)&local_70[3].unused + *(int *)(param_1 + 0x164);
    *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x168) + -1 + iVar9;
    uVar4 = FUN_004474d0((int *)(param_1 + 0x194),&local_5c,&local_3c,8,8);
    *(uint *)(param_1 + 400) = (uVar4 ^ *(uint *)(param_1 + 400)) & 1 ^ *(uint *)(param_1 + 400);
  }
  hWndInsertAfter = (HWND)0x0;
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) & 0xfffffffe;
  piVar7 = (int *)(param_1 + 0x224);
  if ((*(byte *)(param_1 + 0x9c) & 2) == 0) {
    *piVar7 = *(int *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x168);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x170);
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + local_68 + iVar2;
    *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) - iVar2;
    *piVar7 = *piVar7 + 6;
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + -6;
    local_38 = local_5c.top;
    local_3c = local_5c.left;
    local_30 = local_5c.bottom;
    local_34 = (HWND)local_5c.right;
    uVar4 = FUN_004474d0(piVar7,&local_5c,&local_3c,0x20,0x20);
    *(uint *)(param_1 + 0x220) =
         (uVar4 ^ *(uint *)(param_1 + 0x220)) & 1 ^ *(uint *)(param_1 + 0x220);
  }
  else {
    *piVar7 = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_004474d0(piVar7,&local_5c,&local_3c,0x20,0x20);
  }
  *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x208) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  else {
    local_3c = local_5c.left;
    *(int *)(param_1 + 0x254) = local_5c.left;
    *(LONG *)(param_1 + 0x260) = local_5c.bottom;
    local_30 = local_5c.bottom;
    local_38 = local_5c.top;
    *(LONG *)(param_1 + 600) = (local_5c.bottom - iVar5) + iVar2;
    *(LONG *)(param_1 + 0x25c) = local_5c.right;
    local_34 = (HWND)local_5c.right;
    uVar4 = FUN_004474d0((int *)(param_1 + 0x254),&local_5c,&local_3c,0x10,0x10);
    *(uint *)(param_1 + 0x250) =
         (uVar4 ^ *(uint *)(param_1 + 0x250)) & 1 ^ *(uint *)(param_1 + 0x250);
  }
  piVar7 = (int *)FUN_004452b0(param_1);
  if (piVar7 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar7;
  }
  iVar9 = 0x12;
  pbVar8 = (byte *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0x160) =
       ((uint)(iVar2 == 0) ^ *(uint *)(param_1 + 0x160)) & 1 ^ *(uint *)(param_1 + 0x160);
  iVar2 = 0;
  do {
    if ((*(int *)(pbVar8 + 0x14) != 0) && ((*pbVar8 & 4) == 0)) {
      iVar2 = iVar2 + 1;
    }
    pbVar8 = pbVar8 + 0x18;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  hWinPosInfo = BeginDeferWindowPos(iVar2);
  piVar7 = (int *)(param_1 + 0xc0);
  local_68 = 0x12;
  do {
    if ((piVar7[3] != 0) && ((piVar7[-2] & 4U) == 0)) {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,(HWND)piVar7[3],hWndInsertAfter,piVar7[-1],*piVar7,
                                   piVar7[1] - piVar7[-1],piVar7[2] - *piVar7,
                                   (-(uint)((piVar7[-2] & 1U) != 0) & 0xffffffc0) + 0x80 | 0x10);
      hWndInsertAfter = (HWND)piVar7[3];
    }
    piVar7 = piVar7 + 6;
    local_68 = local_68 + -1;
  } while (local_68 != 0);
  EndDeferWindowPos(hWinPosInfo);
  pSVar10 = &local_2c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar10->cbSize = 0;
    pSVar10 = (SCROLLINFO *)&pSVar10->fMask;
  }
  local_2c.cbSize = 0x1c;
  local_2c.fMask = 0x17;
  local_2c.nMin = 0;
  local_2c.nMax = 0;
  local_2c.nPage = 0;
  local_2c.nPos = 0;
  local_2c.nTrackPos = 0;
  SetScrollInfo(*(HWND *)(param_1 + 0x234),1,&local_2c,0);
  SetScrollInfo(*(HWND *)(param_1 + 0x234),0,&local_2c,0);
  return;
}



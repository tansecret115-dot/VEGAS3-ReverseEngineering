/* Module: sfpagepeel.dll
   Function: FUN_004197f0
   Address: 004197f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004197f0(int param_1)

{
  int iVar1;
  HDC hdc;
  HDC hdc_00;
  HFONT pHVar2;
  HGDIOBJ pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int local_68;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  tagRECT local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar1 = param_1;
  local_30 = *(int *)(param_1 + 0x178);
  local_2c = *(int *)(param_1 + 0x17c);
  local_28 = *(int *)(param_1 + 0x180);
  local_24 = *(int *)(param_1 + 0x184);
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  ReleaseDC((HWND)0x0,hdc);
  pHVar2 = FUN_0042f0f0(0x6e);
  pvVar3 = SelectObject(hdc_00,pHVar2);
  local_40.left = *(int *)(param_1 + 0x1c8);
  local_40.top = *(int *)(param_1 + 0x1cc);
  local_40.right = *(int *)(param_1 + 0x1d0);
  local_40.bottom = *(int *)(param_1 + 0x1d4);
  DrawTextA(hdc_00,PTR_DAT_0047ca14,-1,&local_40,0x425);
  SelectObject(hdc_00,pvVar3);
  iVar4 = local_40.bottom - local_40.top;
  pHVar2 = FUN_0042f0f0(100);
  pvVar3 = SelectObject(hdc_00,pHVar2);
  local_20.left = *(int *)(param_1 + 0x1c8);
  local_20.top = *(int *)(param_1 + 0x1cc);
  local_20.right = *(int *)(param_1 + 0x1d0);
  local_20.bottom = *(int *)(param_1 + 0x1d4);
  DrawTextA(hdc_00,PTR_DAT_0047ca14,-1,&local_20,0x425);
  SelectObject(hdc_00,pvVar3);
  iVar5 = local_20.bottom - local_20.top;
  pHVar2 = FUN_0042f0f0(0x82);
  pvVar3 = SelectObject(hdc_00,pHVar2);
  local_10.left = *(int *)(param_1 + 0x1c8);
  local_10.top = *(int *)(param_1 + 0x1cc);
  local_10.right = *(int *)(param_1 + 0x1d0);
  local_10.bottom = *(int *)(param_1 + 0x1d4);
  DrawTextA(hdc_00,PTR_DAT_0047ca14,-1,&local_10,0x425);
  SelectObject(hdc_00,pvVar3);
  iVar6 = local_10.bottom - local_10.top;
  DeleteDC(hdc_00);
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  uVar13 = *(uint *)(param_1 + 4);
  if ((uVar13 & 0x20) != 0) {
    uVar7 = (uint)(local_28 - local_30) / ((((uVar13 & 2) != 0) + 3) * 3);
    iVar8 = (local_40.bottom - local_40.top) + 0xe;
    if ((iVar8 * 4 < local_24 - local_2c) &&
       (iVar9 = uVar7 * 2, (local_40.right - local_40.left) * 3 + 4 <= iVar9)) {
      *(undefined4 *)(param_1 + 0x2f8) = 0x6e;
      if (((local_20.bottom - local_20.top) * 0x10 < local_24 - local_2c) &&
         ((local_20.right - local_20.left) * 3 + 4 <= iVar9)) {
        *(undefined4 *)(param_1 + 0x2f8) = 100;
        iVar8 = (local_20.bottom - local_20.top) + 0xe;
      }
      iVar11 = local_24 + -5;
      *(int *)(param_1 + 0x29c) = local_30;
      local_24 = iVar11 - iVar8;
      iVar12 = local_30 + uVar7;
      *(int *)(param_1 + 0x2a0) = local_24;
      *(int *)(param_1 + 0x2a4) = iVar12;
      *(int *)(param_1 + 0x2a8) = iVar11;
      *(int *)(param_1 + 0x25c) = iVar12;
      *(int *)(param_1 + 0x264) = iVar9 + iVar12;
      *(int *)(param_1 + 0x260) = local_24;
      *(int *)(param_1 + 0x268) = iVar11;
      iVar8 = uVar7 * 3;
      *(int *)(param_1 + 0x2b0) = local_24;
      *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x25c) + iVar9;
      *(int *)(param_1 + 0x2b4) = iVar12 + iVar8;
      *(int *)(param_1 + 0x2b8) = iVar11;
      *(int *)(param_1 + 0x270) = local_24;
      *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x2b4);
      *(int *)(param_1 + 0x274) = iVar12 + iVar8 + iVar9;
      *(int *)(param_1 + 0x278) = iVar11;
      iVar12 = *(int *)(param_1 + 0x26c) + iVar8;
      *(int *)(param_1 + 0x2c0) = local_24;
      *(int *)(param_1 + 700) = *(int *)(param_1 + 0x26c) + iVar9;
      *(int *)(param_1 + 0x2c4) = iVar12;
      *(int *)(param_1 + 0x2c8) = iVar11;
      *(int *)(param_1 + 0x280) = local_24;
      *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x2c4);
      *(int *)(param_1 + 0x284) = iVar12 + iVar9;
      *(int *)(param_1 + 0x288) = iVar11;
      if ((*(byte *)(param_1 + 4) & 2) == 0) {
        *(undefined4 *)(param_1 + 0x2cc) = 0;
        *(undefined4 *)(param_1 + 0x2d0) = 0;
        *(undefined4 *)(param_1 + 0x2d4) = 0;
        *(undefined4 *)(param_1 + 0x2d8) = 0;
        *(undefined4 *)(param_1 + 0x28c) = 0;
        *(undefined4 *)(param_1 + 0x290) = 0;
        *(undefined4 *)(param_1 + 0x294) = 0;
        *(undefined4 *)(param_1 + 0x298) = 0;
      }
      else {
        *(int *)(param_1 + 0x2d0) = local_24;
        iVar8 = iVar8 + *(int *)(param_1 + 0x27c);
        *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x27c) + iVar9;
        *(int *)(param_1 + 0x2d4) = iVar8;
        *(int *)(param_1 + 0x2d8) = iVar11;
        *(int *)(param_1 + 0x28c) = iVar8;
        *(int *)(param_1 + 0x290) = local_24;
        *(int *)(param_1 + 0x294) = iVar9 + iVar8;
        *(int *)(param_1 + 0x298) = iVar11;
      }
    }
    else {
      *(uint *)(param_1 + 4) = uVar13 & 0xffffffdf;
    }
  }
  iVar8 = local_24;
  uVar7 = ((local_24 - local_2c) / 3 + -0x1c) / 2;
  uVar7 = ((int)uVar7 < 0) - 1 & uVar7;
  uVar13 = ((local_28 - local_30) / 9 + -0xe) / 2;
  uVar13 = ((int)uVar13 < 0) - 1 & uVar13;
  if ((int)uVar7 <= (int)uVar13) {
    uVar13 = uVar7;
  }
  iVar11 = uVar7 - uVar13;
  *(undefined4 *)(param_1 + 0x1e8) = 2;
  *(uint *)(param_1 + 0x1f0) = uVar13 + 0x10;
  iVar9 = (local_24 - iVar11) + -5;
  *(int *)(param_1 + 500) = iVar9;
  *(uint *)(param_1 + 0x1ec) = (iVar9 - uVar13) + -0xe;
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1f0);
  iVar9 = *(int *)(param_1 + 0x1ec) + -2;
  *(int *)(param_1 + 0x1e4) = iVar9;
  *(uint *)(param_1 + 0x1dc) = (iVar9 - uVar13) + -0xe;
  *(undefined4 *)(param_1 + 0x1c8) = 2;
  *(undefined4 *)(param_1 + 0x1cc) = 5;
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1f0);
  iVar9 = (*(int *)(param_1 + 0x1dc) - iVar11) + -0xb;
  *(int *)(param_1 + 0x1d4) = iVar9;
  if (iVar9 - *(int *)(param_1 + 0x1cc) < iVar4 * 6) {
    iVar4 = 0;
  }
  else {
    iVar4 = (local_40.right - local_40.left) + 2;
  }
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  local_4c = 0;
  local_50 = 0;
  local_44 = 0;
  local_48 = 0;
  if (iVar4 != 0) {
    local_50 = local_40.left;
    local_4c = local_40.top;
    *(undefined4 *)(param_1 + 0x2f4) = 1;
    local_48 = local_40.right;
    local_44 = local_40.bottom;
    if (iVar5 * 6 <= *(int *)(param_1 + 0x1d4) - *(int *)(param_1 + 0x1cc)) {
      *(undefined4 *)(param_1 + 0x2f4) = 2;
      local_50 = local_20.left;
      iVar4 = (local_20.right - local_20.left) + 3;
      local_4c = local_20.top;
      local_48 = local_20.right;
      local_44 = local_20.bottom;
    }
    if (iVar6 * 6 <= *(int *)(param_1 + 0x1d4) - *(int *)(param_1 + 0x1cc)) {
      local_50 = local_10.left;
      iVar4 = (local_10.right - local_10.left) + 4;
      *(undefined4 *)(param_1 + 0x2f4) = 3;
      local_4c = local_10.top;
      local_48 = local_10.right;
      local_44 = local_10.bottom;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1d4);
  iVar6 = *(int *)(param_1 + 0x1cc);
  param_1 = (iVar5 - iVar6) + -0x14;
  if (0 < param_1) {
    param_1 = param_1 / 3;
  }
  if (param_1 < 1) {
    param_1 = 1;
  }
  iVar12 = *(int *)(iVar1 + 0x1f0);
  iVar9 = iVar12 + 5;
  if ((*(uint *)(iVar1 + 4) & 0x40) == 0) {
    local_68 = 0;
    *(undefined4 *)(iVar1 + 0x20c) = 0;
    *(undefined4 *)(iVar1 + 0x210) = 0;
    *(undefined4 *)(iVar1 + 0x214) = 0;
    *(undefined4 *)(iVar1 + 0x218) = 0;
    *(undefined4 *)(iVar1 + 0x21c) = 0;
    *(undefined4 *)(iVar1 + 0x220) = 0;
    *(undefined4 *)(iVar1 + 0x224) = 0;
    *(undefined4 *)(iVar1 + 0x228) = 0;
  }
  else {
    local_68 = *(int *)(iVar1 + 0x1e0) - *(int *)(iVar1 + 0x1d8);
    *(int *)(iVar1 + 0x20c) = iVar9;
    *(int *)(iVar1 + 0x214) = local_68 + iVar9;
    *(undefined4 *)(iVar1 + 0x210) = *(undefined4 *)(iVar1 + 0x1ec);
    *(undefined4 *)(iVar1 + 0x218) = *(undefined4 *)(iVar1 + 500);
    *(int *)(iVar1 + 0x228) = *(int *)(iVar1 + 0x1e4) + -1;
    *(int *)(iVar1 + 0x220) = *(int *)(iVar1 + 0x1dc) + 1;
    *(int *)(iVar1 + 0x21c) = iVar12 + 6;
    iVar10 = local_68 + iVar9 + -1;
    *(int *)(iVar1 + 0x224) = iVar10;
    iVar10 = ((iVar10 - *(int *)(iVar1 + 0x21c)) + -0x10) / 2;
    if (0 < iVar10) {
      iVar10 = -iVar10;
      InflateRect((LPRECT)(iVar1 + 0x21c),iVar10,iVar10);
    }
  }
  if ((iVar4 != 0) && (iVar4 <= local_68)) {
    iVar4 = local_68;
  }
  iVar9 = local_68 + 5 + iVar9;
  local_68 = iVar9;
  if ((*(byte *)(iVar1 + 4) & 0x40) == 0) {
    local_68 = iVar12 + 10 + iVar4;
  }
  *(int *)(iVar1 + 0x1b8) = iVar9;
  *(int *)(iVar1 + 0x1c4) = iVar8 + -5;
  local_28 = local_28 + -5;
  *(int *)(iVar1 + 0x1bc) = *(int *)(iVar1 + 0x1dc) - iVar11;
  *(int *)(iVar1 + 0x1c0) = local_28;
  *(int *)(iVar1 + 400) = local_28;
  iVar8 = param_1 + iVar6;
  *(int *)(iVar1 + 0x188) = local_68;
  *(int *)(iVar1 + 0x194) = iVar8;
  *(int *)(iVar1 + 0x198) = local_68;
  *(int *)(iVar1 + 0x18c) = iVar6;
  *(int *)(iVar1 + 0x1a0) = local_28;
  iVar9 = ((iVar5 - iVar6) / 2 - param_1 / 2) + iVar6;
  *(int *)(iVar1 + 0x19c) = iVar9;
  *(int *)(iVar1 + 0x1a4) = iVar9 + param_1;
  *(int *)(iVar1 + 0x1a8) = local_68;
  *(int *)(iVar1 + 0x1ac) = iVar5 - param_1;
  *(int *)(iVar1 + 0x1b0) = local_28;
  *(int *)(iVar1 + 0x1b4) = iVar5;
  if (iVar4 != 0) {
    iVar4 = (((iVar8 - iVar6) - local_44) + local_4c) / 2;
    local_68 = local_68 + -5;
    *(int *)(iVar1 + 0x230) = iVar4 + -2 + iVar6;
    *(int *)(iVar1 + 0x234) = local_68;
    *(int *)(iVar1 + 0x238) = iVar8 + 5;
    *(int *)(iVar1 + 0x240) = iVar9 + -2 + iVar4;
    *(int *)(iVar1 + 0x244) = local_68;
    *(int *)(iVar1 + 0x254) = local_68;
    *(int *)(iVar1 + 0x248) = iVar9 + param_1 + 5;
    local_50 = (local_68 - local_48) + local_50;
    *(int *)(iVar1 + 0x22c) = local_50;
    *(int *)(iVar1 + 0x23c) = local_50;
    *(int *)(iVar1 + 0x24c) = local_50;
    *(int *)(iVar1 + 0x250) = (iVar5 - param_1) + -2 + iVar4;
    *(int *)(iVar1 + 600) = iVar5 + 5;
    return 1;
  }
  *(int *)(iVar1 + 0x22c) = local_50;
  *(int *)(iVar1 + 0x230) = local_4c;
  *(int *)(iVar1 + 0x234) = local_48;
  *(int *)(iVar1 + 0x238) = local_44;
  *(int *)(iVar1 + 0x23c) = local_50;
  *(int *)(iVar1 + 0x24c) = local_50;
  *(int *)(iVar1 + 0x240) = local_4c;
  *(int *)(iVar1 + 0x250) = local_4c;
  *(int *)(iVar1 + 0x244) = local_48;
  *(int *)(iVar1 + 0x254) = local_48;
  *(int *)(iVar1 + 0x248) = local_44;
  *(int *)(iVar1 + 600) = local_44;
  return 1;
}



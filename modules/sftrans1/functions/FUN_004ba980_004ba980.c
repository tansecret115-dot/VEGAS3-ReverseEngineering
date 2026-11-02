/* Module: sftrans1.dll
   Function: FUN_004ba980
   Address: 004ba980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ba980(int param_1)

{
  int iVar1;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
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
  pvVar2 = (HGDIOBJ)FUN_004e4320(0x6e);
  pvVar2 = SelectObject(hdc_00,pvVar2);
  local_40.left = *(int *)(param_1 + 0x1c8);
  local_40.top = *(int *)(param_1 + 0x1cc);
  local_40.right = *(int *)(param_1 + 0x1d0);
  local_40.bottom = *(int *)(param_1 + 0x1d4);
  DrawTextA(hdc_00,PTR_DAT_00575818,-1,&local_40,0x425);
  SelectObject(hdc_00,pvVar2);
  iVar3 = local_40.bottom - local_40.top;
  pvVar2 = (HGDIOBJ)FUN_004e4320(100);
  pvVar2 = SelectObject(hdc_00,pvVar2);
  local_20.left = *(int *)(param_1 + 0x1c8);
  local_20.top = *(int *)(param_1 + 0x1cc);
  local_20.right = *(int *)(param_1 + 0x1d0);
  local_20.bottom = *(int *)(param_1 + 0x1d4);
  DrawTextA(hdc_00,PTR_DAT_00575818,-1,&local_20,0x425);
  SelectObject(hdc_00,pvVar2);
  iVar4 = local_20.bottom - local_20.top;
  pvVar2 = (HGDIOBJ)FUN_004e4320(0x82);
  pvVar2 = SelectObject(hdc_00,pvVar2);
  local_10.left = *(int *)(param_1 + 0x1c8);
  local_10.top = *(int *)(param_1 + 0x1cc);
  local_10.right = *(int *)(param_1 + 0x1d0);
  local_10.bottom = *(int *)(param_1 + 0x1d4);
  DrawTextA(hdc_00,PTR_DAT_00575818,-1,&local_10,0x425);
  SelectObject(hdc_00,pvVar2);
  iVar5 = local_10.bottom - local_10.top;
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
  uVar12 = *(uint *)(param_1 + 4);
  if ((uVar12 & 0x20) != 0) {
    uVar6 = (uint)(local_28 - local_30) / ((((uVar12 & 2) != 0) + 3) * 3);
    iVar7 = (local_40.bottom - local_40.top) + 0xe;
    if ((iVar7 * 4 < local_24 - local_2c) &&
       (iVar8 = uVar6 * 2, (local_40.right - local_40.left) * 3 + 4 <= iVar8)) {
      *(undefined4 *)(param_1 + 0x2f8) = 0x6e;
      if (((local_20.bottom - local_20.top) * 0x10 < local_24 - local_2c) &&
         ((local_20.right - local_20.left) * 3 + 4 <= iVar8)) {
        *(undefined4 *)(param_1 + 0x2f8) = 100;
        iVar7 = (local_20.bottom - local_20.top) + 0xe;
      }
      iVar10 = local_24 + -5;
      *(int *)(param_1 + 0x29c) = local_30;
      local_24 = iVar10 - iVar7;
      iVar11 = local_30 + uVar6;
      *(int *)(param_1 + 0x2a0) = local_24;
      *(int *)(param_1 + 0x2a4) = iVar11;
      *(int *)(param_1 + 0x2a8) = iVar10;
      *(int *)(param_1 + 0x25c) = iVar11;
      *(int *)(param_1 + 0x264) = iVar8 + iVar11;
      *(int *)(param_1 + 0x260) = local_24;
      *(int *)(param_1 + 0x268) = iVar10;
      iVar7 = uVar6 * 3;
      *(int *)(param_1 + 0x2b0) = local_24;
      *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x25c) + iVar8;
      *(int *)(param_1 + 0x2b4) = iVar11 + iVar7;
      *(int *)(param_1 + 0x2b8) = iVar10;
      *(int *)(param_1 + 0x270) = local_24;
      *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x2b4);
      *(int *)(param_1 + 0x274) = iVar11 + iVar7 + iVar8;
      *(int *)(param_1 + 0x278) = iVar10;
      iVar11 = *(int *)(param_1 + 0x26c) + iVar7;
      *(int *)(param_1 + 0x2c0) = local_24;
      *(int *)(param_1 + 700) = *(int *)(param_1 + 0x26c) + iVar8;
      *(int *)(param_1 + 0x2c4) = iVar11;
      *(int *)(param_1 + 0x2c8) = iVar10;
      *(int *)(param_1 + 0x280) = local_24;
      *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x2c4);
      *(int *)(param_1 + 0x284) = iVar11 + iVar8;
      *(int *)(param_1 + 0x288) = iVar10;
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
        iVar7 = iVar7 + *(int *)(param_1 + 0x27c);
        *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x27c) + iVar8;
        *(int *)(param_1 + 0x2d4) = iVar7;
        *(int *)(param_1 + 0x2d8) = iVar10;
        *(int *)(param_1 + 0x28c) = iVar7;
        *(int *)(param_1 + 0x290) = local_24;
        *(int *)(param_1 + 0x294) = iVar8 + iVar7;
        *(int *)(param_1 + 0x298) = iVar10;
      }
    }
    else {
      *(uint *)(param_1 + 4) = uVar12 & 0xffffffdf;
    }
  }
  iVar7 = local_24;
  uVar6 = ((local_24 - local_2c) / 3 + -0x1c) / 2;
  uVar6 = ((int)uVar6 < 0) - 1 & uVar6;
  uVar12 = ((local_28 - local_30) / 9 + -0xe) / 2;
  uVar12 = ((int)uVar12 < 0) - 1 & uVar12;
  if ((int)uVar6 <= (int)uVar12) {
    uVar12 = uVar6;
  }
  iVar10 = uVar6 - uVar12;
  *(undefined4 *)(param_1 + 0x1e8) = 2;
  *(uint *)(param_1 + 0x1f0) = uVar12 + 0x10;
  iVar8 = (local_24 - iVar10) + -5;
  *(int *)(param_1 + 500) = iVar8;
  *(uint *)(param_1 + 0x1ec) = (iVar8 - uVar12) + -0xe;
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1f0);
  iVar8 = *(int *)(param_1 + 0x1ec) + -2;
  *(int *)(param_1 + 0x1e4) = iVar8;
  *(uint *)(param_1 + 0x1dc) = (iVar8 - uVar12) + -0xe;
  *(undefined4 *)(param_1 + 0x1c8) = 2;
  *(undefined4 *)(param_1 + 0x1cc) = 5;
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1f0);
  iVar8 = (*(int *)(param_1 + 0x1dc) - iVar10) + -0xb;
  *(int *)(param_1 + 0x1d4) = iVar8;
  if (iVar8 - *(int *)(param_1 + 0x1cc) < iVar3 * 6) {
    iVar3 = 0;
  }
  else {
    iVar3 = (local_40.right - local_40.left) + 2;
  }
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  local_4c = 0;
  local_50 = 0;
  local_44 = 0;
  local_48 = 0;
  if (iVar3 != 0) {
    local_50 = local_40.left;
    local_4c = local_40.top;
    *(undefined4 *)(param_1 + 0x2f4) = 1;
    local_48 = local_40.right;
    local_44 = local_40.bottom;
    if (iVar4 * 6 <= *(int *)(param_1 + 0x1d4) - *(int *)(param_1 + 0x1cc)) {
      *(undefined4 *)(param_1 + 0x2f4) = 2;
      local_50 = local_20.left;
      iVar3 = (local_20.right - local_20.left) + 3;
      local_4c = local_20.top;
      local_48 = local_20.right;
      local_44 = local_20.bottom;
    }
    if (iVar5 * 6 <= *(int *)(param_1 + 0x1d4) - *(int *)(param_1 + 0x1cc)) {
      local_50 = local_10.left;
      iVar3 = (local_10.right - local_10.left) + 4;
      *(undefined4 *)(param_1 + 0x2f4) = 3;
      local_4c = local_10.top;
      local_48 = local_10.right;
      local_44 = local_10.bottom;
    }
  }
  iVar4 = *(int *)(param_1 + 0x1d4);
  iVar5 = *(int *)(param_1 + 0x1cc);
  param_1 = (iVar4 - iVar5) + -0x14;
  if (0 < param_1) {
    param_1 = param_1 / 3;
  }
  if (param_1 < 1) {
    param_1 = 1;
  }
  iVar11 = *(int *)(iVar1 + 0x1f0);
  iVar8 = iVar11 + 5;
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
    *(int *)(iVar1 + 0x20c) = iVar8;
    *(int *)(iVar1 + 0x214) = local_68 + iVar8;
    *(undefined4 *)(iVar1 + 0x210) = *(undefined4 *)(iVar1 + 0x1ec);
    *(undefined4 *)(iVar1 + 0x218) = *(undefined4 *)(iVar1 + 500);
    *(int *)(iVar1 + 0x228) = *(int *)(iVar1 + 0x1e4) + -1;
    *(int *)(iVar1 + 0x220) = *(int *)(iVar1 + 0x1dc) + 1;
    *(int *)(iVar1 + 0x21c) = iVar11 + 6;
    iVar9 = local_68 + iVar8 + -1;
    *(int *)(iVar1 + 0x224) = iVar9;
    iVar9 = ((iVar9 - *(int *)(iVar1 + 0x21c)) + -0x10) / 2;
    if (0 < iVar9) {
      iVar9 = -iVar9;
      InflateRect((LPRECT)(iVar1 + 0x21c),iVar9,iVar9);
    }
  }
  if ((iVar3 != 0) && (iVar3 <= local_68)) {
    iVar3 = local_68;
  }
  iVar8 = local_68 + 5 + iVar8;
  local_68 = iVar8;
  if ((*(byte *)(iVar1 + 4) & 0x40) == 0) {
    local_68 = iVar11 + 10 + iVar3;
  }
  *(int *)(iVar1 + 0x1b8) = iVar8;
  *(int *)(iVar1 + 0x1c4) = iVar7 + -5;
  local_28 = local_28 + -5;
  *(int *)(iVar1 + 0x1bc) = *(int *)(iVar1 + 0x1dc) - iVar10;
  *(int *)(iVar1 + 0x1c0) = local_28;
  *(int *)(iVar1 + 400) = local_28;
  iVar7 = param_1 + iVar5;
  *(int *)(iVar1 + 0x188) = local_68;
  *(int *)(iVar1 + 0x194) = iVar7;
  *(int *)(iVar1 + 0x198) = local_68;
  *(int *)(iVar1 + 0x18c) = iVar5;
  *(int *)(iVar1 + 0x1a0) = local_28;
  iVar8 = ((iVar4 - iVar5) / 2 - param_1 / 2) + iVar5;
  *(int *)(iVar1 + 0x19c) = iVar8;
  *(int *)(iVar1 + 0x1a4) = iVar8 + param_1;
  *(int *)(iVar1 + 0x1a8) = local_68;
  *(int *)(iVar1 + 0x1ac) = iVar4 - param_1;
  *(int *)(iVar1 + 0x1b0) = local_28;
  *(int *)(iVar1 + 0x1b4) = iVar4;
  if (iVar3 != 0) {
    iVar3 = (((iVar7 - iVar5) - local_44) + local_4c) / 2;
    local_68 = local_68 + -5;
    *(int *)(iVar1 + 0x230) = iVar3 + -2 + iVar5;
    *(int *)(iVar1 + 0x234) = local_68;
    *(int *)(iVar1 + 0x238) = iVar7 + 5;
    *(int *)(iVar1 + 0x240) = iVar8 + -2 + iVar3;
    *(int *)(iVar1 + 0x244) = local_68;
    *(int *)(iVar1 + 0x254) = local_68;
    *(int *)(iVar1 + 0x248) = iVar8 + param_1 + 5;
    local_50 = (local_68 - local_48) + local_50;
    *(int *)(iVar1 + 0x22c) = local_50;
    *(int *)(iVar1 + 0x23c) = local_50;
    *(int *)(iVar1 + 0x24c) = local_50;
    *(int *)(iVar1 + 0x250) = (iVar4 - param_1) + -2 + iVar3;
    *(int *)(iVar1 + 600) = iVar4 + 5;
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



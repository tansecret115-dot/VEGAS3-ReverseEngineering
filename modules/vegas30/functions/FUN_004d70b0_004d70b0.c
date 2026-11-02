/* Module: vegas30.exe
   Function: FUN_004d70b0
   Address: 004d70b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d70b0(int param_1,int param_2,HDC param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  DWORD DVar3;
  COLORREF CVar4;
  HGDIOBJ pvVar5;
  uint uVar6;
  uint uVar7;
  undefined3 uVar8;
  int iVar9;
  code *pcVar10;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  pcVar10 = GetSysColor_exref;
  if (param_4 == (uint *)0x0) {
    param_4 = (uint *)0xffffc000;
    local_8 = 0x4000;
  }
  else {
    local_8 = param_4[2];
    param_4 = (uint *)*param_4;
  }
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)param_4 <= (int)uVar2) {
    param_4 = (uint *)uVar2;
  }
  uVar2 = uVar2 + *(int *)(param_1 + 0x18);
  if ((int)uVar2 <= (int)local_8) {
    local_8 = uVar2;
  }
  if ((int)param_4 < (int)local_8) {
    DVar3 = GetSysColor(0xf);
    SetBkColor(param_3,DVar3);
    local_28.left = (LONG)param_4;
    local_28.top = *(int *)(param_1 + 0xc) + -1 + *(int *)(param_1 + 0x1c);
    local_28.bottom = local_28.top + 1;
    local_28.right = local_8;
    ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
    DVar3 = GetSysColor(0);
    SetBkColor(param_3,DVar3);
    DVar3 = GetSysColor(0x14);
    CVar4 = SetTextColor(param_3,DVar3);
    pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    pvVar5 = SelectObject(param_3,pvVar5);
    SetBkMode(param_3,2);
    PatBlt(param_3,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0xc),
           *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x1c),0xf00021);
    SelectObject(param_3,pvVar5);
    SetTextColor(param_3,CVar4);
    SetTextAlign(param_3,0);
    DVar3 = GetSysColor(0x12);
    SetTextColor(param_3,DVar3);
    local_18.top = *(int *)(param_1 + 0xc);
    local_18.bottom = local_18.top + *(int *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x24);
    if (0 < (int)uVar2) {
      uVar6 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) >> 1;
      lVar1 = (longlong)*(int *)(param_2 + 0x224) * (longlong)*(int *)(param_1 + 0x2c);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar6),
                         (uint)lVar1 - uVar6);
        uVar6 = 0;
      }
      local_18.left =
           *(int *)(param_1 + 0x30) +
           (int)((longlong)(lVar1 + (ulonglong)uVar6) / (longlong)(int)uVar2);
      uVar6 = *(uint *)(param_1 + 0x24);
      uVar7 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) >> 1;
      lVar1 = (longlong)(*(int *)(param_2 + 0x228) + *(int *)(param_2 + 0x224)) *
              (longlong)*(int *)(param_1 + 0x2c);
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar7),
                         (uint)lVar1 - uVar7);
        uVar7 = 0;
      }
      local_18.right =
           *(int *)(param_1 + 0x30) + 0xc +
           (int)((longlong)(lVar1 + (ulonglong)uVar7) / (longlong)(int)uVar6);
      uVar6 = *(uint *)(param_1 + 0x34);
      if (((int)uVar6 < local_18.right) &&
         (local_18.right = uVar6, (int)uVar6 < (int)(local_18.left + 8U))) {
        local_18.left = ((int)(uVar6 - 8) < 0) - 1 & uVar6 - 8;
      }
      *(LONG *)(param_1 + 0x48) = local_18.left;
      *(LONG *)(param_1 + 0x4c) = local_18.top;
      *(LONG *)(param_1 + 0x50) = local_18.right;
      *(LONG *)(param_1 + 0x54) = local_18.bottom;
      local_8 = uVar2;
      DVar3 = GetSysColor(0xf);
      SetBkColor(param_3,DVar3);
      local_28.top = local_18.top;
      local_28.left = local_18.left;
      local_28.right = local_18.right;
      local_28.bottom = local_18.bottom;
      ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
      DrawEdge(param_3,&local_18,5,0xf);
      pcVar10 = GetSysColor_exref;
      if ((*(byte *)(param_1 + 4) & 0x80) == 0) {
        param_2 = ((local_18.right - local_18.left) + -3) / 2;
        if (4 < param_2) {
          param_2 = 5;
        }
        iVar9 = (local_18.bottom - local_18.top) + -3;
        DVar3 = GetSysColor(0x14);
        SetBkColor(param_3,DVar3);
        local_28.top = local_18.top + 1;
        local_28.left = param_2 + local_18.left;
        local_28.right = local_28.left + 1;
        local_28.bottom = local_28.top + iVar9;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        local_28.top = local_18.top + 1;
        local_28.bottom = local_28.top + iVar9;
        local_28.left = local_18.right - param_2;
        local_28.right = local_28.left + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        DVar3 = GetSysColor(0x10);
        SetBkColor(param_3,DVar3);
        local_28.top = local_18.top + 1;
        local_28.bottom = local_28.top + iVar9;
        local_28.left = param_2 + -1 + local_18.left;
        local_28.right = local_28.left + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        local_28.top = local_18.top + 1;
        local_28.right = local_18.right - param_2;
        local_28.left = local_28.right - 1;
        local_28.bottom = local_28.top + iVar9;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        pcVar10 = GetSysColor_exref;
      }
    }
    local_18.left = *(int *)(param_1 + 8);
    local_18.right = *(int *)(param_1 + 0x30);
    if (local_18.left < local_18.right) {
      DrawFrameControl(param_3,&local_18,3,
                       CONCAT31((int3)((-(uint)(*(int *)(param_1 + 0x58) != 1) & 0xfffffe00) + 0x200
                                      >> 8),2));
    }
    local_18.left = *(int *)(param_1 + 0x34);
    local_18.right = *(int *)(param_1 + 0x38);
    if (local_18.left < local_18.right) {
      DrawFrameControl(param_3,&local_18,3,(*(int *)(param_1 + 0x58) != 4) - 1 & 0x200 | 3);
    }
    local_18.left = *(int *)(param_1 + 0x38);
    local_18.right = *(int *)(param_1 + 0x3c);
    if (local_18.left < local_18.right) {
      uVar2 = (*(int *)(param_1 + 0x58) != 5) - 1 & 0x200;
      DrawFrameControl(param_3,&local_18,4,CONCAT31((int3)(uVar2 >> 8),0x10));
      CVar4 = (*pcVar10)(0xf);
      SetBkColor(param_3,CVar4);
      iVar9 = ((local_18.right - local_18.left) + -0x10) / 2 + (uint)(uVar2 == 0x200);
      BitBlt(param_3,iVar9 + 2 + local_18.left,iVar9 + 2 + local_18.top,DAT_0064be08,DAT_0064be0c,
             DAT_0064be04,DAT_0064be10,0,0xcc0020);
    }
    local_18.left = *(int *)(param_1 + 0x3c);
    local_18.right = *(int *)(param_1 + 0x40);
    if (local_18.left < local_18.right) {
      DrawFrameControl(param_3,&local_18,4,
                       CONCAT31((uint3)((*(int *)(param_1 + 0x58) != 6) - 1 >> 8) & 2,0x10));
    }
    local_18.left = *(int *)(param_1 + 0x40);
    local_18.right = *(int *)(param_1 + 0x44);
    if (local_18.left < local_18.right) {
      uVar2 = (*(int *)(param_1 + 0x58) != 7) - 1 & 0x200;
      DrawFrameControl(param_3,&local_18,4,CONCAT31((int3)(uVar2 >> 8),0x10));
      CVar4 = (*pcVar10)(0xf);
      SetBkColor(param_3,CVar4);
      iVar9 = ((local_18.right - local_18.left) + -0x10) / 2 + (uint)(uVar2 == 0x200);
      BitBlt(param_3,iVar9 + 2 + local_18.left,iVar9 + 2 + local_18.top,DAT_0064be08,DAT_0064be0c,
             DAT_0064be04,DAT_0064be14,0,0xcc0020);
    }
    local_18.left = *(int *)(param_1 + 0x44);
    local_18.right = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 8);
    if (local_18.left < local_18.right) {
      uVar6 = *(uint *)(param_1 + 4) & 7;
      uVar2 = (*(int *)(param_1 + 0x58) != 8) - 1 & 0x200;
      uVar8 = (undefined3)(uVar2 >> 8);
      if (uVar6 != 1) {
        if (uVar6 == 4) {
          DrawFrameControl(param_3,&local_18,4,CONCAT31(uVar8,0x10));
          CVar4 = (*pcVar10)(0xf);
          SetBkColor(param_3,CVar4);
          iVar9 = ((local_18.right - local_18.left) + -0x10) / 2 + (uint)(uVar2 == 0x200);
          BitBlt(param_3,iVar9 + 2 + local_18.left,iVar9 + 2 + local_18.top,DAT_0064be08,
                 DAT_0064be0c,DAT_0064be04,DAT_0064be18,0,0xcc0020);
          return;
        }
        CVar4 = (*pcVar10)(0xf);
        SetBkColor(param_3,CVar4);
        local_28.top = local_18.top;
        local_28.left = local_18.left;
        local_28.right = local_18.right;
        local_28.bottom = local_18.bottom;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        return;
      }
      DrawFrameControl(param_3,&local_18,3,CONCAT31(uVar8,8));
    }
  }
  return;
}



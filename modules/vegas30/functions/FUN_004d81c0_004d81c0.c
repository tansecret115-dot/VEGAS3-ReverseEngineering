/* Module: vegas30.exe
   Function: FUN_004d81c0
   Address: 004d81c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d81c0(int param_1,int param_2,HDC param_3,int param_4)

{
  DWORD DVar1;
  COLORREF CVar2;
  HGDIOBJ pvVar3;
  uint uVar4;
  undefined3 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  pcVar8 = GetSysColor_exref;
  if (param_4 == 0) {
    iVar7 = -0x4000;
    iVar6 = 0x4000;
  }
  else {
    iVar7 = *(int *)(param_4 + 4);
    iVar6 = *(int *)(param_4 + 0xc);
  }
  if (iVar7 <= *(int *)(param_1 + 0xc)) {
    iVar7 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0x14) <= iVar6) {
    iVar6 = *(int *)(param_1 + 0x14);
  }
  if (iVar7 < iVar6) {
    DVar1 = GetSysColor(0);
    SetBkColor(param_3,DVar1);
    DVar1 = GetSysColor(0x14);
    CVar2 = SetTextColor(param_3,DVar1);
    pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    pvVar3 = SelectObject(param_3,pvVar3);
    SetBkMode(param_3,2);
    PatBlt(param_3,*(int *)(param_1 + 8),*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x18) + -1,
           *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30),0xf00021);
    SelectObject(param_3,pvVar3);
    SetTextColor(param_3,CVar2);
    SetTextAlign(param_3,0);
    DVar1 = GetSysColor(0x12);
    SetTextColor(param_3,DVar1);
    local_18.left = *(int *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x24);
    local_18.right = *(int *)(param_1 + 0x10) + -1;
    if (0 < (int)uVar4) {
      local_8 = *(int *)(param_2 + 0x23c) + *(uint *)(param_2 + 0x238);
      local_18.top = *(int *)(param_1 + 0x30) +
                     (int)(((ulonglong)*(uint *)(param_2 + 0x238) *
                            (ulonglong)*(uint *)(param_1 + 0x2c) + (ulonglong)(uVar4 >> 1)) /
                          (ulonglong)uVar4);
      local_18.bottom =
           *(int *)(param_1 + 0x30) +
           (int)(((ulonglong)local_8 * (ulonglong)*(uint *)(param_1 + 0x2c) +
                 (ulonglong)(*(uint *)(param_1 + 0x24) - 1)) / (ulonglong)*(uint *)(param_1 + 0x24))
      ;
      if (local_18.bottom - local_18.top < 0xc) {
        local_18.top = local_18.top + ((local_18.top - local_18.bottom) + 0xc) / 2;
        if (local_18.top < (int)*(uint *)(param_1 + 0x30)) {
          local_18.top = *(uint *)(param_1 + 0x30);
        }
        local_18.bottom = local_18.top + 0xc;
      }
      iVar7 = *(int *)(param_1 + 0x34);
      if ((iVar7 < local_18.bottom) && (local_18.bottom = iVar7, iVar7 < (int)(local_18.top + 8U)))
      {
        local_18.top = ((int)(iVar7 - 8U) < 0) - 1 & iVar7 - 8U;
      }
      *(LONG *)(param_1 + 0x48) = local_18.left;
      *(LONG *)(param_1 + 0x4c) = local_18.top;
      *(LONG *)(param_1 + 0x50) = local_18.right;
      *(LONG *)(param_1 + 0x54) = local_18.bottom;
      DVar1 = GetSysColor(0xf);
      SetBkColor(param_3,DVar1);
      local_28.top = local_18.top;
      local_28.left = local_18.left;
      local_28.right = local_18.right;
      local_28.bottom = local_18.bottom;
      ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
      DrawEdge(param_3,&local_18,5,0xf);
      pcVar8 = GetSysColor_exref;
      if ((*(byte *)(param_1 + 4) & 0x80) == 0) {
        param_4 = ((local_18.bottom - local_18.top) + -3) / 2;
        if (4 < param_4) {
          param_4 = 5;
        }
        iVar7 = (local_18.right - local_18.left) + -3;
        DVar1 = GetSysColor(0x14);
        SetBkColor(param_3,DVar1);
        local_28.top = param_4 + local_18.top;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar7;
        local_28.bottom = local_28.top + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        local_28.top = local_18.bottom - param_4;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar7;
        local_28.bottom = local_28.top + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        DVar1 = GetSysColor(0x10);
        SetBkColor(param_3,DVar1);
        local_28.top = param_4 + -1 + local_18.top;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar7;
        local_28.bottom = local_28.top + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        local_28.bottom = local_18.bottom - param_4;
        local_28.top = local_28.bottom - 1;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar7;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        pcVar8 = GetSysColor_exref;
      }
    }
    local_18.top = *(int *)(param_1 + 0xc);
    local_18.bottom = *(int *)(param_1 + 0x30);
    if (local_18.top < local_18.bottom) {
      DrawFrameControl(param_3,&local_18,3,
                       (-(uint)(*(int *)(param_1 + 0x58) != 1) & 0xfffffe00) + 0x200);
    }
    local_18.top = *(int *)(param_1 + 0x34);
    local_18.bottom = *(int *)(param_1 + 0x38);
    if (local_18.top < local_18.bottom) {
      DrawFrameControl(param_3,&local_18,3,(*(int *)(param_1 + 0x58) != 4) - 1 & 0x200 | 1);
    }
    local_18.top = *(int *)(param_1 + 0x38);
    local_18.bottom = *(int *)(param_1 + 0x3c);
    if (local_18.top < local_18.bottom) {
      uVar4 = (*(int *)(param_1 + 0x58) != 5) - 1 & 0x200;
      DrawFrameControl(param_3,&local_18,4,CONCAT31((int3)(uVar4 >> 8),0x10));
      CVar2 = (*pcVar8)(0xf);
      SetBkColor(param_3,CVar2);
      iVar7 = ((local_18.right - local_18.left) + -0x10) / 2 + (uint)(uVar4 == 0x200);
      BitBlt(param_3,iVar7 + 2 + local_18.left,iVar7 + 2 + local_18.top,DAT_0064be08,DAT_0064be0c,
             DAT_0064be04,DAT_0064be10,0,0xcc0020);
    }
    local_18.top = *(int *)(param_1 + 0x3c);
    local_18.bottom = *(int *)(param_1 + 0x40);
    if (local_18.top < local_18.bottom) {
      DrawFrameControl(param_3,&local_18,4,
                       CONCAT31((uint3)((*(int *)(param_1 + 0x58) != 6) - 1 >> 8) & 2,0x10));
    }
    local_18.top = *(int *)(param_1 + 0x40);
    local_18.bottom = *(int *)(param_1 + 0x44);
    if (local_18.top < local_18.bottom) {
      uVar4 = (*(int *)(param_1 + 0x58) != 7) - 1 & 0x200;
      DrawFrameControl(param_3,&local_18,4,CONCAT31((int3)(uVar4 >> 8),0x10));
      CVar2 = (*pcVar8)(0xf);
      SetBkColor(param_3,CVar2);
      iVar7 = ((local_18.right - local_18.left) + -0x10) / 2 + (uint)(uVar4 == 0x200);
      BitBlt(param_3,iVar7 + 2 + local_18.left,iVar7 + 2 + local_18.top,DAT_0064be08,DAT_0064be0c,
             DAT_0064be04,DAT_0064be14,0,0xcc0020);
    }
    local_18.top = *(int *)(param_1 + 0x44);
    local_18.bottom = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
    if (local_18.top < local_18.bottom) {
      uVar9 = *(uint *)(param_1 + 4) & 7;
      uVar4 = (*(int *)(param_1 + 0x58) != 8) - 1 & 0x200;
      uVar5 = (undefined3)(uVar4 >> 8);
      if (uVar9 != 1) {
        if (uVar9 == 4) {
          DrawFrameControl(param_3,&local_18,4,CONCAT31(uVar5,0x10));
          CVar2 = (*pcVar8)(0xf);
          SetBkColor(param_3,CVar2);
          iVar7 = ((local_18.right - local_18.left) + -0x10) / 2 + (uint)(uVar4 == 0x200);
          BitBlt(param_3,iVar7 + 2 + local_18.left,iVar7 + 2 + local_18.top,DAT_0064be08,
                 DAT_0064be0c,DAT_0064be04,DAT_0064be18,0,0xcc0020);
          return;
        }
        CVar2 = (*pcVar8)(0xf);
        SetBkColor(param_3,CVar2);
        local_28.top = local_18.top;
        local_28.left = local_18.left;
        local_28.right = local_18.right;
        local_28.bottom = local_18.bottom;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        return;
      }
      DrawFrameControl(param_3,&local_18,3,CONCAT31(uVar5,8));
    }
  }
  return;
}



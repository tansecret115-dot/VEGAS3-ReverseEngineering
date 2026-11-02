/* Module: vegas30.exe
   Function: FUN_0045cf00
   Address: 0045cf00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045cf00(uint param_1,int param_2,HDC param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  COLORREF CVar4;
  HGDIOBJ pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  iVar1 = param_1;
  pcVar9 = GetSysColor_exref;
  if (param_4 == 0) {
    iVar8 = -0x4000;
    iVar2 = 0x4000;
  }
  else {
    iVar8 = *(int *)(param_4 + 4);
    iVar2 = *(int *)(param_4 + 0xc);
  }
  if (iVar8 <= *(int *)(param_1 + 0x65c)) {
    iVar8 = *(int *)(param_1 + 0x65c);
  }
  if (*(int *)(param_1 + 0x664) <= iVar2) {
    iVar2 = *(int *)(param_1 + 0x664);
  }
  if (iVar8 < iVar2) {
    DVar3 = GetSysColor(0);
    SetBkColor(param_3,DVar3);
    DVar3 = GetSysColor(0x14);
    CVar4 = SetTextColor(param_3,DVar3);
    pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    pvVar5 = SelectObject(param_3,pvVar5);
    SetBkMode(param_3,2);
    PatBlt(param_3,*(int *)(param_1 + 0x658),*(int *)(param_1 + 0x688),*(int *)(param_1 + 0x668),
           *(int *)(param_1 + 0x68c) - *(int *)(param_1 + 0x688),0xf00021);
    SelectObject(param_3,pvVar5);
    SetTextColor(param_3,CVar4);
    SetTextAlign(param_3,0);
    DVar3 = GetSysColor(0x12);
    SetTextColor(param_3,DVar3);
    local_18.left = *(int *)(param_1 + 0x658);
    local_18.right = *(int *)(param_1 + 0x660);
    local_8 = *(uint *)(param_1 + 0x674);
    if (0 < (int)local_8) {
      uVar6 = *(uint *)(param_1 + 0xba8);
      if ((int)uVar6 < 0) {
        param_4 = 0;
      }
      else {
        param_4 = local_8;
        if ((int)uVar6 <= (int)local_8) {
          param_4 = uVar6;
        }
      }
      uVar6 = *(int *)(param_1 + 0xbac) + param_4;
      if ((int)uVar6 < 0) {
        param_1 = 0;
      }
      else {
        param_1 = local_8;
        if ((int)uVar6 <= (int)local_8) {
          param_1 = uVar6;
        }
      }
      local_18.top = *(int *)(iVar1 + 0x688) +
                     (int)(((ulonglong)*(uint *)(iVar1 + 0x684) * (ulonglong)param_4 +
                           (ulonglong)(local_8 >> 1)) / (ulonglong)local_8);
      local_18.bottom =
           *(int *)(iVar1 + 0x688) +
           (int)(((ulonglong)*(uint *)(iVar1 + 0x684) * (ulonglong)param_1 +
                 (ulonglong)(local_8 >> 1)) / (ulonglong)local_8);
      if ((local_18.bottom - local_18.top < 0xc) &&
         (uVar6 = (param_4 - param_1) + local_8, 0 < (int)uVar6)) {
        local_18.top = local_18.top -
                       (int)(((ulonglong)((local_18.top - local_18.bottom) + 0xc) *
                              (ulonglong)param_4 + (ulonglong)(uVar6 >> 1)) / (ulonglong)uVar6);
        local_18.bottom = local_18.top + 0xc;
        if (*(int *)(iVar1 + 0x68c) < local_18.top + 0xc) {
          local_18.bottom = *(int *)(iVar1 + 0x68c);
        }
        if (local_18.top < *(int *)(iVar1 + 0x688)) {
          local_18.top = *(int *)(iVar1 + 0x688);
        }
      }
      *(LONG *)(iVar1 + 0x6a0) = local_18.left;
      *(LONG *)(iVar1 + 0x6a4) = local_18.top;
      *(LONG *)(iVar1 + 0x6a8) = local_18.right;
      *(LONG *)(iVar1 + 0x6ac) = local_18.bottom;
      DVar3 = GetSysColor(0xf);
      SetBkColor(param_3,DVar3);
      local_28.top = local_18.top;
      local_28.left = local_18.left;
      local_28.right = local_18.right;
      local_28.bottom = local_18.bottom;
      ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
      DrawEdge(param_3,&local_18,4,0xf);
      pcVar9 = GetSysColor_exref;
      if ((*(byte *)(param_2 + 4) & 0x80) == 0) {
        param_4 = ((local_18.bottom - local_18.top) + -3) / 2;
        if (4 < (int)param_4) {
          param_4 = 5;
        }
        iVar8 = (local_18.right - local_18.left) + -3;
        DVar3 = GetSysColor(0x14);
        SetBkColor(param_3,DVar3);
        local_28.top = param_4 + local_18.top;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar8;
        local_28.bottom = local_28.top + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        local_28.top = local_18.bottom - param_4;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar8;
        local_28.bottom = local_28.top + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        DVar3 = GetSysColor(0x10);
        SetBkColor(param_3,DVar3);
        local_28.top = param_4 + -1 + local_18.top;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar8;
        local_28.bottom = local_28.top + 1;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        local_28.bottom = local_18.bottom - param_4;
        local_28.top = local_28.bottom + -1;
        local_28.left = local_18.left + 1;
        local_28.right = local_28.left + iVar8;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        pcVar9 = GetSysColor_exref;
      }
    }
    local_18.top = *(int *)(iVar1 + 0x65c);
    local_18.bottom = *(int *)(iVar1 + 0x688);
    if (local_18.top < local_18.bottom) {
      uVar6 = (*(int *)(iVar1 + 0x6b0) != 0x30001) - 1 & 0x200;
      DrawFrameControl(param_3,&local_18,3,(uint)(byte)((byte)(uVar6 >> 8) | 0x40) << 8);
      FUN_00412f60(param_3,&local_18,uVar6 >> 9,0);
    }
    local_18.top = *(int *)(iVar1 + 0x68c);
    local_18.bottom = *(int *)(iVar1 + 0x690);
    if (local_18.top < local_18.bottom) {
      uVar6 = (*(int *)(iVar1 + 0x6b0) != 0x30004) - 1 & 0x200;
      DrawFrameControl(param_3,&local_18,3,uVar6 | 0x4001);
      FUN_00412f60(param_3,&local_18,uVar6 >> 9,0);
    }
    local_18.top = *(int *)(iVar1 + 0x690);
    local_18.bottom = *(int *)(iVar1 + 0x694);
    if (local_18.top < local_18.bottom) {
      uVar6 = (*(int *)(iVar1 + 0x6b0) != 0x30005) - 1 & 0x200;
      FUN_00412f60(param_3,&local_18,uVar6 >> 9,1);
      CVar4 = (*pcVar9)(0xf);
      SetBkColor(param_3,CVar4);
      uVar6 = (uint)(uVar6 == 0x200);
      BitBlt(param_3,((local_18.right - DAT_0064be08) + local_18.left) / 2 + uVar6,
             ((local_18.bottom - DAT_0064be0c) + local_18.top) / 2 + uVar6,DAT_0064be08,DAT_0064be0c
             ,DAT_0064be04,DAT_0064be10,0,0xcc0020);
    }
    local_18.top = *(int *)(iVar1 + 0x694);
    local_18.bottom = *(int *)(iVar1 + 0x698);
    if (local_18.top < local_18.bottom) {
      FUN_00412f60(param_3,&local_18,((*(int *)(iVar1 + 0x6b0) != 0x30006) - 1 & 0x200) >> 9,1);
    }
    local_18.top = *(int *)(iVar1 + 0x698);
    local_18.bottom = *(int *)(iVar1 + 0x69c);
    if (local_18.top < local_18.bottom) {
      uVar6 = (*(int *)(iVar1 + 0x6b0) != 0x30007) - 1 & 0x200;
      FUN_00412f60(param_3,&local_18,uVar6 >> 9,1);
      CVar4 = (*pcVar9)(0xf);
      SetBkColor(param_3,CVar4);
      uVar6 = (uint)(uVar6 == 0x200);
      BitBlt(param_3,((local_18.right - DAT_0064be08) + local_18.left) / 2 + uVar6,
             ((local_18.bottom - DAT_0064be0c) + local_18.top) / 2 + uVar6,DAT_0064be08,DAT_0064be0c
             ,DAT_0064be04,DAT_0064be14,0,0xcc0020);
    }
    local_18.top = *(int *)(iVar1 + 0x69c);
    local_18.bottom = *(int *)(iVar1 + 0x66c) + *(int *)(iVar1 + 0x65c);
    if (local_18.top < local_18.bottom) {
      uVar6 = *(uint *)(param_2 + 4) & 7;
      uVar7 = (*(int *)(iVar1 + 0x6b0) != 0x30008) - 1 & 0x200;
      if (uVar6 != 1) {
        if (uVar6 == 4) {
          FUN_00412f60(param_3,&local_18,uVar7 >> 9,1);
          CVar4 = (*pcVar9)(0xf);
          SetBkColor(param_3,CVar4);
          BitBlt(param_3,((local_18.right - DAT_0064be08) + local_18.left) / 2 +
                         (uint)(uVar7 == 0x200),
                 ((local_18.bottom - DAT_0064be0c) + local_18.top) / 2 + (uint)(uVar7 == 0x200),
                 DAT_0064be08,DAT_0064be0c,DAT_0064be04,DAT_0064be18,0,0xcc0020);
          return;
        }
        CVar4 = (*pcVar9)(0xf);
        SetBkColor(param_3,CVar4);
        local_28.top = local_18.top;
        local_28.left = local_18.left;
        local_28.right = local_18.right;
        local_28.bottom = local_18.bottom;
        ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        return;
      }
      FUN_00412f60(param_3,&local_18,uVar7 >> 9,1);
    }
  }
  return;
}



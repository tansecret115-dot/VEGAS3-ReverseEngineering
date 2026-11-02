/* Module: vegas30.exe
   Function: FUN_00439000
   Address: 00439000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439000(int param_1,HDC param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint color;
  uint color_00;
  COLORREF color_01;
  COLORREF color_02;
  UINT UVar3;
  HGDIOBJ pvVar4;
  HGDIOBJ pvVar5;
  int iVar6;
  code *pcVar7;
  UINT options;
  RECT *lprect;
  LPCSTR pCVar8;
  undefined4 uVar9;
  tagSIZE local_38;
  int local_30;
  int local_2c;
  tagSIZE local_28;
  RECT local_20;
  RECT local_10;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    FUN_00438b70(param_1);
    FUN_00438c40((LPCSTR)(param_1 + 0xb4));
    iVar2 = lstrlenA((LPCSTR)(param_1 + 0xb4));
    *(int *)(param_1 + 0x134) = iVar2;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_20.left = *param_3;
  local_20.top = param_3[1];
  local_20.right = param_3[2];
  local_20.bottom = param_3[3];
  color = DAT_00647af4;
  if ((DAT_00647af4 & 0x4000000) != 0) {
    color = GetSysColor(DAT_00647af4 & 0xffffff);
  }
  color_00 = DAT_00647af8;
  if ((DAT_00647af8 & 0x4000000) != 0) {
    color_00 = GetSysColor(DAT_00647af8 & 0xffffff);
  }
  if ((*(uint *)(param_1 + 0xac) & 0x20000) != 0) {
    color_00 = 0xff;
    color = 0;
  }
  color_01 = SetBkColor(param_2,color_00);
  color_02 = SetTextColor(param_2,color);
  SetBkMode(param_2,2);
  pCVar8 = (LPCSTR)(param_1 + 0xd4);
  UVar3 = lstrlenA(pCVar8);
  pcVar7 = ExtTextOutA_exref;
  if (0 < (int)UVar3) {
    if (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x94) < 100) {
      uVar9 = 0x6e;
    }
    else {
      uVar9 = 100;
    }
    pvVar4 = (HGDIOBJ)_SfGetUIFont_4(uVar9);
    SelectObject(param_2,pvVar4);
    local_38.cx = 0;
    local_38.cy = 0;
    local_28.cx = 0;
    local_28.cy = 0;
    GetTextExtentPointA(param_2,pCVar8,UVar3,&local_38);
    SetTextAlign(param_2,0);
    ExtTextOutA(param_2,local_20.left + 1,local_20.top,4,&local_20,pCVar8,UVar3,(INT *)0x0);
    local_20.left = local_20.left + local_38.cx;
    pCVar8 = (LPCSTR)(param_1 + 0xf4);
    UVar3 = lstrlenA(pCVar8);
    pcVar7 = ExtTextOutA_exref;
    if (0 < (int)UVar3) {
      GetTextExtentPointA(param_2,pCVar8,UVar3,&local_28);
      SetTextAlign(param_2,0);
      pcVar7 = ExtTextOutA_exref;
      ExtTextOutA(param_2,local_20.left + 1,local_20.top,4,&local_20,pCVar8,UVar3,(INT *)0x0);
    }
    local_20.left = local_20.left - local_38.cx;
    local_10.right = local_20.left + 1;
    local_10.top = local_20.top;
    local_10.bottom = local_20.top + local_38.cy;
    local_10.left = local_20.left;
    (*pcVar7)(param_2,0,0,2,&local_10,0,0,0);
    if (local_38.cx < local_20.right - local_20.left) {
      local_10.left = local_28.cx + local_20.left + 1 + local_38.cx;
      local_10.top = local_20.top;
      local_10.right =
           (((local_10.left - local_20.left) - local_28.cx) - local_38.cx) + -1 + local_20.right;
      local_10.bottom = local_20.top + local_38.cy;
      (*pcVar7)(param_2,0,0,2,&local_10,0,0,0);
    }
    local_20.top = local_20.top + local_38.cy;
  }
  iVar2 = FUN_00438b50(param_1);
  if (iVar2 == 0) {
    pvVar4 = SelectObject(param_2,*(HGDIOBJ *)(param_1 + 0x8c));
    GetTextExtentPointA(param_2,(LPCSTR)(param_1 + 0xb4),*(int *)(param_1 + 0x134),&local_28);
    local_38.cx = *(int *)(param_1 + 0xa0);
    local_2c = *(int *)(param_1 + 0xa4);
    if (param_3[2] - *param_3 < param_3[3] - param_3[1]) {
      UVar3 = 10;
      local_30 = local_28.cy;
      iVar2 = local_28.cx;
    }
    else {
      UVar3 = 8;
      local_30 = local_28.cx;
      iVar2 = local_28.cy;
    }
    local_30 = local_38.cx + local_30;
    local_38.cy = local_2c - iVar2;
    SetTextAlign(param_2,UVar3);
    (*pcVar7)(param_2,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),4,&local_20,
              (LPCSTR)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x134),0);
    if (local_38.cy < local_20.top) {
      local_38.cy = local_20.top;
    }
    FUN_00468820(param_2,&local_20,&local_38);
  }
  else {
    pCVar8 = (LPCSTR)(param_1 + 0xb4);
    UVar3 = lstrlenA(pCVar8);
    bVar1 = true;
    pvVar4 = (HGDIOBJ)_SfGetUIFont_4(0x81);
    pvVar4 = SelectObject(param_2,pvVar4);
    GetTextExtentPoint32A(param_2,pCVar8,UVar3,&local_38);
    iVar2 = local_38.cx / (int)UVar3;
    if (local_20.right - local_20.left < local_38.cx + iVar2 * 2) {
      pvVar5 = (HGDIOBJ)_SfGetUIFont_4(0x68);
      SelectObject(param_2,pvVar5);
      GetTextExtentPoint32A(param_2,pCVar8,UVar3,&local_38);
      iVar2 = local_38.cx / (int)UVar3;
      if (local_20.right - local_20.left < local_38.cx + iVar2 * 2) {
        pvVar5 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
        SelectObject(param_2,pvVar5);
        GetTextExtentPoint32A(param_2,pCVar8,UVar3,&local_38);
        iVar2 = local_38.cx / (int)UVar3;
        if (local_20.right - local_20.left < local_38.cx + iVar2 * 2) {
          bVar1 = false;
        }
      }
    }
    iVar6 = (local_20.bottom - local_38.cy) - local_20.top;
    if (bVar1) {
      SetTextAlign(param_2,8);
      lprect = &local_20;
      iVar6 = local_20.bottom - iVar6 / 2;
      options = 6;
      iVar2 = iVar2 + local_20.left;
    }
    else {
      local_10.top = local_20.top;
      UVar3 = 0;
      lprect = &local_10;
      pCVar8 = (LPCSTR)0x0;
      options = 2;
      iVar6 = 0;
      local_10.right = local_20.right;
      local_10.bottom = local_20.bottom;
      iVar2 = 0;
      local_10.left = local_20.left;
    }
    ExtTextOutA(param_2,iVar2,iVar6,options,lprect,pCVar8,UVar3,(INT *)0x0);
  }
  SelectObject(param_2,pvVar4);
  SetBkColor(param_2,color_01);
  SetTextColor(param_2,color_02);
  SetTextAlign(param_2,0);
  return;
}



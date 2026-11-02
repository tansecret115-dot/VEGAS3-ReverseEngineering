/* Module: vegas30.exe
   Function: FUN_004d0910
   Address: 004d0910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d0910(HDC param_1,int param_2,int param_3,uint param_4)

{
  RECT *lprect;
  LPRECT qrc;
  uint *puVar1;
  uint *puVar2;
  LPCSTR lpString;
  HIMAGELIST p_Var3;
  HGDIOBJ pvVar4;
  COLORREF *pCVar5;
  DWORD DVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  HWND pHVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  HIMAGELIST p_Var15;
  bool bVar16;
  UINT UVar17;
  char local_17c [4];
  UINT local_178;
  uint local_174;
  HIMAGELIST local_170;
  uint local_16c;
  HIMAGELIST local_168;
  uint *local_164;
  int local_160;
  int local_15c;
  UINT local_158;
  int local_154;
  tagRECT local_150;
  int local_140;
  int local_13c;
  uint *local_138;
  UINT local_134;
  COLORREF local_130;
  COLORREF local_12c;
  RECT local_128;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  CHAR local_104 [259];
  undefined1 local_1;
  
  p_Var15 = DAT_0064b314;
  local_138 = *(uint **)(param_2 + 0x5d0);
  local_178 = *(UINT *)(param_3 + 0x69c);
  local_170 = DAT_0064b314;
  puVar2 = *(uint **)(local_178 + 0x54);
  local_168 = DAT_0064b318;
  if (DAT_0064b318 == (HIMAGELIST)0x0) {
    local_168 = DAT_0064b314;
  }
  pvVar4 = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_1,pvVar4);
  pCVar5 = (COLORREF *)_SfGetUIFontSize_4(100);
  local_130 = *pCVar5;
  local_12c = pCVar5[1];
  local_13c = DAT_0064b30c + 4;
  local_160 = ((local_13c - DAT_0064b30c) + 1) / 2;
  local_15c = ((local_13c - DAT_0064b310) + 1) / 2;
  DVar6 = GetSysColor(0xf);
  SetBkColor(param_1,DVar6);
  local_154 = 0;
  local_158 = 0;
  local_174 = 0;
  if ((param_3 == *(int *)(param_2 + 0xce4)) && ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
    local_154 = *(int *)(param_2 + 0x174);
    local_174 = (uint)(*(int *)(param_2 + 0x3b8) == local_154);
    local_158 = (-(uint)(local_174 != 0) & 0xfffffffe) + 4;
  }
  if ((*local_138 & 0x1000) != 0) {
    local_150.right = puVar2[5];
    local_150.left = local_150.right - 1;
    local_150.top = *(int *)(local_178 + 0x1c) + 1;
    local_150.bottom = *(int *)(local_178 + 0x24) + -1;
    DrawEdge(param_1,&local_150,4,1);
    local_150.right = local_150.left;
    if (*(int *)(param_2 + 0x390) + 0x10 < local_150.top) {
      local_150.top = local_150.top + -4;
    }
    local_150.left = *(int *)(param_2 + 0x38c);
    FUN_0044ed00(param_1,&local_150,4,0x804);
    if ((*(byte *)(local_178 + 0x30) & 0x10) != 0) {
      DVar6 = GetSysColor(0x10);
      local_16c = SetBkColor(param_1,DVar6);
      local_128.left = local_150.left + 8;
      local_128.right = local_150.left + 0xc;
      local_128.top = local_150.top;
      local_128.bottom = local_150.bottom;
      ExtTextOutA(param_1,0,0,2,&local_128,(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_1,local_16c);
    }
  }
  FUN_004d05e0(param_2,param_3,param_1,puVar2 + 1);
  if (param_4 == *(uint *)(param_2 + 0xcbc)) {
    uVar7 = puVar2[1];
    PatBlt(param_1,uVar7 + 2,puVar2[4] - 2,(puVar2[3] - uVar7) + -4,1,0xff0062);
  }
  if ((int)puVar2[5] < (int)puVar2[7]) {
    uVar7 = 0;
    if (local_154 == 0x100c1) {
      DrawEdge(param_1,(LPRECT)(puVar2 + 5),local_158,0x80f);
      uVar7 = local_174;
    }
    if (((*(uint *)(param_3 + 0x10) & 0x10000) == 0) ||
       (iVar11 = 0x15, (*(uint *)(param_2 + 0x18) & 0x80000) != 0)) {
      iVar11 = 0x13;
    }
    iVar13 = (uVar7 != 0) + 1;
    ImageList_Draw(p_Var15,iVar11,param_1,((LPRECT)(puVar2 + 5))->left + iVar13,puVar2[6] + iVar13,0
                  );
  }
  if ((int)puVar2[9] < (int)puVar2[0xb]) {
    uVar7 = 0;
    if (local_154 == 0x100c2) {
      DrawEdge(param_1,(LPRECT)(puVar2 + 9),local_158,0x80f);
      uVar7 = local_174;
    }
    iVar11 = (uVar7 != 0) + 1;
    ImageList_Draw(p_Var15,(*(uint *)(param_2 + 0x18) & 0x80000 | 0xa00000) >> 0x13,param_1,
                   ((LPRECT)(puVar2 + 9))->left + iVar11,puVar2[10] + iVar11,0);
  }
  p_Var3 = local_170;
  if ((int)puVar2[0x11] < (int)puVar2[0x13]) {
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100c5)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100c5) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100c5))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    FUN_00468c00(param_1,puVar2 + 0x11,local_160,local_15c,0,local_170,local_168,0,1,uVar12,uVar14,
                 *(uint *)(param_3 + 0x10) >> 1 & 1,0);
    p_Var15 = p_Var3;
  }
  p_Var3 = local_170;
  if ((int)puVar2[0x15] < (int)puVar2[0x17]) {
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100c6)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100c6) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100c6))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    FUN_00468c00(param_1,puVar2 + 0x15,local_160,local_15c,2,local_170,local_168,0,1,uVar12,uVar14,
                 *(uint *)(param_3 + 0x10) & 1,0);
    p_Var15 = p_Var3;
  }
  p_Var3 = local_170;
  if ((int)puVar2[0x19] < (int)puVar2[0x1b]) {
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100c7)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100c7) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100c7))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    FUN_00468c00(param_1,puVar2 + 0x19,local_160,local_15c,4,local_170,local_168,0,1,uVar12,uVar14,
                 *(uint *)(param_3 + 0x10) >> 7 & 1,0);
    p_Var15 = p_Var3;
  }
  qrc = (LPRECT)(puVar2 + 0x21);
  if ((int)puVar2[0x21] < (int)puVar2[0x23]) {
    pvVar4 = (HGDIOBJ)_SfGetUIFont_4(0x68);
    local_164 = SelectObject(param_1,pvVar4);
    local_134 = SetTextAlign(param_1,6);
    local_17c[1] = 0;
    local_17c[2] = 0;
    local_17c[3] = 0;
    local_178 = 1;
    local_17c[0] = *(char *)(param_3 + 0x44) + 'A';
    if ((*(byte *)(param_3 + 0x10) & 0x80) != 0) {
      iVar11 = *(int *)(param_3 + 0x3c) + 1;
      local_174 = iVar11 / 10;
      if (local_174 != 0) {
        local_17c[0] = "01234567890"[local_174];
      }
      uVar7 = (uint)(local_174 != 0);
      local_17c[uVar7] = "01234567890"[iVar11 % 10];
      local_178 = uVar7 + 1;
      if (*(int *)(param_3 + 0x40) == 1) {
        pcVar8 = (char *)_SfGetString_8(DAT_00647204,0x5601);
        local_17c[uVar7 + 1] = *pcVar8;
      }
      else {
        if (*(int *)(param_3 + 0x40) != 2) goto LAB_004d0efe;
        pcVar8 = (char *)_SfGetString_8(DAT_00647204,0x5602);
        local_17c[uVar7 + 1] = *pcVar8;
      }
      local_178 = uVar7 + 2;
    }
LAB_004d0efe:
    if ((local_170 == local_168) || (local_140 = 0, DAT_0064b3dc != 0)) {
      local_140 = 1;
    }
    iVar11 = 0;
    local_174 = 0;
    local_16c = 0;
    if (((*puVar2 & 0x100) == 0) &&
       (((*(int *)(param_2 + 0xa4) != 3 || (*(uint *)(param_2 + 0xce0) != param_4)) ||
        (*(int *)(param_2 + 0x3b8) != 0x100c8)))) {
      if (((*(int *)(param_2 + 0x174) == 0x100c8) &&
          (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100c8))) &&
         (local_174 = 1, local_140 != 0)) {
        UVar17 = 4;
        goto LAB_004d0f99;
      }
    }
    else {
      iVar11 = 1;
      local_16c = 1;
      UVar17 = 2;
LAB_004d0f99:
      local_174 = 1;
      DrawEdge(param_1,qrc,UVar17,0x80f);
    }
    if ((*(byte *)(param_3 + 0x10) & 0x80) == 0) {
      p_Var15 = DAT_0064b43c;
      if (local_174 == 0) {
        p_Var15 = DAT_0064b438;
      }
      if (*(int *)(param_3 + 0x44) == 0) {
        iVar13 = 0x1a;
      }
      else {
        iVar13 = *(int *)(param_3 + 0x44) + -1;
      }
      ImageList_Draw(p_Var15,iVar13,param_1,
                     (int)((puVar2[0x23] - qrc->left) - DAT_0064b430) / 2 + qrc->left + iVar11,
                     (int)((puVar2[0x24] - puVar2[0x22]) - DAT_0064b434) / 2 + puVar2[0x22] + 1 +
                     iVar11,0);
    }
    else {
      lVar9 = Mixer_NumBusTypePorts(0x100);
      iVar13 = qrc->left;
      if (lVar9 < 2) {
        local_16c = puVar2[0x22];
        iVar13 = (int)((puVar2[0x23] - iVar13) - DAT_0064b430) / 2 + qrc->left + iVar11;
        iVar11 = (int)((puVar2[0x24] - local_16c) - DAT_0064b434) / 2 + local_16c + iVar11;
        p_Var15 = DAT_0064b318;
        if (local_174 == 0) {
          p_Var15 = DAT_0064b314;
        }
        if (*(int *)(param_3 + 0x40) == 1) {
          ImageList_Draw(p_Var15,0x1c,param_1,iVar13,iVar11,0);
        }
        else {
          ImageList_Draw(p_Var15,(*(int *)(param_3 + 0x40) == 2) + 0xc,param_1,iVar13,iVar11,0);
        }
      }
      else {
        iVar11 = (int)(puVar2[0x23] - iVar13) / 2 + iVar13 + local_16c;
        iVar13 = (int)((local_13c - local_12c) + -2) / 2 + puVar2[0x22] + local_16c;
        local_130 = SetTextColor(param_1,0x202020);
        local_140 = iVar13 + 1;
        ExtTextOutA(param_1,iVar11,local_140,4,qrc,local_17c,local_178,(INT *)0x0);
        local_118 = iVar11 + 1;
        ExtTextOutA(param_1,local_118,iVar13,4,qrc,local_17c,local_178,(INT *)0x0);
        SetTextColor(param_1,0xc0c0c0);
        local_13c = iVar13 + -1;
        ExtTextOutA(param_1,iVar11,local_13c,4,qrc,local_17c,local_178,(INT *)0x0);
        local_16c = iVar11 - 1;
        ExtTextOutA(param_1,local_16c,iVar13,4,qrc,local_17c,local_178,(INT *)0x0);
        SetTextColor(param_1,0xf0f0f0);
        ExtTextOutA(param_1,local_16c,local_13c,4,qrc,local_17c,local_178,(INT *)0x0);
        SetTextColor(param_1,0);
        ExtTextOutA(param_1,local_118,local_140,4,qrc,local_17c,local_178,(INT *)0x0);
        SetTextColor(param_1,(-(uint)(local_174 != 0) & 0x5ec081) + 0xa0a0a0);
        ExtTextOutA(param_1,iVar11,iVar13,4,qrc,local_17c,local_178,(INT *)0x0);
        SetTextColor(param_1,local_130);
      }
    }
    SetTextAlign(param_1,local_134);
    SelectObject(param_1,local_164);
    p_Var15 = local_170;
  }
  iVar11 = DAT_0064b3c8;
  lprect = (RECT *)(puVar2 + 0xd);
  local_114 = puVar2[0xd] - 1;
  local_110 = puVar2[0xe] - 1;
  local_10c = puVar2[0xf] + 1;
  local_108 = puVar2[0x10] + 1;
  if (lprect->left < (int)puVar2[0xf]) {
    puVar1 = local_138 + 0xa3;
    FUN_0044f550(param_1,&local_114,local_138 + 0xca,local_138[0xc9],puVar1);
    if (*puVar1 == 0) {
      iVar11 = 1;
    }
    lpString = *(LPCSTR *)(param_3 + 0xc);
    if ((lpString == (LPCSTR)0x0) || (iVar13 = lstrlenA(lpString), iVar13 == 0)) {
      iVar13 = 0x11;
    }
    else {
      iVar13 = 0x12;
    }
    DVar6 = GetSysColor(iVar13);
    local_134 = SetTextColor(param_1,DVar6);
    if (lpString == (LPCSTR)0x0) {
      local_104[0] = '\0';
    }
    else {
      lstrcpynA(local_104,lpString,0x104);
      local_1 = 0;
    }
    _SfCalcStringEllipsis_16(param_1,local_104,0x104,puVar2[0xf] - lprect->left);
    UVar17 = lstrlenA(local_104);
    local_164 = (uint *)SetTextAlign(param_1,0);
    ExtTextOutA(param_1,iVar11 + lprect->left,puVar2[0xe] + 1,4,lprect,local_104,UVar17,(INT *)0x0);
    SetTextAlign(param_1,(UINT)local_164);
    pHVar10 = GetFocus();
    if ((pHVar10 == *(HWND *)(param_2 + 4)) && (*(int *)(param_2 + 0xb24) != 0)) {
      FUN_004ca930(param_2);
    }
    SetTextColor(param_1,local_134);
    p_Var15 = local_170;
  }
  local_164 = puVar2 + 0x25;
  if ((int)puVar2[0x25] < (int)puVar2[0x27]) {
    iVar11 = FUN_005d1590(param_3);
    p_Var15 = local_170;
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100ca)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100ca) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100ca))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    FUN_00468c00(param_1,local_164,local_160 + -1,local_15c,(iVar11 != 0) + '\x10',local_170,
                 local_168,0,1,uVar12,uVar14,*puVar2 >> 9 & 1,0);
  }
  p_Var3 = local_170;
  if ((int)puVar2[0x1d] < (int)puVar2[0x1f]) {
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100d5)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100d5) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100d5))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    FUN_00468c00(param_1,puVar2 + 0x1d,local_160,local_15c,0x34,local_170,local_168,0,1,uVar12,
                 uVar14,*(uint *)(param_3 + 0x634) & 1,0);
    p_Var15 = p_Var3;
  }
  p_Var3 = local_170;
  if ((int)puVar2[0x29] < (int)puVar2[0x2b]) {
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100cb)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100cb) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100cb))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    FUN_00468c00(param_1,puVar2 + 0x29,local_160,local_15c,10,local_170,local_168,0,1,uVar12,uVar14,
                 *puVar2 >> 10 & 1,0);
    p_Var15 = p_Var3;
  }
  if ((int)puVar2[0x31] < (int)puVar2[0x33]) {
    local_128.right = puVar2[0x33] - 2;
    local_128.top = puVar2[0x32] + 2;
    local_128.left = puVar2[0x31] + 2;
    local_128.bottom = puVar2[0x34] - 2;
    bVar16 = (*(uint *)(param_3 + 0x10) & 0x80) != 0;
    if ((bVar16) && ((*puVar2 & 0x4000) != 0)) {
      if ((*puVar2 & 0x10000) == 0) {
        UVar17 = local_158;
        if (local_154 != 0x100d0) goto LAB_004d165c;
      }
      else {
        UVar17 = 2;
      }
      DrawEdge(param_1,(LPRECT)(puVar2 + 0x31),UVar17,0x80f);
    }
LAB_004d165c:
    FUN_004c4bd0(param_1,&local_128,param_3,bVar16);
  }
  if ((int)puVar2[0x35] < (int)puVar2[0x37]) {
    _FaderInst_Draw_8(puVar2[0x46],param_1);
  }
  if ((int)puVar2[0x41] < (int)puVar2[0x43]) {
    *puVar2 = (*(uint *)(param_3 + 0x10) & 0x10) << 9 | *puVar2 & 0xffffdfff;
    _MeterInst_Draw_16(puVar2[0xc9],param_1,&LAB_004d0550,puVar2);
  }
  if ((int)puVar2[0x3b] <= (int)puVar2[0x39]) goto LAB_004d17af;
  local_150.left = puVar2[0x39] + 2;
  local_150.right = puVar2[0x3b] - 2;
  local_150.top = puVar2[0x3a] + 2;
  local_164 = (uint *)local_138[2];
  local_150.bottom = puVar2[0x3c] - 2;
  if ((int)local_138[3] < 2) {
    iVar11 = 0;
  }
  else {
    iVar11 = local_150.bottom - local_150.top;
    if (iVar11 != 0) {
      if ((*puVar2 & 0x1000) == 0) {
        UVar17 = local_158;
        if (local_154 == 0x100d0) goto LAB_004d1760;
      }
      else {
        UVar17 = 2;
LAB_004d1760:
        DrawEdge(param_1,(LPRECT)(puVar2 + 0x39),UVar17,0x80f);
      }
      ImageList_Draw(p_Var15,7,param_1,puVar2[0x3b] - iVar11,puVar2[0x3a] + 4,0);
    }
  }
  local_150.right = local_150.right - iVar11;
  FUN_004c4bd0(param_1,&local_150,param_3,local_164);
LAB_004d17af:
  if ((int)puVar2[0x3d] < (int)puVar2[0x3f]) {
    _TrackbarInst_Draw_8(puVar2[0x93],param_1);
  }
  return;
}



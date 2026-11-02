/* Module: vegas30.exe
   Function: FUN_004d17e0
   Address: 004d17e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d17e0(HDC param_1,int param_2,int param_3,uint param_4)

{
  RECT *lprect;
  LPRECT qrc;
  uint *puVar1;
  uint uVar2;
  LPCSTR lpString;
  HGDIOBJ h;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  COLORREF color;
  UINT c;
  UINT align;
  HWND pHVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  HIMAGELIST p_Var10;
  code *pcVar11;
  int unaff_EBP;
  uint uVar12;
  HIMAGELIST p_Var13;
  int iVar14;
  undefined1 local_180 [12];
  int local_174;
  uint local_170;
  uint local_16c;
  UINT local_168;
  int local_164;
  HIMAGELIST local_160;
  HIMAGELIST local_15c;
  int local_158;
  int local_154;
  tagRECT local_150;
  COLORREF local_140;
  int local_13c;
  int local_138;
  tagRECT local_134;
  undefined1 local_124 [4];
  int local_120;
  int local_11c;
  CHAR local_104 [259];
  undefined1 local_1;
  
  iVar7 = *(int *)(param_3 + 0x69c);
  puVar1 = *(uint **)(iVar7 + 0x54);
  local_13c = *(int *)(param_2 + 0x5d0);
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_1,h);
  _SfGetUIFontSize_4(100);
  local_160 = DAT_0064b314;
  local_180._4_4_ = DAT_0064b318;
  if (DAT_0064b318 == (HIMAGELIST)0x0) {
    local_180._4_4_ = DAT_0064b314;
  }
  local_158 = (((DAT_0064b30c + 4) - DAT_0064b30c) + 1) / 2;
  local_154 = (((DAT_0064b30c + 4) - DAT_0064b310) + 1) / 2;
  DVar3 = GetSysColor(0xf);
  SetBkColor(param_1,DVar3);
  local_164 = 0;
  local_168 = 0;
  local_180._0_4_ = 0;
  if ((param_3 == *(int *)(param_2 + 0xce4)) && ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
    local_164 = *(int *)(param_2 + 0x174);
    local_180._0_4_ = ZEXT14(*(int *)(param_2 + 0x3b8) == local_164);
    local_168 = (-(uint)(local_180._0_4_ != 0) & 0xfffffffe) + 4;
  }
  if (((*(uint *)(param_3 + 0x10) & 0x80000) != 0) && ((*(uint *)(param_3 + 0x10) & 0x10000) == 0))
  {
    local_15c = (HIMAGELIST)FUN_005be610(1,local_124);
    local_140 = local_11c + local_120;
    local_138 = local_120;
    iVar4 = FUN_005382e0(1);
    iVar14 = 0;
    local_180._8_4_ = puVar1[0x45];
    uVar12 = puVar1[0x46];
    local_170 = puVar1[0x47];
    local_16c = iVar4 + uVar12;
    if (0 < (int)local_15c) {
      do {
        iVar5 = 0;
        local_150.left = 0;
        local_150.top = 0;
        if (local_138 <= iVar14) {
          local_150.left = 0x47ae147b;
          local_150.top = 0x3fa47ae1;
          iVar5 = ((iVar14 < (int)local_140) - 1 & 0xff0100ff) + 0xff0000;
        }
        FUN_004d2520(param_1,param_2,param_3,iVar14,local_124,local_180._8_4_,uVar12,local_170,
                     local_16c,local_150.left,local_150.top,iVar5);
        uVar12 = uVar12 + iVar4;
        local_16c = local_16c + iVar4;
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)local_15c);
    }
  }
  if (puVar1[0x38] != puVar1[0x36]) {
    local_150.right = puVar1[5];
    local_150.left = local_150.right - 1;
    local_150.top = *(int *)(iVar7 + 0x1c) + 1;
    local_150.bottom = *(int *)(iVar7 + 0x24) + -1;
    DrawEdge(param_1,&local_150,4,1);
    local_150.right = local_150.left;
    local_150.left = *(LONG *)(param_2 + 0x38c);
    if (*(int *)(param_2 + 0x390) + 0x10 < local_150.top) {
      local_150.top = local_150.top + -2;
    }
    FUN_0044ed00(param_1,&local_150,4,0x804);
  }
  FUN_004d05e0(param_2,param_3,param_1,puVar1 + 1);
  if (param_4 == *(uint *)(param_2 + 0xcbc)) {
    uVar12 = puVar1[1];
    PatBlt(param_1,uVar12 + 2,puVar1[4] - 2,(puVar1[3] - uVar12) + -4,1,0xff0062);
  }
  p_Var13 = local_160;
  if ((int)puVar1[5] < (int)puVar1[7]) {
    uVar12 = 0;
    if (local_164 == 0x100c1) {
      DrawEdge(param_1,(LPRECT)(puVar1 + 5),local_168,0x80f);
      uVar12 = local_180._0_4_;
    }
    p_Var13 = local_160;
    if (((*(uint *)(param_3 + 0x10) & 0x10000) == 0) ||
       (iVar7 = 0x15, (*(uint *)(param_2 + 0x18) & 0x80000) != 0)) {
      iVar7 = 0x13;
    }
    iVar4 = (uVar12 != 0) + 1;
    ImageList_Draw(local_160,iVar7,param_1,((LPRECT)(puVar1 + 5))->left + iVar4,puVar1[6] + iVar4,0)
    ;
  }
  if ((int)puVar1[9] < (int)puVar1[0xb]) {
    uVar12 = 0;
    if (local_164 == 0x100c2) {
      DrawEdge(param_1,(LPRECT)(puVar1 + 9),local_168,0x80f);
      uVar12 = local_180._0_4_;
    }
    iVar7 = (uVar12 != 0) + 1;
    ImageList_Draw(p_Var13,(*(uint *)(param_2 + 0x18) & 0x80000 | 0xa00000) >> 0x13,param_1,
                   ((LPRECT)(puVar1 + 9))->left + iVar7,puVar1[10] + iVar7,0);
  }
  if ((int)puVar1[0xd] < (int)puVar1[0xf]) {
    uVar12 = 0;
    if (local_164 == 0x100c3) {
      DrawEdge(param_1,(LPRECT)(puVar1 + 0xd),local_168,0x80f);
      uVar12 = local_180._0_4_;
    }
    iVar7 = (uVar12 != 0) + 1;
    ImageList_Draw(p_Var13,(*(uint *)(param_3 + 0x10) >> 0x12 & 1) + 0x18,param_1,
                   ((LPRECT)(puVar1 + 0xd))->left + iVar7,puVar1[0xe] + iVar7,0);
  }
  if ((int)puVar1[0x11] < (int)puVar1[0x13]) {
    uVar12 = 0;
    if (local_164 == 0x100c4) {
      DrawEdge(param_1,(LPRECT)(puVar1 + 0x11),local_168,0x80f);
      uVar12 = local_180._0_4_;
    }
    iVar7 = (uVar12 != 0) + 1;
    ImageList_Draw(p_Var13,(*(uint *)(param_3 + 0x10) >> 0x13 & 1) + 0x28,param_1,
                   ((LPRECT)(puVar1 + 0x11))->left + iVar7,puVar1[0x12] + iVar7,0);
  }
  p_Var10 = (HIMAGELIST)local_180._4_4_;
  if ((int)puVar1[0x19] < (int)puVar1[0x1b]) {
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100c5)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100c5) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100c5))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00468c00(param_1,puVar1 + 0x19,local_158,local_154,0,p_Var13,local_180._4_4_,0,1,uVar8,uVar9
                 ,*(uint *)(param_3 + 0x10) >> 1 & 1,0);
  }
  if ((int)puVar1[0x1d] < (int)puVar1[0x1f]) {
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100c6)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100c6) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100c6))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00468c00(param_1,puVar1 + 0x1d,local_158,local_154,2,p_Var13,p_Var10,0,1,uVar8,uVar9,
                 *(uint *)(param_3 + 0x10) & 1,0);
  }
  if ((int)puVar1[0x29] < (int)puVar1[0x2b]) {
    iVar7 = 0;
    if (*(int **)(param_3 + 0x78) != (int *)0x0) {
      iVar7 = **(int **)(param_3 + 0x78);
    }
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100ca)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100ca) &&
        (p_Var10 = (HIMAGELIST)local_180._4_4_,
        *(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100ca))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00468c00(param_1,puVar1 + 0x29,local_158 + -1,local_154,(iVar7 != 0) + '\x10',p_Var13,
                 p_Var10,0,1,uVar8,uVar9,*puVar1 >> 9 & 1,0);
  }
  local_180._0_4_ = puVar1 + 0x2d;
  if ((int)puVar1[0x2d] < (int)puVar1[0x2f]) {
    iVar7 = FUN_00522ac0();
    local_15c = p_Var10;
    if (iVar7 == 0) {
      local_15c = p_Var13;
    }
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100ce)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100ce) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100ce))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00468c00(param_1,local_180._0_4_,local_158,local_154,0x12,local_15c,p_Var10,0,1,uVar8,uVar9,
                 *puVar1 >> 10 & 1,0);
  }
  qrc = (LPRECT)(puVar1 + 0x35);
  pcVar11 = SetBkColor_exref;
  if ((int)puVar1[0x35] < (int)puVar1[0x37]) {
    if (((*(byte *)(param_3 + 0x44) & 0x20) != 0) && (param_4 != *(uint *)(param_2 + 0xbc0))) {
      DVar3 = GetSysColor(0x10);
      pcVar11 = SetBkColor_exref;
      color = SetBkColor(param_1,DVar3);
      local_16c = puVar1[0x36];
      local_180._8_4_ = qrc->left + 7;
      local_174 = local_16c - 1;
      local_170 = qrc->left + 0xb;
      ExtTextOutA(param_1,0,0,2,(RECT *)(local_180 + 8),(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_1,color);
    }
    uVar12 = *(uint *)(param_3 + 0x44);
    iVar7 = (-(uint)((uVar12 & 0x20) != 0) & 0xfffffffb) + 0x2c;
    if ((uVar12 & 0x40) == 0) {
      if ((uVar12 & 0x80) != 0) {
        iVar7 = 0x26;
      }
    }
    else {
      iVar7 = 0x2d;
    }
    if (local_164 == 0x100cd) {
      DrawEdge(param_1,qrc,local_168,0x80f);
      ImageList_Draw((HIMAGELIST)local_180._4_4_,iVar7,param_1,qrc->left + 1,puVar1[0x36] + 1,0);
    }
    else {
      ImageList_Draw(local_160,iVar7,param_1,qrc->left + 1,puVar1[0x36] + 1,0);
    }
  }
  uVar12 = puVar1[0x31];
  if ((int)uVar12 < (int)puVar1[0x33]) {
    if (local_164 == 0x100cf) {
      DrawEdge(param_1,(LPRECT)(puVar1 + 0x31),local_168,0x80f);
      uVar2 = puVar1[0x32];
      uVar12 = ((LPRECT)(puVar1 + 0x31))->left;
      p_Var13 = (HIMAGELIST)local_180._4_4_;
    }
    else {
      uVar2 = puVar1[0x32];
      p_Var13 = local_160;
    }
    ImageList_Draw(p_Var13,6,param_1,uVar12 + 1,uVar2 + 1,0);
  }
  if (((*(byte *)(param_3 + 0x44) & 0x40) != 0) && (puVar1[0x37] == qrc->left)) {
    DVar3 = GetSysColor(0x10);
    uVar9 = (*pcVar11)(param_1,DVar3);
    local_180._0_4_ = qrc->left + 7;
    local_180._8_4_ = qrc->left + 0x11;
    local_180._4_4_ = puVar1[0x36] + 9;
    local_174 = puVar1[0x36] + 0xd;
    ExtTextOutA(param_1,0,0,2,(RECT *)local_180,(LPCSTR)0x0,0,(INT *)0x0);
    local_180._4_4_ = puVar1[0x36] + 9;
    local_180._0_4_ = qrc->left + 7;
    local_180._8_4_ = qrc->left + 0xb;
    local_174 = puVar1[0x36] + 0x12;
    ExtTextOutA(param_1,0,0,2,(RECT *)local_180,(LPCSTR)0x0,0,(INT *)0x0);
    (*pcVar11)(param_1,uVar9);
  }
  local_180._0_4_ = puVar1 + 0x41;
  if ((int)puVar1[0x41] < (int)puVar1[0x43]) {
    iVar7 = *(int *)(param_3 + 0x13c);
    if (iVar7 == -1) {
      iVar7 = 3;
    }
    if ((*(uint *)(param_2 + 0xce0) == param_4) && (*(int *)(param_2 + 0x3b8) == 0x100d2)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (((*(int *)(param_2 + 0x174) == 0x100d2) &&
        (*(uint *)(param_2 + 0x1d8) == ((param_4 & 0xff) << 8 | 0x100d2))) &&
       ((*(byte *)(param_2 + 0x1c) & 2) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_00468c00(param_1,local_180._0_4_,local_158,local_154,
                 *(int *)(&DAT_00613838 + iVar7 * 4) + 0x20,local_160,local_180._4_4_,0,1,uVar8,
                 uVar9,*puVar1 >> 0xd & 1,0);
  }
  if (((int)puVar1[0x49] < (int)puVar1[0x4b]) &&
     ((uVar12 = *(uint *)(param_3 + 0x44), (uVar12 & 0x40) != 0 ||
      (((uVar12 & 0x20) != 0 && ((uVar12 & 0x80) == 0)))))) {
    DVar3 = GetSysColor(0x10);
    uVar9 = (*pcVar11)(param_1,DVar3);
    local_180._4_4_ = *(int *)(unaff_EBP + 0x128);
    local_180._0_4_ = *(int *)(unaff_EBP + 0x124) + 7;
    local_174 = *(int *)(unaff_EBP + 0x130);
    local_180._8_4_ = *(int *)(unaff_EBP + 0x124) + 0xb;
    ExtTextOutA(param_1,0,0,2,(RECT *)local_180,(LPCSTR)0x0,0,(INT *)0x0);
    (*pcVar11)(param_1,uVar9);
  }
  if ((int)puVar1[0x39] < (int)puVar1[0x3b]) {
    local_180._8_4_ = puVar1[0x39] + 2;
    local_170 = puVar1[0x3b] - 2;
    local_174 = puVar1[0x3a] + 2;
    local_16c = puVar1[0x3c] - 2;
    FUN_004c4bd0(param_1,local_180 + 8,param_3,0x80);
  }
  if ((int)puVar1[0x3d] < (int)puVar1[0x3f]) {
    _TrackbarInst_Draw_8(puVar1[0x4d],param_1);
  }
  iVar4 = local_13c;
  iVar7 = DAT_0064b3c8;
  lprect = (RECT *)(puVar1 + 0x15);
  local_134.left = puVar1[0x15] - 1;
  local_134.top = puVar1[0x16] - 1;
  local_134.right = puVar1[0x17] + 1;
  local_134.bottom = puVar1[0x18] + 1;
  if (lprect->left < (int)puVar1[0x17]) {
    if ((DAT_0064b1b8 != 0) &&
       (((*(int *)(local_13c + 0x28c) == 0 ||
         (*(int *)(local_13c + 0x294) != local_134.right - local_134.left)) ||
        (*(int *)(local_13c + 0x298) != local_134.bottom - local_134.top)))) {
      FUN_0044f280(local_13c + 0x28c,local_134.right - local_134.left,
                   local_134.bottom - local_134.top,&DAT_0064b1b8,DAT_0064b3c8,0);
    }
    if (*(int *)(iVar4 + 0x28c) == 0) {
      iVar7 = 1;
      DrawEdge(param_1,&local_134,2,0x80f);
    }
    else {
      FUN_0044f090(param_1,&local_134,iVar4 + 0x28c,0,0);
    }
    lpString = *(LPCSTR *)(param_3 + 0xc);
    if ((lpString == (LPCSTR)0x0) || (iVar4 = lstrlenA(lpString), iVar4 == 0)) {
      iVar4 = 0x11;
    }
    else {
      iVar4 = 0x12;
    }
    DVar3 = GetSysColor(iVar4);
    local_140 = SetTextColor(param_1,DVar3);
    if (lpString == (LPCSTR)0x0) {
      local_104[0] = '\0';
    }
    else {
      lstrcpynA(local_104,lpString,0x104);
      local_1 = 0;
    }
    _SfCalcStringEllipsis_16(param_1,local_104,0x104,puVar1[0x17] - lprect->left);
    c = lstrlenA(local_104);
    align = SetTextAlign(param_1,0);
    ExtTextOutA(param_1,iVar7 + lprect->left,puVar1[0x16] + 1,4,lprect,local_104,c,(INT *)0x0);
    SetTextAlign(param_1,align);
    pHVar6 = GetFocus();
    if ((pHVar6 == *(HWND *)(param_2 + 4)) && (*(int *)(param_2 + 0xb24) != 0)) {
      FUN_004ca930(param_2);
    }
    SetTextColor(param_1,local_140);
  }
  return;
}



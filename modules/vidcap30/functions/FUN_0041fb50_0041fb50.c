/* Module: vidcap30.exe
   Function: FUN_0041fb50
   Address: 0041fb50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fb50(HWND param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 HDC param_6,char *param_7,int param_8,LONG *param_9,int *param_10,int *param_11,
                 HIMAGELIST param_12,HIMAGELIST param_13,int param_14)

{
  ushort uVar1;
  int iVar2;
  DWORD color;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *local_1a0;
  DWORD local_19c;
  uint local_198;
  DWORD local_194;
  int local_190;
  int local_18c;
  COLORREF local_188;
  DWORD local_184;
  int *local_180;
  UINT local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  RECT local_164;
  tagRECT local_154;
  int local_144;
  int local_140;
  RECT local_13c;
  undefined4 local_12c [3];
  byte local_120;
  undefined4 local_11c;
  CHAR *local_118;
  undefined4 local_114;
  int local_110;
  CHAR local_104 [260];
  
  local_13c.left = *param_9;
  local_13c.top = param_9[1];
  local_198 = 1;
  local_13c.right = param_9[2];
  local_17c = 1;
  local_13c.bottom = param_9[3];
  local_190 = 1;
  local_164.left = *param_10;
  local_180 = (int *)0x0;
  iVar7 = param_10[1];
  iVar6 = param_10[2];
  iVar5 = param_10[3];
  local_154.left = *param_11;
  local_154.top = param_11[1];
  local_154.right = param_11[2];
  local_154.bottom = param_11[3];
  FUN_0046ed20();
  local_170 = 0;
  local_16c = 0;
  local_178 = 0;
  local_174 = 0;
  local_168 = 0;
  local_18c = 0;
  local_194 = SendMessageA(param_1,0x1018,0,0);
  if ((param_7 != (char *)0x0) && (*param_7 != '\0')) {
    iVar2 = _SfDoesFileExist_4(param_7);
    if (iVar2 != 0) {
      local_190 = FUN_0046fdd0(param_7,&local_178,0,0);
    }
  }
  iVar7 = iVar7 + DAT_005bb9bc;
  puVar8 = local_12c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_12c[0] = 0xb;
  local_11c = 0xb;
  local_12c[1] = param_2;
  local_118 = local_104;
  local_114 = 0x104;
  SendMessageA(param_1,0x1005,0,(LPARAM)local_12c);
  color = GetSysColor(5);
  local_1a0 = (int *)SetBkColor(param_6,color);
  ExtTextOutA(param_6,0,0,2,&local_13c,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_6,(COLORREF)local_1a0);
  if ((local_120 & 8) == 0) {
    if ((local_120 & 2) == 0) {
      local_19c = GetSysColor(5);
      local_184 = GetSysColor(8);
      local_194 = GetSysColor(0x10);
    }
    else {
      pHVar3 = GetFocus();
      local_17c = 4;
      local_198 = (uint)(pHVar3 == param_1);
      if ((local_194 == 0) || (local_18c = 1, (local_120 & 1) == 0)) {
        local_18c = 0;
      }
      if ((local_198 == 0) && (local_18c == 0)) {
        local_19c = GetSysColor(0xf);
        iVar2 = 8;
      }
      else {
        local_19c = GetSysColor(0xd);
        if ((local_198 == 0) && (local_18c == 0)) {
          iVar2 = 8;
        }
        else {
          iVar2 = 0xe;
        }
      }
      local_184 = GetSysColor(iVar2);
      local_194 = local_19c;
      local_198 = 2;
    }
  }
  else {
    local_17c = 4;
    local_19c = GetSysColor(0xd);
    local_184 = GetSysColor(0xe);
    local_194 = local_19c;
    local_198 = 2;
  }
  if (((local_190 < 0) || (local_178 == 0)) || (param_8 == 0)) {
LAB_0041ffb1:
    ImageList_GetIconSize(param_13,&local_190,(int *)&local_188);
    iVar4 = ((iVar5 - DAT_005bb9dc) + iVar7) / 2;
    iVar2 = ((local_164.left - DAT_005bb9d8) + iVar6) / 2;
  }
  else {
    local_1a0 = (int *)0xc0c0c0;
    if ((param_3 == -3) && (param_4 == -1)) {
      param_4 = DAT_005bb4e4;
      param_3 = DAT_005bb4e0;
    }
    *(int *)(local_178 + 0x360) = param_3;
    *(int *)(local_178 + 0x364) = param_4;
    iVar2 = FUN_00472fa0(&local_180,DAT_005bb9b4,DAT_005bb9b8,&local_1a0,&local_174);
    if ((iVar2 != 0) || (local_180 == (int *)0x0)) goto LAB_0041ffb1;
    ImageList_GetIconSize(param_12,&local_190,(int *)&local_188);
    iVar4 = (((local_164.left - iVar6) - local_174) + local_16c) / 2;
    iVar2 = (((local_168 - iVar5) - local_170) + iVar7) / 2;
    local_164.left = local_164.left - iVar4;
    iVar6 = iVar6 + iVar4;
    iVar7 = iVar7 - iVar2;
    iVar5 = iVar5 + iVar2;
    local_144 = (iVar6 - local_190) + -4;
    local_140 = (iVar5 - local_188) + -4;
    if (local_180[4] == 0) {
      if (((local_180[8] != 0) || (uVar1 = *(ushort *)((int)local_180 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_0041ff3a;
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
LAB_0041ff3d:
      local_1a0 = (int *)(*local_180 + iVar2 * 4 + (int)local_180);
    }
    else {
      if (local_180[4] != 3) {
LAB_0041ff3a:
        iVar2 = local_180[8];
        goto LAB_0041ff3d;
      }
      local_1a0 = local_180 + 0xd;
    }
    DrawDibDraw(param_5,param_6,local_164.left,iVar7,iVar6 - local_164.left,iVar5 - iVar7,local_180,
                local_1a0,local_174,local_170,local_16c - local_174,local_168 - local_170,0x1200);
    if (param_14 == 0) goto LAB_0042000b;
    local_110 = 0x1c;
    param_13 = DAT_005bb9a8;
    iVar2 = local_144;
    iVar4 = local_140;
  }
  ImageList_Draw(param_13,local_110,param_6,iVar2,iVar4,local_17c);
LAB_0042000b:
  local_1a0 = (int *)SetBkColor(param_6,local_19c);
  local_188 = SetTextColor(param_6,local_184);
  FUN_004153f0(param_6,local_164.left,iVar7,iVar6 - local_164.left,iVar5 - iVar7,local_198,local_194
              );
  if (local_18c == 0) {
    local_164.top = local_154.top;
    local_164.left = local_154.left;
    local_164.right = local_154.right;
    local_164.bottom = local_154.bottom;
    ExtTextOutA(param_6,0,0,2,&local_164,(LPCSTR)0x0,0,(INT *)0x0);
    if ((local_120 & 1) == 0) {
      DrawTextA(param_6,local_104,-1,&local_154,0x8811);
    }
    else {
      DrawTextA(param_6,local_104,-1,&local_154,0x2811);
      DrawFocusRect(param_6,&local_154);
    }
  }
  SetBkColor(param_6,(COLORREF)local_1a0);
  SetTextColor(param_6,local_188);
  if (local_180 != (int *)0x0) {
    _SfDibFree_8(local_180,0);
  }
  return;
}



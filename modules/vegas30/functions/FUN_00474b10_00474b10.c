/* Module: vegas30.exe
   Function: FUN_00474b10
   Address: 00474b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474b10(HDC param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,int *param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  COLORREF CVar4;
  HGDIOBJ h;
  int iVar5;
  UINT UVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  LPCSTR pCVar12;
  RECT *pRVar13;
  int local_16c;
  uint local_164;
  RECT local_160;
  undefined8 local_150;
  undefined8 local_148;
  LPCSTR local_140;
  uint local_13c;
  int local_138;
  double local_134;
  uint local_12c;
  int local_128;
  COLORREF local_124;
  RECT local_120;
  UINT local_110;
  COLORREF local_10c;
  HGDIOBJ local_108;
  undefined1 local_104 [260];
  
  piVar3 = param_10;
  iVar5 = param_10[0x12];
  local_150._0_4_ = *(uint *)(iVar5 + 0x10);
  local_150._4_4_ = *(int *)(iVar5 + 0x14);
  local_13c = *(uint *)(iVar5 + 0xe0);
  local_138 = *(int *)(iVar5 + 0xe4);
  iVar9 = *(int *)(iVar5 + 4);
  if (iVar9 != 0) {
    uVar10 = *(uint *)(iVar9 + 0x20) + *(uint *)(iVar9 + 0x18);
    iVar9 = *(int *)(iVar9 + 0x24) + *(int *)(iVar9 + 0x1c) +
            (uint)CARRY4(*(uint *)(iVar9 + 0x20),*(uint *)(iVar9 + 0x18));
    if ((iVar9 <= local_138) && ((iVar9 < local_138 || (uVar10 < local_13c)))) {
      local_13c = uVar10;
      local_138 = iVar9;
    }
  }
  if (*(int *)(iVar5 + 4) == 0) {
    if (((((param_10[0x13] & 0x20000U) == 0) || (*param_10 != 0)) || (*(int *)(iVar5 + -0xd0) == 0))
       || (((*(uint *)(iVar5 + 200) ^ *(uint *)(iVar5 + -8)) & 4) == 0)) goto LAB_00474ce5;
  }
  else if (((param_10[0x13] & 0x20000U) == 0) ||
          ((*(uint *)(iVar5 + 200) >> 1 & 4) == (*(uint *)(iVar5 + 200) & 4))) goto LAB_00474ce5;
  uVar10 = DAT_00647860;
  if ((DAT_00647860 & 0x4000000) != 0) {
    uVar10 = GetSysColor(DAT_00647860 & 0xffffff);
  }
  local_124 = SetBkColor(param_1,uVar10);
  iVar9 = 0;
  iVar5 = param_7 + -5;
  uVar10 = *(uint *)(piVar3[0x12] + 200);
  if ((uVar10 >> 1 & 4) != (uVar10 & 4)) {
    bVar11 = (uVar10 >> 2 & 2) != (uVar10 & 2);
    if (bVar11) {
      iVar5 = param_5 + 1;
    }
    local_164 = (uint)bVar11;
    local_16c = 4;
    do {
      local_160.right = param_4 - iVar9;
      local_160.top = iVar5;
      local_160.left = local_160.right + -1;
      local_160.bottom = local_16c + iVar5;
      ExtTextOutA(param_1,0,0,2,&local_160,(LPCSTR)0x0,0,(INT *)0x0);
      local_120.left = param_6 + 1 + iVar9;
      local_120.right = local_120.left + 1;
      local_120.top = iVar5;
      local_120.bottom = local_16c + iVar5;
      ExtTextOutA(param_1,0,0,2,&local_120,(LPCSTR)0x0,0,(INT *)0x0);
      iVar5 = iVar5 + local_164;
      local_16c = local_16c + -1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
  }
LAB_00474ce5:
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x10) & 0x10) == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((param_2 == 0) ||
     (((*(byte *)(param_2 + 0x10) & 2) == 0 &&
      ((*(uint *)(*(int *)(param_2 + 8) + 0x10) & 0x20000) == 0)))) {
    local_164 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    local_164 = 1;
  }
  CVar4 = 0xffffff;
  if (bVar11) {
    CVar4 = *(COLORREF *)(&DAT_0063e298 + param_10[0xe] * 8);
  }
  if (uVar10 != 0) {
    CVar4 = FUN_00460550(CVar4,1);
  }
  SetBkColor(param_1,CVar4);
  local_160.top = param_5;
  local_160.left = param_4;
  local_160.right = param_6;
  local_160.bottom = param_7;
  ExtTextOutA(param_1,0,0,2,&local_160,(LPCSTR)0x0,0,(INT *)0x0);
  if (bVar11) {
    CVar4 = 0xffffff;
  }
  else {
    CVar4 = GetSysColor(0x12);
  }
  local_10c = SetTextColor(param_1,CVar4);
  h = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  local_108 = SelectObject(param_1,h);
  local_148 = CONCAT44(local_148._4_4_,(int)local_148);
  if (param_3 != (int *)0x0) {
    if (*param_3 + -1 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)param_3[2];
    }
    local_148 = CONCAT44(local_148._4_4_,(int)local_148);
    if (iVar5 != 0) {
      FUN_00508960(local_104,iVar5,0x104);
      FUN_0050aaa0(local_104,&local_140);
      UVar6 = lstrlenA(local_140);
      pRVar13 = &local_120;
      pCVar12 = local_140;
      local_110 = UVar6;
      uVar7 = _SfGetUIFont_4(0x6e);
      _SfGetTextExtent_16(uVar7,pCVar12,UVar6,pRVar13);
      local_128 = *(int *)(param_9 + 0x34);
      local_12c = *(uint *)(param_9 + 0x30);
      local_160._0_8_ = (BADTYPE)*(int *)(param_9 + 0x40);
      bVar11 = (uint)local_150 < local_12c;
      local_150._0_4_ = (uint)local_150 - local_12c;
      uVar7 = *(undefined4 *)(param_9 + 0x3c);
      local_150._4_4_ = (local_150._4_4_ - local_128) - (uint)bVar11;
      uVar1 = *(undefined4 *)(param_9 + 0x38);
      uVar2 = *(undefined8 *)(param_9 + 0x38);
      iVar5 = *(int *)(param_9 + 0x44);
      local_134 = (double)CONCAT44(local_150._4_4_,(uint)local_150) * (double)local_160._0_8_;
      local_148._0_4_ = (uint)local_150;
      local_150 = __alldiv(uVar1,uVar7,2,0);
      iVar9 = ftol();
      iVar9 = iVar9 + iVar5;
      if (iVar9 < -0x4000) {
        iVar9 = -0x4000;
      }
      else if (0x3fff < iVar9) {
        iVar9 = 0x3fff;
      }
      local_150._0_4_ = iVar9 + 2;
      local_148._0_4_ = uVar1;
      local_148._4_4_ = uVar7;
      __alldiv(uVar1,uVar7,2,0);
      iVar9 = ftol();
      iVar9 = iVar9 + iVar5;
      if (iVar9 < -0x4000) {
        local_16c = -0x4000;
      }
      else {
        local_16c = 0x3fff;
        if (iVar9 < 0x4000) {
          local_16c = iVar9;
        }
      }
      local_148._0_4_ = local_13c - local_12c;
      local_148._4_4_ = (local_138 - local_128) - (uint)(local_13c < local_12c);
      local_160._0_8_ = (double)CONCAT44(local_148._4_4_,(int)local_148) * (double)local_160._0_8_;
      local_134 = (double)uVar2;
      local_148 = __alldiv(uVar1,uVar7,2,0);
      iVar9 = ftol();
      iVar9 = iVar9 + iVar5;
      if (iVar9 < -0x4000) {
        iVar9 = -0x4000;
      }
      else if (0x3fff < iVar9) {
        iVar9 = 0x3fff;
      }
      uVar8 = ((iVar9 - local_120.left) + -0x14 + local_16c) / 2;
      uVar10 = (uint)local_150;
      if ((int)(uint)local_150 <= (int)uVar8) {
        uVar10 = uVar8;
      }
      UVar6 = SetTextAlign(param_1,8);
      ExtTextOutA(param_1,uVar10,(param_5 + param_7) / 2 + 1 + local_120.top / 2,4,(RECT *)&param_4,
                  local_140,local_110,(INT *)0x0);
      SetTextAlign(param_1,UVar6);
      uVar10 = local_164;
    }
  }
  iVar5 = param_10[0x11];
  if (iVar5 != 0) {
    uVar7 = 0x30;
    if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
      uVar7 = 0x31;
    }
    if ((((*(byte *)(iVar5 + 0x68) & 0x20) != 0) && (param_10[8] <= *(int *)(iVar5 + 0x58))) &&
       (*(int *)(iVar5 + 0x58) <= param_10[10])) {
      local_160.bottom = *(int *)(iVar5 + 0x5c) + 10;
      local_160.right = *(int *)(iVar5 + 0x58) + 10;
      local_160.top = *(int *)(iVar5 + 0x5c) + -10;
      local_160.left = *(int *)(iVar5 + 0x58) + -10;
      FUN_00468c00(param_1,&local_160,2,2,uVar7,DAT_0064b314,DAT_0064b318,0,1,0,0,
                   *(uint *)(*(int *)(param_2 + 0x218) + 0x68) >> 10 & 1,uVar10);
    }
    iVar5 = param_10[0x11];
    if ((((*(byte *)(iVar5 + 0x68) & 0x40) != 0) && (param_10[8] <= *(int *)(iVar5 + 0x60))) &&
       (*(int *)(iVar5 + 0x60) <= param_10[10])) {
      local_160.bottom = *(int *)(iVar5 + 100) + 10;
      local_160.right = *(int *)(iVar5 + 0x60) + 10;
      local_160.top = *(int *)(iVar5 + 100) + -10;
      local_160.left = *(int *)(iVar5 + 0x60) + -10;
      FUN_00468c00(param_1,&local_160,2,2,uVar7,DAT_0064b314,DAT_0064b318,0,1,0,0,
                   *(uint *)(*(int *)(param_2 + 0x218) + 0x68) >> 0xb & 1,uVar10);
    }
  }
  SelectObject(param_1,local_108);
  SetTextColor(param_1,local_10c);
  SetBkColor(param_1,local_124);
  return;
}



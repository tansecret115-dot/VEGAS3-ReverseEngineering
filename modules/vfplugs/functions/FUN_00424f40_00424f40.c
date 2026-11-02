/* Module: vfplugs.dll
   Function: FUN_00424f40
   Address: 00424f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424f40(uint *param_1,HDC param_2)

{
  uint *puVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  HBRUSH pHVar8;
  DWORD DVar9;
  COLORREF color;
  int x;
  int h;
  code *pcVar10;
  int unaff_EBP;
  int iVar11;
  int unaff_ESI;
  int w;
  HGDIOBJ h_00;
  uint local_30;
  uint local_2c;
  uint local_28;
  tagRECT local_20;
  RECT local_10;
  
  if ((param_1[3] & 0x20) != 0) {
    return 0;
  }
  uVar6 = *param_1;
  puVar1 = param_1 + 0x12;
  iVar5 = param_1[0x15] - param_1[0x13];
  local_20.left = *puVar1;
  iVar11 = param_1[0x14] - *puVar1;
  local_20.top = param_1[0x13];
  local_20.right = param_1[0x14];
  local_20.bottom = param_1[0x15];
  InflateRect(&local_20,-param_1[0x18],-param_1[0x19]);
  LVar4 = local_20.bottom;
  LVar3 = local_20.right;
  LVar2 = local_20.top;
  local_30 = local_20.left;
  uVar7 = param_1[3];
  if ((uVar7 & 0x4000) == 0) {
    if ((uVar7 & 0x2000) == 0) {
      pHVar8 = FUN_0044e040(0);
      FillRect(param_2,&local_20,pHVar8);
    }
    else if ((uVar7 & 8) == 0) {
      GetSysColor(0xf);
      GetSysColor(0x10);
      FUN_00425450(param_2,&local_20.left);
    }
    else {
      GetSysColor(0x10);
      GetSysColor(0xf);
      FUN_00425650(param_2,&local_20.left);
    }
    pHVar8 = FUN_0044e040(6);
    SelectObject(param_2,pHVar8);
    pcVar10 = PatBlt_exref;
    if ((uVar6 & 0x300) == 0x100) {
      if ((param_1[3] & 8) == 0) {
        w = iVar11 + -4;
        h = 2;
        uVar6 = iVar5 / 2 + -1 + param_1[0x13];
        x = *puVar1 + 2;
      }
      else {
        h = iVar5 + -4;
        uVar6 = param_1[0x13] + 2;
        w = 2;
        x = iVar11 / 2 + -1 + *puVar1;
      }
    }
    else {
      PatBlt(param_2,*puVar1,param_1[0x13],iVar11 + -1,1,0xf00021);
      PatBlt(param_2,*puVar1,param_1[0x15] - 2,iVar11 + -1,1,0xf00021);
      PatBlt(param_2,*puVar1,param_1[0x13],1,iVar5 + -1,0xf00021);
      x = param_1[0x14] - 2;
      h = iVar5 + -1;
      uVar6 = param_1[0x13];
      w = 1;
    }
    PatBlt(param_2,x,uVar6,w,h,0xf00021);
    pHVar8 = FUN_0044e040(0x14);
    SelectObject(param_2,pHVar8);
    if (h == 0) {
      local_10.left = local_20.bottom - 1;
      PatBlt(param_2,param_1[0x14] - 1,param_1[0x13],1,local_10.left,0xf00021);
      uVar7 = param_1[0x15];
      uVar6 = *puVar1;
    }
    else {
      local_10.left = local_20.bottom - 1;
      PatBlt(param_2,param_1[0x14] - 1,param_1[0x13],1,local_10.left,0xf00021);
      uVar7 = param_1[0x15];
      uVar6 = *puVar1;
    }
    iVar5 = 1;
    PatBlt(param_2,uVar6,uVar7 - 1,iVar11,1,0xf00021);
    pHVar8 = FUN_0044e040(0x10);
    SelectObject(param_2,pHVar8);
    if (iVar5 == 0) {
      PatBlt(param_2,*puVar1 + 1,param_1[0x13] + 1,1,unaff_ESI + -3,0xf00021);
      iVar11 = iVar11 + -3;
      uVar6 = param_1[0x13] + 1;
      uVar7 = *puVar1 + 1;
    }
    else {
      PatBlt(param_2,*puVar1,param_1[0x13],1,unaff_EBP,0xf00021);
      uVar6 = param_1[0x13];
      uVar7 = *puVar1;
      iVar11 = iVar11 + -1;
    }
    goto LAB_0042542f;
  }
  local_2c = local_20.top;
  local_28 = local_20.right;
  uVar6 = FUN_004242b0(param_1,param_1[7]);
  if ((param_1[3] & 0x200) == 0) {
    if ((param_1[3] & 8) != 0) goto LAB_0042506d;
    if ((int)uVar6 < (int)local_30) {
      local_28 = local_30;
    }
    else {
joined_r0x00425099:
      if ((int)uVar6 <= LVar3) {
        local_28 = uVar6;
      }
    }
  }
  else {
    uVar7 = FUN_004242b0(param_1,param_1[6]);
    if ((param_1[3] & 8) == 0) {
      if ((int)uVar6 < (int)uVar7) {
        if (((int)local_30 <= (int)uVar6) && (local_30 = LVar3, (int)uVar6 <= LVar3)) {
          local_30 = uVar6;
        }
        if ((int)uVar7 < (int)local_30) {
          local_28 = local_30;
        }
        else if ((int)uVar7 <= LVar3) {
          local_28 = uVar7;
        }
      }
      else {
        if (((int)local_30 <= (int)uVar7) && (local_30 = LVar3, (int)uVar7 <= LVar3)) {
          local_30 = uVar7;
        }
        if ((int)local_30 <= (int)uVar6) goto joined_r0x00425099;
        local_28 = local_30;
      }
    }
    else {
LAB_0042506d:
      if ((LVar2 <= (int)uVar6) && (local_2c = uVar6, LVar4 < (int)uVar6)) {
        local_2c = LVar4;
      }
    }
  }
  pHVar8 = FUN_0044e040(0xf);
  FillRect(param_2,&local_20,pHVar8);
  if ((param_1[3] & 0x400) != 0) {
    DVar9 = GetSysColor(0xf);
    color = SetBkColor(param_2,(uint)CONCAT11((char)((((int)DVar9 >> 0x10 & 0xffU) << 2) / 5),
                                              (char)(((DVar9 >> 8 & 0xff) << 2) / 5)) << 8 |
                               ((DVar9 & 0xff) << 2) / 5);
    local_10.top = local_2c;
    local_10.left = local_30;
    local_10.right = local_28;
    local_10.bottom = LVar4;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_2,color);
  }
  pHVar8 = FUN_0044e040(0x14);
  SelectObject(param_2,pHVar8);
  pcVar10 = PatBlt_exref;
  PatBlt(param_2,param_1[0x14] - 1,param_1[0x13],1,iVar5 + -1,0xf00021);
  PatBlt(param_2,*puVar1,param_1[0x15] - 1,iVar11,1,0xf00021);
  pHVar8 = FUN_0044e040(0x10);
  SelectObject(param_2,pHVar8);
  PatBlt(param_2,*puVar1,param_1[0x13],1,iVar5 + -1,0xf00021);
  uVar6 = param_1[0x13];
  uVar7 = *puVar1;
  iVar11 = iVar11 + -1;
LAB_0042542f:
  h_00 = (HGDIOBJ)0xf00021;
  (*pcVar10)(param_2,uVar7,uVar6,iVar11,1);
  SelectObject(param_2,h_00);
  return 1;
}



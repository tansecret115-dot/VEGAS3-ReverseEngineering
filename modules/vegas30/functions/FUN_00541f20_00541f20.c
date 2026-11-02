/* Module: vegas30.exe
   Function: FUN_00541f20
   Address: 00541f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541f20(byte *param_1,HDC param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  DWORD DVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  int y;
  int x;
  int iVar4;
  RECT *lprect;
  undefined8 uVar5;
  int local_d0;
  tagRECT local_cc;
  int local_bc;
  tagRECT local_b8;
  int local_a8;
  int local_a4;
  double local_a0;
  UINT local_94;
  undefined8 local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  UINT local_74;
  COLORREF local_70;
  tagSIZE local_6c;
  HGDIOBJ local_64;
  RECT local_60;
  RECT local_50;
  RECT local_40;
  RECT local_30;
  undefined1 local_20 [4];
  int local_1c;
  CHAR local_18 [20];
  
  local_bc = 8;
  local_cc.left = *(LONG *)(param_1 + 0xc);
  local_cc.top = *(LONG *)(param_1 + 0x10);
  local_cc.right = *(LONG *)(param_1 + 0x14);
  local_cc.bottom = *(LONG *)(param_1 + 0x18);
  DVar1 = GetSysColor(0xf);
  local_70 = SetBkColor(param_2,DVar1);
  local_78 = SetBkMode(param_2,1);
  local_74 = SetTextAlign(param_2,10);
  pvVar2 = (HGDIOBJ)FUN_00542440();
  _SfGetFontSize_8(pvVar2,local_20);
  local_64 = SelectObject(param_2,pvVar2);
  iVar4 = local_cc.bottom - local_cc.top;
  if ((*param_1 & 2) == 0) {
    local_88 = ftol();
    local_88 = -local_88;
    local_84 = 0;
  }
  else {
    iVar4 = local_cc.right - local_cc.left;
    local_88 = 0;
    local_84 = ftol();
    local_84 = -local_84;
  }
  if (iVar4 < local_1c + 8) {
    local_bc = iVar4 - local_1c;
  }
  local_d0 = 2;
  if (1 < local_bc / 2) {
    local_d0 = local_bc / 2;
  }
  iVar4 = local_d0;
  FUN_0044e9f0(param_2,&local_cc,&local_88,&DAT_0064b188);
  local_90 = (double)CONCAT44(param_5,param_4) * _DAT_006128d8;
  if ((*param_1 & 2) == 0) {
    DrawEdge(param_2,&local_cc,4,8);
    local_a8 = local_cc.left;
    local_a4 = local_cc.right;
    local_b8.right = local_cc.right;
    local_b8.left = local_cc.right + local_bc * -2;
    local_b8.bottom = local_cc.bottom;
    local_b8.top = local_cc.bottom + -2;
    DrawEdge(param_2,&local_b8,4,0xf);
    uVar5 = 0xfffffffe00000000;
  }
  else {
    DrawEdge(param_2,&local_cc,4,4);
    local_a8 = local_cc.top;
    local_b8.right = local_cc.right;
    local_b8.left = local_cc.right + -2;
    local_a4 = local_cc.bottom;
    local_b8.bottom = local_cc.bottom;
    local_b8.top = local_cc.bottom + local_bc * -2;
    DrawEdge(param_2,&local_b8,4,0xf);
    uVar5 = 0xfffffffe;
  }
  OffsetRect(&local_b8,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  DrawEdge(param_2,&local_b8,4,0xf);
  local_80 = param_4;
  uStack_7c = param_5;
  local_d0 = 0;
  do {
    if (local_d0 == 1) {
      local_80 = (undefined4)local_90;
      uStack_7c = local_90._4_4_;
      iVar4 = local_bc;
    }
    local_a0 = floor(((double)*(int *)(param_1 + 4) - local_90) / local_90);
    local_a0 = local_a0 * local_90;
    do {
      iVar3 = ftol();
      iVar3 = iVar3 + local_a8;
      if (local_d0 == 1) {
        local_94 = SfPrintF(local_18,"$0.1f",local_a0._0_4_);
        GetTextExtentPoint32A(param_2,local_18,local_94,&local_6c);
        if ((*param_1 & 2) == 0) {
          y = local_cc.bottom - iVar4;
          x = local_6c.cx + iVar3;
        }
        else {
          y = local_6c.cx + iVar3;
          x = (local_cc.right - local_6c.cy) - iVar4;
        }
        ExtTextOutA(param_2,x,y,4,&local_cc,local_18,local_94,(INT *)0x0);
      }
      if ((local_a8 <= iVar3) && (iVar3 <= local_a4)) {
        if ((*param_1 & 2) == 0) {
          DVar1 = GetSysColor(6);
          SetBkColor(param_2,DVar1);
          local_50.top = local_cc.bottom - iVar4;
          local_50.right = iVar3 + 1;
          local_50.bottom = local_50.top + iVar4;
          local_50.left = iVar3;
          ExtTextOutA(param_2,0,0,2,&local_50,(LPCSTR)0x0,0,(INT *)0x0);
          DVar1 = GetSysColor(0x14);
          SetBkColor(param_2,DVar1);
          local_40.left = iVar3 + 1;
          local_40.top = local_cc.bottom - iVar4;
          local_40.right = iVar3 + 2;
          local_40.bottom = local_40.top + iVar4;
          lprect = &local_40;
        }
        else {
          DVar1 = GetSysColor(6);
          SetBkColor(param_2,DVar1);
          local_60.left = local_cc.right - iVar4;
          local_60.right = local_60.left + iVar4;
          local_60.bottom = iVar3 + 1;
          local_60.top = iVar3;
          ExtTextOutA(param_2,0,0,2,&local_60,(LPCSTR)0x0,0,(INT *)0x0);
          DVar1 = GetSysColor(0x14);
          SetBkColor(param_2,DVar1);
          local_30.top = iVar3 + 1;
          local_30.left = local_cc.right - iVar4;
          local_30.right = local_30.left + iVar4;
          local_30.bottom = iVar3 + 2;
          lprect = &local_30;
        }
        ExtTextOutA(param_2,0,0,2,lprect,(LPCSTR)0x0,0,(INT *)0x0);
      }
      local_a0 = local_a0 + (double)CONCAT44(uStack_7c,local_80);
    } while ((local_a0 <= (double)*(int *)(param_1 + 8)) && (iVar3 <= local_a4));
    local_d0 = local_d0 + 1;
  } while (local_d0 < 2);
  SetBkMode(param_2,local_78);
  SetTextAlign(param_2,local_74);
  SetBkColor(param_2,local_70);
  pvVar2 = SelectObject(param_2,local_64);
  DeleteObject(pvVar2);
  return;
}



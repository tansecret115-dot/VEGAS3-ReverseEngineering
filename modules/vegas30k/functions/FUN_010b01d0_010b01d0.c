/* Module: vegas30k.dll
   Function: FUN_010b01d0
   Address: 010b01d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010b01d0(byte *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  POINT pt;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  LONG LVar7;
  HWND pHVar8;
  BOOL BVar9;
  int iVar10;
  uint uVar11;
  uint local_b0;
  RECT *local_ac;
  uint local_a8;
  int iStack_a4;
  tagPOINT local_a0;
  undefined8 uStack_98;
  tagPOINT local_90;
  undefined1 local_88 [12];
  LONG local_7c;
  undefined1 auStack_78 [32];
  undefined1 local_58 [84];
  
  if (param_4 == 5) goto LAB_010b057b;
  if (param_4 == 8) {
    pHVar8 = GetCapture();
    if (pHVar8 != *(HWND *)(param_1 + 0x3c)) {
      return;
    }
    ReleaseCapture();
    if (*(int *)(param_1 + 0x90) == 5) {
      if ((*param_1 & 8) == 0) {
        DestroyWindow(*(HWND *)(param_1 + 0x15c));
      }
      (**(code **)(param_1 + 0x29c))
                (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),4,
                 param_1 + 0xc,(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
      param_1[0x18c] = 0xff;
      param_1[0x18d] = 0xff;
      param_1[0x18e] = 0xff;
      param_1[399] = 0xff;
    }
    if (((*(int *)(param_1 + 0x90) == -3) &&
        (iVar10 = FUN_010afeb0(param_1,param_2,param_3,&local_b0),
        iVar10 == *(int *)(param_1 + 0x90))) && (local_b0 == *(uint *)(param_1 + 0x94))) {
      if (*(int *)(param_1 + 0x150) == 0) {
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) ^ 1 << ((byte)local_b0 & 0x1f);
      }
      else {
        *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) ^ 1 << ((byte)local_b0 & 0x1f);
      }
      if ((*param_1 & 2) != 0) {
        *(uint *)(param_1 + 0x18c) = local_b0;
      }
      FUN_010af800(param_1,1);
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffbff;
    ShowCaret(*(HWND *)(param_1 + 0x3c));
    param_1[0x90] = 0xff;
    param_1[0x91] = 0xff;
    param_1[0x92] = 0xff;
    param_1[0x93] = 0xff;
    FUN_010af800(param_1,1);
    (**(code **)(param_1 + 0x29c))
              (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),8,
               param_1 + 0xc,(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
    return;
  }
  if (param_4 != 9) {
    return;
  }
  uVar6 = FUN_010afeb0(param_1,param_2,param_3,param_1 + 0x94);
  if (uVar6 == -1) {
    return;
  }
  local_a8 = uVar6;
  if (uVar6 == 5) {
    FUN_010afa80(param_1,&local_b0,&local_ac,*(undefined4 *)(param_1 + 0x140),
                 *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),
                 *(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
    *(uint *)(param_1 + 0x68) = local_b0 - param_2;
    *(int *)(param_1 + 0x6c) = (int)local_ac - param_3;
    *(int *)(param_1 + 0x70) = param_2;
    *(int *)(param_1 + 0x74) = param_3;
    LVar7 = GetMessageTime();
    *(LONG *)(param_1 + 0x8c) = LVar7;
    if ((*param_1 & 8) == 0) {
      pHVar8 = CreateWindowExA(0,"tooltips_class32",(LPCSTR)0x0,0x80000000,0,0,0,0,
                               *(HWND *)(param_1 + 0x3c),(HMENU)0x0,DAT_0120e5c0,(LPVOID)0x0);
      *(HWND *)(param_1 + 0x15c) = pHVar8;
      FUN_010b0b30(param_1,local_58,0x50);
      pbVar1 = param_1 + 0x160;
      pbVar1[0] = 0x2c;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      if ((param_1[4] & 4) == 0) {
        param_1[0x164] = 0xa1;
        param_1[0x165] = 0;
        param_1[0x166] = 0;
        param_1[0x167] = 0;
        *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x3c);
      }
      else {
        param_1[0x164] = 0xa0;
        param_1[0x165] = 0;
        param_1[0x166] = 0;
        param_1[0x167] = 0;
        *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x40);
      }
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x3c);
      *(HINSTANCE *)(param_1 + 0x180) = DAT_0120e5c0;
      *(undefined1 **)(param_1 + 0x184) = local_58;
      param_1[0x170] = 0;
      param_1[0x171] = 0;
      param_1[0x172] = 0;
      param_1[0x173] = 0;
      param_1[0x174] = 0;
      param_1[0x175] = 0;
      param_1[0x176] = 0;
      param_1[0x177] = 0;
      param_1[0x178] = 0;
      param_1[0x179] = 0;
      param_1[0x17a] = 0;
      param_1[0x17b] = 0;
      param_1[0x17c] = 0;
      param_1[0x17d] = 0;
      param_1[0x17e] = 0;
      param_1[0x17f] = 0;
      SendMessageA(*(HWND *)(param_1 + 0x15c),0x404,0,(LPARAM)pbVar1);
      GetCursorPos(&local_90);
      SendMessageA(*(HWND *)(param_1 + 0x15c),0x412,0,
                   (local_90.y + DAT_01206414) * 0x10000 | local_90.x + DAT_01206410 & 0xffffU);
      SendMessageA(*(HWND *)(param_1 + 0x15c),0x411,1,(LPARAM)pbVar1);
      uVar6 = local_a8;
    }
LAB_010b038f:
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x150);
  }
  else if (uVar6 != -3) goto LAB_010b038f;
  HideCaret(*(HWND *)(param_1 + 0x3c));
  SetCapture(*(HWND *)(param_1 + 0x3c));
  *(uint *)(param_1 + 0x90) = uVar6;
  local_88._0_4_ = *(undefined4 *)(param_1 + 0x48);
  local_88._4_4_ = *(undefined4 *)(param_1 + 0x4c);
  local_88._8_4_ = *(undefined4 *)(param_1 + 0x50);
  local_7c = *(LONG *)(param_1 + 0x54);
  ClientToScreen(*(HWND *)(param_1 + 0x3c),(LPPOINT)local_88);
  ClientToScreen(*(HWND *)(param_1 + 0x3c),(LPPOINT)(local_88 + 8));
  ClipCursor((RECT *)local_88);
  (**(code **)(param_1 + 0x29c))
            (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),9,
             param_1 + 0xc,(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
LAB_010b057b:
  if (*(int *)(param_1 + 0x90) == 5) {
    uVar6 = *(uint *)(param_1 + 4);
    local_ac = (RECT *)&DAT_01206420;
    local_b0 = DAT_01206418;
    if ((uVar6 & 0x400) != 0) {
      local_ac = (RECT *)&DAT_01206430;
      local_b0 = DAT_0120641c;
    }
    local_a0.x = param_2 - *(int *)(param_1 + 0x70);
    local_a0.y = param_3 - *(int *)(param_1 + 0x74);
    uVar11 = (int)(uVar6 << 0x16) >> 0x1f;
    local_a8 = uVar11;
    if ((((uVar6 & 0x100) == 0) &&
        (pt.y = local_a0.y, pt.x = local_a0.x, BVar9 = PtInRect(local_ac,pt), BVar9 != 0)) &&
       (LVar7 = GetMessageTime(), local_b0 < (uint)(LVar7 - *(int *)(param_1 + 0x8c)))) {
      local_a8 = 1;
      uVar11 = 1;
    }
    local_b0 = *(uint *)(param_1 + 0x150);
    local_a0.y = param_3;
    pbVar1 = param_1 + 0x150;
    local_a0.x = param_2;
    uVar6 = FUN_010b00a0(param_1,*(int *)(param_1 + 0x68) + param_2,
                         param_3 + *(int *)(param_1 + 0x6c));
    if (uVar6 != local_b0) {
      param_1[400] = 0;
      param_1[0x191] = 0;
      param_1[0x192] = 0;
      param_1[0x193] = 0;
      local_a8 = 0;
      uVar11 = 0;
    }
    *(uint *)(param_1 + 4) = (uVar11 & 1) << 10 | *(uint *)(param_1 + 4) & 0xfffffbff;
    if ((*(int *)(param_1 + 0x74) != param_3) || (*(int *)(param_1 + 0x70) != param_2)) {
      if (uVar11 == 0) {
        FUN_010b09e0(param_1,param_1 + 0x140,param_1 + 0x148,pbVar1,
                     *(int *)(param_1 + 0x68) + param_2,param_3 + *(int *)(param_1 + 0x6c));
      }
      else {
        FUN_010afa80(param_1,&local_b0,&local_ac,*(undefined4 *)(param_1 + 0x140),
                     *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),
                     *(undefined4 *)(param_1 + 0x14c),local_b0);
        local_b0 = local_b0 - *(int *)(param_1 + 0x68);
        local_ac = (RECT *)((int)local_ac - *(int *)(param_1 + 0x6c));
        switch(*(undefined4 *)pbVar1) {
        case 0:
        case 3:
        case 4:
        case 7:
        case 8:
          iStack_a4 = param_2 - local_b0;
          if (iStack_a4 < 0) {
            iStack_a4 = iStack_a4 + -1;
          }
          else {
            iStack_a4 = iStack_a4 + 1;
          }
          iStack_a4 = iStack_a4 / 2;
          dVar2 = (double)iStack_a4 * _DAT_011e1b48 + *(double *)(param_1 + 0x140);
          dVar3 = _DAT_011e2ae8;
          if ((_DAT_011e2ae8 <= dVar2) && (dVar3 = dVar2, _DAT_011e2ae0 <= dVar2)) {
            dVar3 = _DAT_011e2ae0;
          }
          uStack_98 = dVar3;
          if (dVar3 != *(double *)(param_1 + 0x140)) {
            uStack_98._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar4 = uStack_98._4_4_;
            *(double *)(param_1 + 0x140) = dVar3;
            uStack_98._0_4_ = SUB84(dVar3,0);
            uVar5 = (undefined4)uStack_98;
            FUN_010afa80(param_1,&iStack_a4,&uStack_98,uVar5,uVar4,*(undefined4 *)(param_1 + 0x148),
                         *(undefined4 *)(param_1 + 0x14c),*(undefined4 *)pbVar1);
            local_a0.x = iStack_a4 - *(int *)(param_1 + 0x68);
          }
        }
        switch(*(undefined4 *)pbVar1) {
        case 0:
        case 1:
        case 2:
        case 5:
        case 6:
          iStack_a4 = param_3 - (int)local_ac;
          if (iStack_a4 < 0) {
            iStack_a4 = iStack_a4 + -1;
          }
          else {
            iStack_a4 = iStack_a4 + 1;
          }
          iStack_a4 = iStack_a4 / 2;
          dVar2 = (double)iStack_a4 * _DAT_011e1b48 + *(double *)(param_1 + 0x148);
          dVar3 = _DAT_011e2ae8;
          if ((_DAT_011e2ae8 <= dVar2) && (dVar3 = dVar2, _DAT_011e2ae0 < dVar2)) {
            dVar3 = _DAT_011e2ae0;
          }
          uStack_98 = dVar3;
          if (dVar3 != *(double *)(param_1 + 0x148)) {
            uStack_98._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar4 = uStack_98._4_4_;
            uStack_98._0_4_ = SUB84(dVar3,0);
            *(double *)(param_1 + 0x148) = dVar3;
            uVar5 = (undefined4)uStack_98;
            FUN_010afa80(param_1,&uStack_98,&iStack_a4,*(undefined4 *)(param_1 + 0x140),
                         *(undefined4 *)(param_1 + 0x144),uVar5,uVar4,*(undefined4 *)pbVar1);
            local_a0.y = iStack_a4 - *(int *)(param_1 + 0x6c);
          }
        }
        uVar11 = local_a8;
      }
      if ((*param_1 & 8) == 0) {
        FUN_010b0b30(param_1,local_58,0x50);
        *(undefined1 **)(param_1 + 0x184) = local_58;
        SendMessageA(*(HWND *)(param_1 + 0x15c),0x409,0,(LPARAM)(param_1 + 0x160));
        local_90.x = local_a0.x;
        local_90.y = local_a0.y;
        ClientToScreen(*(HWND *)(param_1 + 0x3c),&local_90);
        SendMessageA(*(HWND *)(param_1 + 0x15c),0x412,0,
                     (local_90.y + DAT_01206414) * 0x10000 | local_90.x + DAT_01206410 & 0xffffU);
      }
    }
    *(LONG *)(param_1 + 0x70) = local_a0.x;
    *(LONG *)(param_1 + 0x74) = local_a0.y;
    LVar7 = GetMessageTime();
    *(LONG *)(param_1 + 0x8c) = LVar7;
    if ((uVar11 != 0) && ((local_a0.x != param_2 || (local_a0.y != param_3)))) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
      ClientToScreen(*(HWND *)(param_1 + 0x3c),&local_a0);
      SetCursorPos(local_a0.x,local_a0.y);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
    }
    pbVar1 = param_1 + 0xc;
    FUN_010aed20(param_1,auStack_78,pbVar1);
    FUN_010af800(param_1,1);
    iVar10 = FUN_010aed50(param_1,auStack_78,pbVar1);
    if (iVar10 == 0) {
      (**(code **)(param_1 + 0x29c))
                (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),5,pbVar1,
                 (1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
    }
  }
  return;
}



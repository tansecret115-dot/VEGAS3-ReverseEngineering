/* Module: vegas30.exe
   Function: FUN_004de320
   Address: 004de320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de320(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  HWND hWnd;
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  WPARAM local_14c;
  undefined4 local_148;
  int local_144;
  uint local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c [4];
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  undefined1 *local_10c;
  undefined1 local_104 [260];
  
  local_148 = DAT_0064b138;
  local_13c = 0;
  local_130 = 0;
  if (param_1 == 0) {
    return;
  }
  iVar5 = param_1 + 0x80;
  local_144 = 0;
  local_138 = 0;
  if (param_2 != 0) {
    local_144 = FUN_005f13f0(2);
    local_138 = FUN_005f13f0(3);
  }
  iVar4 = local_144;
  if ((*(int *)(param_1 + 0xdd0) != 0) && (*(int *)(param_1 + 0xdd0) != param_2)) {
    FUN_005fd4c0(1);
    FUN_004e41e0();
  }
  if (*(int *)(param_1 + 0xdd0) == param_2) {
    if (*(int *)(param_1 + 0xdf4) == param_3) goto LAB_004dea91;
    if (*(int *)(param_1 + 0xdd0) != param_2) goto LAB_004de3c2;
    local_130 = 1;
  }
  else {
LAB_004de3c2:
    local_13c = 1;
  }
  *(undefined4 *)(param_1 + 0xe20) = 0;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfff7ffff;
  *(int *)(param_1 + 0xdd0) = param_2;
  *(undefined4 *)(param_1 + 0xc44) = 0;
  *(undefined4 *)(param_1 + 0xe24) = 0;
  *(undefined4 *)(param_1 + 0xe1c) = 0;
  *(undefined4 *)(param_1 + 0xde0) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdd8) = 0x10;
  *(int *)(param_1 + 0xdf0) = param_2;
  *(undefined4 *)(param_1 + 0xddc) = 0;
  *(undefined4 *)(param_1 + 0xdf8) = 0;
  *(int *)(param_1 + 0xdf4) = param_3;
  *(undefined4 *)(param_1 + 0xde4) = 0;
  *(undefined4 *)(param_1 + 0xdec) = 0xffffffff;
  if (param_2 == 0) {
    local_104[0] = 0;
  }
  else {
    FUN_005f2190(0,0,0xffffffff,0xffffffff,local_104,0x104);
  }
  if ((param_6 == 0) && (*(int *)(param_1 + 0xcb8) != 0)) {
    _SfList_DeleteList_16(*(int *)(param_1 + 0xcb8),0,0xffffffff,0);
    if ((param_2 != 0) && ((*(byte *)(param_2 + 0x134) & 0x20) == 0)) {
      FUN_005f2ad0(*(undefined4 *)(param_2 + 0x14c),*(undefined4 *)(param_1 + 0xcb8),1);
    }
    FUN_004c33d0(iVar5,*(undefined4 *)(param_1 + 0xcb8),0);
    *(undefined4 *)(param_1 + 0xef8) = 0x808000;
    DVar1 = GetSysColor(5);
    *(undefined4 *)(param_1 + 0xbf8) = 0;
    *(DWORD *)(param_1 + 0xefc) = DVar1;
    *(undefined4 *)(param_1 + 0xbfc) = 0;
  }
  iVar2 = *(uint *)(param_1 + 0xe14) - 1;
  if (-1 < iVar2) {
    piVar6 = (int *)(param_1 + 0xe08 + iVar2 * 4);
    local_140 = *(uint *)(param_1 + 0xe14);
    do {
      iVar2 = *piVar6;
      if ((iVar2 != 0) && ((local_13c != 0 || ((local_130 != 0 && (*(int *)(iVar2 + 4) == 2)))))) {
        FUN_005caca0(local_148,iVar2);
        FUN_005cb570(local_148,*piVar6);
        *piVar6 = 0;
        *(int *)(param_1 + 0xe14) = *(int *)(param_1 + 0xe14) + -1;
      }
      piVar6 = piVar6 + -1;
      local_140 = local_140 - 1;
    } while (local_140 != 0);
    local_140 = 0;
  }
  local_14c = *(WPARAM *)(param_1 + 0xe14);
  if ((local_13c != 0) && (local_138 != 0)) {
    uVar3 = _SfGetString_8(DAT_00647204,0x4ff1);
    iVar2 = FUN_005cb970(&local_140,local_148,3,0xffffffff,uVar3);
    if (iVar2 < 0) {
LAB_004de747:
      if (local_140 != 0) {
        FUN_004df180(local_140,1);
      }
    }
    else {
      iVar2 = FUN_005c9cc0(&local_134,local_148,local_140,*(undefined4 *)(local_140 + 4),0,0,0,0,0);
      uVar3 = local_148;
      if (-1 < iVar2) {
        *(uint *)(param_1 + 0xe08 + local_14c * 4) = local_140;
        *(int *)(param_1 + 0xe00 + local_14c * 4) = param_4;
        local_14c = local_14c + 1;
        *(int *)(param_1 + 0xe14) = *(int *)(param_1 + 0xe14) + 1;
        puVar7 = local_12c;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_12c[0] = 0x10;
        local_114 = param_2;
        if (*(double *)(local_138 + 0x48) == _DAT_00610fd8) {
          local_11c = DAT_00647e58;
          local_118 = DAT_00647e5c;
        }
        else {
          local_11c = *(undefined4 *)(local_138 + 0x20);
          local_118 = *(undefined4 *)(local_138 + 0x24);
        }
        local_10c = local_104;
        local_110 = param_4;
        FUN_005b83b0(local_148,1);
        iVar2 = FUN_005c70c0(uVar3,local_134,param_2,local_12c,param_4,1,1);
        FUN_005b84d0(uVar3,1);
        if (iVar2 < 0) {
          local_14c = local_14c - 1;
          *(int *)(param_1 + 0xe14) = *(int *)(param_1 + 0xe14) + -1;
          *(undefined4 *)(param_1 + 0xe08 + local_14c * 4) = 0;
          *(undefined4 *)(param_1 + 0xe00 + local_14c * 4) = 0xffffffff;
        }
        else {
          if ((((DAT_0064a534 != 0) && (local_114 != 0)) && (iVar4 = FUN_005f13f0(3), iVar4 != 0))
             && (*(double *)(iVar4 + 0x48) != _DAT_00610fd8)) {
            *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar4 + 0x48);
            *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar4 + 0x4c);
          }
          *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x80000;
          FUN_00457e90(iVar5,0,0);
          FUN_00457e90(iVar5,local_11c,local_118);
          FUN_00454330(iVar5,1);
          *(uint *)(param_1 + 0xe1c) = *(uint *)(param_1 + 0xe1c) | 2;
          FUN_0043d0c0(local_134);
        }
        iVar4 = local_144;
        if (-1 < iVar2) goto LAB_004de747;
      }
      FUN_005cb570(local_148,local_140);
    }
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xe98) = 0;
    if (local_13c == 0) {
      if (local_138 == 0) {
        FUN_00457e90(iVar5,0,0);
        FUN_00454330(iVar5,0);
      }
      goto LAB_004de9eb;
    }
  }
  else {
    local_144 = 0;
    uVar3 = _SfGetString_8(DAT_00647204,0x5633);
    iVar2 = FUN_005cb970(&local_144,local_148,2,0xffffffff,uVar3);
    if ((iVar2 < 0) ||
       (iVar2 = FUN_005c9cc0(&local_134,local_148,local_144,*(undefined4 *)(local_144 + 4),0,0,0,0,0
                            ), iVar2 < 0)) {
LAB_004de8a4:
      FUN_005cb570(local_148,local_144);
      local_144 = 0;
LAB_004dea2a:
      *(undefined4 *)(param_1 + 0xe98) = 0;
      FUN_00457e90(iVar5,0,0);
      FUN_00454330(iVar5,0);
    }
    else {
      *(int *)(param_1 + 0xe08 + local_14c * 4) = local_144;
      *(int *)(param_1 + 0xe00 + local_14c * 4) = param_3;
      local_14c = local_14c + 1;
      *(int *)(param_1 + 0xe14) = *(int *)(param_1 + 0xe14) + 1;
      uVar3 = *(undefined4 *)(iVar4 + 0x20);
      puVar7 = local_12c;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_118 = *(undefined4 *)(iVar4 + 0x24);
      local_10c = local_104;
      local_12c[0] = 0x10;
      local_114 = param_2;
      local_110 = param_3;
      local_11c = uVar3;
      FUN_005b83b0(local_148,1);
      iVar2 = FUN_005c70c0(local_148,local_134,param_2,local_12c,param_3,1,1);
      FUN_005b84d0(local_148,1);
      if (iVar2 < 0) {
        local_14c = local_14c - 1;
        *(int *)(param_1 + 0xe14) = *(int *)(param_1 + 0xe14) + -1;
        *(undefined4 *)(param_1 + 0xe08 + local_14c * 4) = 0;
        *(undefined4 *)(param_1 + 0xe00 + local_14c * 4) = 0xffffffff;
        goto LAB_004de8a4;
      }
      *(uint *)(param_1 + 0xe1c) = *(uint *)(param_1 + 0xe1c) | 1;
      if (local_144 == 0) goto LAB_004dea2a;
      FUN_004df180(local_144,1);
      *(undefined4 *)(param_1 + 0xde0) = 0;
      *(undefined4 *)(param_1 + 0xde4) = 0;
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(param_1 + 0xdec) = *(undefined4 *)(iVar4 + 0x24);
      local_140 = *(uint *)(*(int *)(iVar4 + 8) + 0x134) >> 5 & 1;
      if ((local_140 == 0) && (local_140 = *(uint *)(iVar4 + 0x8c) & 1, local_140 == 0)) {
        puVar7 = *(undefined4 **)(iVar4 + 0x2c);
        *(undefined4 *)(param_1 + 0xe28) = *puVar7;
        *(undefined4 *)(param_1 + 0xe2c) = puVar7[1];
        *(undefined4 *)(param_1 + 0xe30) = puVar7[2];
        *(undefined4 *)(param_1 + 0xe34) = puVar7[3];
        *(undefined2 *)(param_1 + 0xe38) = *(undefined2 *)(puVar7 + 4);
      }
      else {
        *(undefined4 *)(param_1 + 0xe28) = 0;
        *(undefined4 *)(param_1 + 0xe2c) = 0;
        *(undefined4 *)(param_1 + 0xe30) = 0;
        *(undefined4 *)(param_1 + 0xe34) = 0;
        *(undefined2 *)(param_1 + 0xe38) = 0;
      }
      *(undefined4 *)(param_1 + 0xe20) = *(undefined4 *)(iVar4 + 0x50);
      *(undefined4 *)(param_1 + 0xe24) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(param_1 + 0xec4) = 1;
      *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x80000;
      if ((local_13c == 0) || (local_138 == 0)) {
        FUN_00457e90(iVar5,0,0);
        FUN_00457e90(iVar5,*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24));
        FUN_00454330(iVar5,1);
      }
      else if ((*(int *)(local_138 + 0x24) <= *(int *)(iVar4 + 0x24)) &&
              ((*(int *)(local_138 + 0x24) < *(int *)(iVar4 + 0x24) ||
               (*(uint *)(local_138 + 0x20) < *(uint *)(iVar4 + 0x20))))) {
        FUN_00457e90(iVar5,0,0);
        FUN_00457e90(iVar5,*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24));
      }
      *(undefined4 *)(param_1 + 0xe98) = *(undefined4 *)(iVar4 + 0x60);
    }
    if (local_13c == 0) {
LAB_004de9eb:
      if (local_130 == 0) goto LAB_004dea91;
    }
  }
  FUN_004decb0(iVar5,param_2);
  if (local_13c != 0) {
    FUN_00454110(iVar5);
  }
  FUN_004dd180(iVar5,DAT_0064a578);
  if (param_5 == 0) {
    FUN_00453280(iVar5,0,0,0,0,1);
  }
  else {
    FUN_004deb60(iVar5,param_5);
  }
  FUN_004a4020(iVar5,DAT_006476c8,DAT_006476cc);
  FUN_004530a0(iVar5,0x7fff);
LAB_004dea91:
  FUN_004df210(iVar5);
  FUN_004e40a0(0);
  local_14c = 0;
  hWnd = *(HWND *)(param_1 + 0xf1c);
  _SfGetString_8(DAT_00647204,0x4ff0);
  iVar4 = *(int *)(param_1 + 0xdd0);
  if (iVar4 != 0) {
    iVar4 = FUN_004dafb0(local_148,iVar4,iVar4 + 0x170,0,0,0,0,&local_14c);
    if (iVar4 < 0) {
      local_14c = 0;
    }
    else {
      local_14c = local_14c + 1;
    }
  }
  SendMessageA(hWnd,0x14e,local_14c,0);
  *(WPARAM *)(param_1 + 0xf30) = local_14c;
  FUN_004de230(param_1,iVar5);
  if ((param_6 == 0) && (param_5 == 0)) {
    FUN_00458370(iVar5,0,0,0xffffffff,0xffffffff);
    FUN_00458dc0(iVar5);
  }
  FUN_004de1b0(param_1);
  FUN_00453030(iVar5);
  return;
}



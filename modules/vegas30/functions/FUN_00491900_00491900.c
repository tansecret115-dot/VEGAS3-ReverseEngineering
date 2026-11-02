/* Module: vegas30.exe
   Function: FUN_00491900
   Address: 00491900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00491900(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  code *pcVar3;
  HMENU hMenu;
  LPCSTR lpString;
  short *psVar4;
  uint uVar5;
  int iVar6;
  LPARAM LVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  UINT uIDEnableItem;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  tagPOINT local_98;
  undefined1 local_90 [144];
  
  switch(param_2[2]) {
  case 1:
  case 0xb:
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffe;
    return 0;
  case 3:
  case 0xf:
    SendMessageA((HWND)*param_2,0x40e,0,(LPARAM)&local_c0);
    SendMessageA(*(HWND *)(param_1 + 0xdc),0x418,0,(LPARAM)local_90);
    if (*(int *)(param_1 + 0x94) == 1) {
      hMenu = (HMENU)FUN_004047d0(0x31b,0);
      SetMenuDefaultItem(hMenu,0xa7a3,0);
      pcVar3 = EnableMenuItem_exref;
      if ((DAT_0064761c & 0x800) != 0) {
        EnableMenuItem(hMenu,0xa7a3,1);
        EnableMenuItem(hMenu,0xa798,1);
        EnableMenuItem(hMenu,0xa799,1);
        EnableMenuItem(hMenu,0xa79a,1);
        EnableMenuItem(hMenu,0xa79b,1);
        EnableMenuItem(hMenu,0xa0a2,1);
      }
      if (((*(byte *)(param_1 + 0x80) & 2) == 0) || (local_bc != 0xffff)) {
        EnableMenuItem(hMenu,0xa79b,1);
        EnableMenuItem(hMenu,0xa798,1);
        if ((local_bc == 0xffff) || (**(uint **)(param_1 + 0x134) <= local_c0)) goto LAB_00491ad1;
        uVar2 = *(ushort *)(*(int *)(param_1 + 0xf4) + 4 + local_bc * 0x10);
        if ((uVar2 & 0x4000) == 0) {
          if ((uVar2 & 0x8000) == 0) goto LAB_00491ad1;
        }
        else {
          iVar6 = FUN_0048ae20(local_90,local_c0,local_bc,3);
          if (iVar6 != 1) goto LAB_00491ad1;
        }
      }
      else {
LAB_00491ad1:
        EnableMenuItem(hMenu,0xa7a3,1);
      }
      if (**(uint **)(param_1 + 0x134) <= (uint)param_2[3]) {
        EnableMenuItem(hMenu,0xa0a2,1);
      }
      if ((**(uint **)(param_1 + 0x134) <= local_c0) && (local_b8 == local_c0)) {
        EnableMenuItem(hMenu,0xa798,1);
        EnableMenuItem(hMenu,0xa79b,1);
        EnableMenuItem(hMenu,0xa799,1);
joined_r0x00491c6a:
        if (local_bc != 0xffff) {
          (*pcVar3)(hMenu,0xa79a,1);
        }
      }
    }
    else {
      hMenu = (HMENU)FUN_004047d0(0x31b,1);
      SetMenuDefaultItem(hMenu,0xa7a3,0);
      pcVar3 = EnableMenuItem_exref;
      if (((*(byte *)(param_1 + 0x80) & 2) == 0) || (local_bc != 0xffff)) {
        EnableMenuItem(hMenu,0xa79b,1);
        EnableMenuItem(hMenu,0xa798,1);
        if ((local_bc == 0xffff) ||
           ((*(uint **)(param_1 + 0x134) == (uint *)0x0 ||
            (**(uint **)(param_1 + 0x134) <= local_c0)))) goto LAB_00491bf3;
        uVar2 = *(ushort *)(*(int *)(param_1 + 0xf4) + 4 + local_bc * 0x10);
        if ((uVar2 & 0x4000) != 0) {
          iVar6 = FUN_0048ae20(local_90,local_c0,local_bc,3);
          if (iVar6 == 1) goto LAB_00491c24;
          EnableMenuItem(hMenu,0xa7a3,1);
          uIDEnableItem = 0xa79a;
          goto LAB_00491c21;
        }
        if ((uVar2 & 0x8000) == 0) {
          uIDEnableItem = 0xa7a3;
          goto LAB_00491c21;
        }
      }
      else {
LAB_00491bf3:
        EnableMenuItem(hMenu,0xa7a3,1);
        if (*(int *)(param_1 + 0x94) == 2) {
          EnableMenuItem(hMenu,0xa799,1);
          EnableMenuItem(hMenu,0xa79a,1);
          uIDEnableItem = 0xa798;
LAB_00491c21:
          EnableMenuItem(hMenu,uIDEnableItem,1);
        }
      }
LAB_00491c24:
      if (((*(uint **)(param_1 + 0x134) == (uint *)0x0) ||
          (**(uint **)(param_1 + 0x134) <= local_c0)) && (local_b8 == local_c0)) {
        EnableMenuItem(hMenu,0xa798,1);
        EnableMenuItem(hMenu,0xa79b,1);
        EnableMenuItem(hMenu,0xa799,1);
        goto joined_r0x00491c6a;
      }
    }
    if (hMenu != (HMENU)0x0) {
      local_98.x = param_2[5];
      local_98.y = param_2[6];
      ClientToScreen(*(HWND *)(param_1 + 0xdc),&local_98);
      iVar6 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&local_98,2);
      if (iVar6 != 0) {
        FUN_004921a0(iVar6,param_1,param_2);
        return 0;
      }
    }
    break;
  case 4:
  case 0x14:
  case 0x15:
    uVar9 = param_2[4];
    if (uVar9 < *(uint *)(param_1 + 0xf8)) {
      switch(*(undefined2 *)(uVar9 * 0x10 + 8 + *(int *)(param_1 + 0xf4))) {
      case 2:
      case 3:
      case 0x27:
      case 0x28:
        break;
      default:
        if (param_2[2] == 4) {
          SendMessageA((HWND)*param_2,0x42f,0,0);
          return 0;
        }
        break;
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x30:
      case 0x4a:
      case 0x4b:
        FUN_0048ef20(param_1,uVar9,param_2[3],1);
        return 0;
      }
    }
    break;
  case 0xd:
    uVar5 = SendMessageA((HWND)*param_2,0x41b,0,0);
    SendMessageA((HWND)*param_2,0x40e,1,(LPARAM)&local_c0);
    uVar9 = param_2[3];
    if (uVar9 < 0xff01) {
      if (local_c0 < uVar9) {
        uVar9 = uVar9 + 1;
      }
      if (uVar5 < uVar9) {
        uVar9 = uVar5;
      }
    }
    else {
      uVar9 = 0;
    }
    SendMessageA((HWND)*param_2,0x426,0x18,(LPARAM)&local_b0);
    if (uVar9 < local_c0) {
      local_b0 = local_b0 + (uVar9 - local_c0);
      local_a8 = local_a8 + (uVar9 - local_c0);
    }
    else if (local_b8 < uVar9) {
      local_b0 = local_b0 + -1 + (uVar9 - local_b8);
      local_a8 = local_a8 + -1 + (uVar9 - local_b8);
    }
    SendMessageA((HWND)*param_2,0x427,0x18,(LPARAM)&local_b0);
    SendMessageA((HWND)*param_2,0x422,0xffffffff,0x1ffff);
    return 0;
  case 0xe:
    if (*(uint *)(param_1 + 0x98) < *(uint *)(param_1 + 0xa0 + *(int *)(param_1 + 0x94) * 8)) {
      lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x5290);
      SetWindowTextA(*(HWND *)(param_1 + 0x88),lpString);
    }
    uVar9 = param_2[4];
    if (uVar9 != 0xffff) {
      uVar9 = -(uint)(uVar9 < 0xff00) & uVar9;
      local_bc = param_2[7];
      if (local_bc < uVar9) {
        uVar9 = uVar9 + 1;
      }
      if (*(uint *)(param_1 + 0xf8) <= uVar9) {
        uVar9 = *(uint *)(param_1 + 0xf8);
      }
      local_c0 = 0xffff;
      local_b8 = 0xffff;
      local_b4 = local_bc;
      SendMessageA((HWND)*param_2,0x407,uVar9,(LPARAM)&local_c0);
      LVar7 = FUN_00489d40(param_1,*(undefined4 *)(param_1 + 0x120));
      SendMessageA((HWND)*param_2,0x43b,*(WPARAM *)(param_1 + 0x124),LVar7);
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0xf8);
    uVar9 = 0;
    if (iVar6 != 0) {
      psVar4 = (short *)(*(int *)(param_1 + 0xf4) + 2);
      do {
        if (0 < *psVar4) {
          uVar9 = uVar9 + 1;
        }
        psVar4 = psVar4 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (1 < uVar9) {
        if (*(uint *)(param_1 + 0x120) ==
            (uint)*(ushort *)(param_2[7] * 0x10 + 8 + *(int *)(param_1 + 0xf4))) {
          SendMessageA((HWND)*param_2,0x43b,*(WPARAM *)(param_1 + 0x124),0xffff);
          *(undefined4 *)(param_1 + 0x124) = 1;
          *(undefined4 *)(param_1 + 0x120) = 0;
          iVar6 = FUN_00489d80(*(undefined4 *)(param_1 + 0x94),0,1,param_1 + 0xfc);
          if (((*(int *)(param_1 + 0x134) != 0) && ((*(byte *)(param_1 + 0x80) & 2) != 0)) &&
             (iVar6 != 0)) {
            _SfList_Sort_12(*(int *)(param_1 + 0x134),param_1 + 0xfc,&LAB_0048ab50);
            *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffff7;
          }
        }
        uVar9 = param_2[7];
        if (uVar9 < *(int *)(param_1 + 0xf8) - 1U) {
          iVar6 = uVar9 << 4;
          do {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 0xf4) + 0x10 + iVar6);
            puVar8 = (undefined4 *)(*(int *)(param_1 + 0xf4) + iVar6);
            uVar9 = uVar9 + 1;
            iVar6 = iVar6 + 0x10;
            *puVar8 = *puVar1;
            puVar8[1] = puVar1[1];
            puVar8[2] = puVar1[2];
            puVar8[3] = puVar1[3];
          } while (uVar9 < *(int *)(param_1 + 0xf8) - 1U);
        }
        local_a4 = *(undefined4 *)(param_1 + 0xf4);
        local_b0 = *(int *)(param_1 + 0xf8) + -1;
        *(int *)(param_1 + 0xf8) = local_b0;
        local_a0 = *(undefined4 *)(param_1 + 300);
        local_a8 = 0;
        local_ac = local_b0;
        SendMessageA(*(HWND *)(param_1 + 0xdc),0x40b,0,(LPARAM)&local_b0);
        SendMessageA((HWND)*param_2,0x422,0xffffffff,0x1ffff);
        return 0;
      }
    }
    break;
  case 0x11:
    if (param_2[4] != 0xffff) {
      uVar9 = (uint)*(ushort *)(param_2[4] * 0x10 + 8 + *(int *)(param_1 + 0xf4));
      if (uVar9 == *(uint *)(param_1 + 0x120)) {
        uVar11 = *(undefined4 *)(param_1 + 0x94);
        bVar10 = *(int *)(param_1 + 0x124) == 0;
      }
      else {
        uVar11 = *(undefined4 *)(param_1 + 0x94);
        bVar10 = true;
      }
      iVar6 = FUN_00489d80(uVar11,uVar9,bVar10,param_1 + 0xfc);
      if ((iVar6 != 0) && (uVar5 = *(uint *)(param_1 + 0x80), (uVar5 & 2) != 0)) {
        if (uVar9 == *(uint *)(param_1 + 0x120)) {
          *(uint *)(param_1 + 0x124) = (uint)(*(int *)(param_1 + 0x124) == 0);
        }
        else {
          *(undefined4 *)(param_1 + 0x124) = 1;
        }
        *(uint *)(param_1 + 0x120) = uVar9;
        if ((uVar5 & 4) == 0) {
          *(uint *)(param_1 + 0x80) = uVar5 | 4;
        }
        if (*(int *)(param_1 + 0x134) != 0) {
          _SfList_Sort_12(*(int *)(param_1 + 0x134),param_1 + 0xfc,&LAB_0048ab50);
          *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffff7;
        }
        LVar7 = FUN_00489d40(param_1,*(undefined4 *)(param_1 + 0x120));
        SendMessageA((HWND)*param_2,0x43b,*(WPARAM *)(param_1 + 0x124),LVar7);
        SendMessageA((HWND)*param_2,0x422,0xffffffff,0x1ffff);
      }
    }
  }
  return 0;
}



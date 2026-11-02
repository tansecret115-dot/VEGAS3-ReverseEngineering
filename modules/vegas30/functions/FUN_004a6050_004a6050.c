/* Module: vegas30.exe
   Function: FUN_004a6050
   Address: 004a6050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6050(int param_1,undefined4 param_2,HMENU param_3,uint *param_4,int param_5,int param_6
                 ,int param_7)

{
  int *piVar1;
  longlong lVar2;
  SHORT SVar3;
  int iVar4;
  int iVar5;
  LPCSTR pCVar6;
  HMENU pHVar7;
  UINT unaff_EBX;
  uint uVar8;
  UINT UVar9;
  UINT_PTR uIDNewItem;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 local_c5;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  HMENU local_b0;
  UINT local_ac;
  UINT local_a8;
  int local_a4;
  tagPOINT local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [20];
  CHAR local_64 [100];
  
  iVar4 = FUN_00469260(param_1);
  local_c4 = iVar4;
  if ((DAT_0064761c & 0x800) != 0) {
    iVar4 = 0;
    local_c4 = 0;
    EnableMenuItem(param_3,0xa0c0,1);
    EnableMenuItem(param_3,0xa0c6,1);
  }
  local_88 = *(int *)(param_1 + 0xce4);
  local_a8 = 1;
  local_ac = 1;
  local_c0 = *(int *)(param_1 + 0xcec);
  local_b0 = (HMENU)0x0;
  local_90 = 0;
  local_8c = 0;
  local_84 = 0;
  local_94 = 0;
  local_98 = 0;
  local_bc = 0;
  local_b8 = 0;
  if (0 < iVar4) {
    local_a8 = 0;
    local_ac = 0;
    local_90 = 1;
    local_8c = 1;
    local_84 = 1;
    local_94 = 1;
    local_98 = 1;
    local_a0.x = FUN_004a4560(param_1);
    if (((int *)local_a0.x != (int *)0x0) && (local_a4 = 0, 0 < iVar4)) {
      do {
        if ((local_a4 < 0) || (*(int *)local_a0.x + -1 < local_a4)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(local_a0.x + 8) + local_a4 * 4);
        }
        if (iVar4 != 0) {
          iVar5 = FUN_005c68e0(iVar4);
          if ((int)local_b0 <= iVar5) {
            local_b0 = (HMENU)FUN_005c68e0(iVar4);
          }
          if (0 < *(int *)(iVar4 + 0x38)) {
            local_bc = 1;
          }
          if (*(int *)(iVar4 + 4) == 2) {
            local_ac = 1;
            if ((*(uint *)(iVar4 + 0x10) & 0x200) == 0) {
              local_90 = 0;
            }
            if ((*(byte *)(iVar4 + 0xfc) & 1) == 0) {
              local_8c = 0;
            }
            local_84 = 0;
            local_94 = 0;
            local_98 = 0;
          }
          else if (*(int *)(iVar4 + 4) == 3) {
            uVar8 = *(uint *)(iVar4 + 0xf8);
            local_a8 = 1;
            local_b8 = 1;
            if ((uVar8 & 1) == 0) {
              local_84 = 0;
            }
            if ((uVar8 & 0x80) == 0) {
              local_94 = 0;
            }
            if ((uVar8 & 0x100) == 0) {
              local_98 = 0;
            }
            local_90 = 0;
            local_8c = 0;
          }
        }
        local_a4 = local_a4 + 1;
        iVar4 = local_c4;
      } while (local_a4 < local_c4);
    }
  }
  local_7c = 0;
  local_80 = 0;
  if ((iVar4 == 0) || (iVar4 = FUN_004a58b0(param_1,&local_7c,&local_80), iVar4 == 0)) {
    EnableMenuItem(param_3,0xa08f,1);
    EnableMenuItem(param_3,0xa092,1);
    EnableMenuItem(param_3,0xa094,1);
    EnableMenuItem(param_3,0xa77c,1);
    EnableMenuItem(param_3,0xa78b,1);
  }
  else {
    if (param_4 != (uint *)0x0) {
      *param_4 = local_7c & 8 | local_80;
    }
    local_a0.x = local_7c >> 3 & 1;
    uVar10 = local_80 >> 1;
    uVar8 = local_80 >> 5;
    CheckMenuItem(param_3,0xa77c,local_80 >> 5 & 8);
    CheckMenuItem(param_3,0xa08f,-(uint)((uVar10 & 1) != 0) & 8);
    CheckMenuItem(param_3,0xa092,-(uint)((int *)local_a0.x != (int *)0x0) & 8);
    CheckMenuItem(param_3,0xa094,-(uint)((uVar8 & 1) != 0) & 8);
    EnableMenuItem(param_3,0xa7bf,local_ac);
  }
  iVar4 = FUN_00469160(param_1);
  if (iVar4 == 0) {
    EnableMenuItem(param_3,0x9d0f,1);
    EnableMenuItem(param_3,0x9d0b,1);
    EnableMenuItem(param_3,0x9d0c,1);
  }
  iVar4 = FUN_004690d0(param_1);
  if (iVar4 == 0) {
    EnableMenuItem(param_3,0x9d0d,1);
  }
  if (param_5 == 6) {
    iVar4 = _SfGetSubmenuByID_12(param_3,0xa2b2,0);
    if (iVar4 != 0) {
      FUN_004c6bc0(param_1,local_88,iVar4,0);
    }
  }
  else if (param_5 == 7) {
    FUN_004c6b60(param_1,*(undefined4 *)(param_1 + 0xce4),param_3,0);
  }
  pcVar11 = AppendMenuA_exref;
  if ((*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0) ||
     (bVar12 = false, local_c4 == 0)) {
    iVar4 = GetMenuItemCount(param_3);
    if (iVar4 != 0) {
      AppendMenuA(param_3,0x800,0,(LPCSTR)0x0);
    }
    iVar4 = *(int *)(param_1 + 200) + 1;
    if (local_c4 < 1) {
LAB_004a63fa:
      if (local_88 != 0) {
        pCVar6 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4ff7);
        AppendMenuA(param_3,0,0xa1d1,pCVar6);
        if (*(int *)(local_88 + 4) == 3) {
          pCVar6 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6dd4);
          AppendMenuA(param_3,0,0xa0a4,pCVar6);
          pCVar6 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6dd5);
          AppendMenuA(param_3,0,0xa0a5,pCVar6);
          AppendMenuA(param_3,0x800,0,(LPCSTR)0x0);
        }
      }
    }
    else if (((*(int *)(param_1 + 0xb80) - iVar4) + -2 <= *(int *)(param_1 + 0x90)) &&
            (*(int *)(param_1 + 0x90) <=
             *(int *)(param_1 + 0xb84) + *(int *)(param_1 + 0xb80) + iVar4)) goto LAB_004a63fa;
    if (*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0) {
      _SfLoadString_16(DAT_00647204,0x4ff8,local_64,0x40);
      _SfStringReplaceChars_12(local_64,9,8);
      _SfStringReplaceChars_12(local_64,8,8);
      AppendMenuA(param_3,0,0x9dd4,local_64);
    }
    bVar12 = local_c4 == 0;
  }
  if ((bVar12 || local_c4 < 0) || (local_c0 == 0)) {
    EnableMenuItem(param_3,0xa09f,1);
    EnableMenuItem(param_3,0xa08c,1);
    EnableMenuItem(param_3,0xa08d,1);
    EnableMenuItem(param_3,0xa0a2,1);
    EnableMenuItem(param_3,0xa0a1,1);
    pcVar11 = CheckMenuItem_exref;
    goto LAB_004a6ab3;
  }
  EnableMenuItem(param_3,0xa774,(uint)(local_c4 < 2));
  if ((*(int *)(param_1 + 0xcec) == 0) || (*(int *)(*(int *)(param_1 + 0xcec) + 0x38) < 1)) {
    UVar9 = (UINT)(local_bc == 0);
  }
  else {
    UVar9 = 0;
  }
  EnableMenuItem(param_3,0xa775,UVar9);
  EnableMenuItem(param_3,0xa776,UVar9);
  EnableMenuItem(param_3,0xc578,UVar9);
  UVar9 = 1;
  if (((*(int *)(local_c0 + 0x50) != 0) &&
      (iVar4 = *(int *)(*(int *)(local_c0 + 0x50) + 0x18), iVar4 != 0)) && (local_c4 == 1)) {
    UVar9 = *(uint *)(iVar4 + 0x134) & 1;
  }
  EnableMenuItem(param_3,0xa777,UVar9);
  if ((local_c4 == 1) && (0 < (int)local_b0)) {
    UVar9 = 0;
  }
  else {
    UVar9 = 1;
  }
  EnableMenuItem(param_3,0xa0a2,UVar9);
  EnableMenuItem(param_3,0xa0a1,UVar9);
  pHVar7 = local_b0;
  EnableMenuItem(param_3,0xa77b,(uint)((int)local_b0 < 1));
  EnableMenuItem(param_3,0xa0a3,(uint)((int)pHVar7 < 2));
  EnableMenuItem(param_3,0xa0a6,(uint)((int)pHVar7 < 2));
  if (param_5 == 4) {
    if (((DAT_00647e30 != 1) || (local_b8 == 0)) || (local_c4 != 1)) {
      local_b8 = 0x146b;
      local_b4 = 0;
      _SfCullMenu_16(param_3,&local_b8,2,1);
      goto LAB_004a65f9;
    }
LAB_004a6603:
    if ((((*(int *)(local_c0 + 4) == 2) || ((*(int *)(local_c0 + 4) == 3 && (param_7 == 0)))) &&
        (local_b0 = (HMENU)_SfGetSubmenuByID_12(param_3,0xa0a2,0), local_b0 != (HMENU)0x0)) &&
       (iVar4 = FUN_005c68e0(local_c0), local_a4 = iVar4, 0 < iVar4)) {
      AppendMenuA(local_b0,0x800,0,(LPCSTR)0x0);
      local_a0.x = FUN_005c6950(local_c0);
      local_b8 = iVar4 - 10;
      local_bc = 0;
      if ((int)local_b8 < 0) {
        local_b8 = 0;
      }
      if (0 < iVar4) {
        uIDNewItem = 0x4e84;
        do {
          if (9 < (int)(uIDNewItem - 0x4e84)) break;
          piVar1 = (int *)((local_b8 - 0x4e84) + uIDNewItem);
          iVar4 = FUN_005c6910(local_c0,piVar1);
          if (piVar1 == (int *)local_a0.x) {
            AppendMenuA(local_b0,0x208,uIDNewItem,*(LPCSTR *)(iVar4 + 0x20));
            local_bc = 1;
          }
          else {
            AppendMenuA(local_b0,0,uIDNewItem,*(LPCSTR *)(iVar4 + 0x20));
          }
          iVar4 = uIDNewItem - 0x4e83;
          uIDNewItem = uIDNewItem + 1;
        } while (iVar4 < local_a4);
        pcVar11 = AppendMenuA_exref;
        if (local_bc != 0) goto LAB_004a672f;
      }
      if (*(int *)(local_c0 + 0x50) != 0) {
        (*pcVar11)(local_b0,0x208,0x4e8e,*(undefined4 *)(*(int *)(local_c0 + 0x50) + 0x20));
      }
    }
  }
  else {
LAB_004a65f9:
    if (local_c4 == 1) goto LAB_004a6603;
  }
LAB_004a672f:
  if (*(int *)(local_c0 + 4) == 2) {
    if ((((*(int *)(local_c0 + 0x50) == 0) || (*(int *)(*(int *)(local_c0 + 0x50) + 0x18) == 0)) ||
        (iVar4 = FUN_005f13f0(2), iVar4 == 0)) ||
       ((*(int *)(iVar4 + 0x2c) == 0 || (*(short *)(*(int *)(iVar4 + 0x2c) + 2) == 1)))) {
      EnableMenuItem(param_3,0xc874,1);
      EnableMenuItem(param_3,0xc86e,1);
      EnableMenuItem(param_3,0xc86f,1);
      EnableMenuItem(param_3,0xc870,1);
      EnableMenuItem(param_3,0xc871,1);
      EnableMenuItem(param_3,0xc872,1);
      EnableMenuItem(param_3,0xc873,1);
    }
    else {
      switch(*(undefined4 *)(local_c0 + 0xf8)) {
      default:
        CheckMenuItem(param_3,0xc874,8);
        break;
      case 0x3e9:
        CheckMenuItem(param_3,0xc86e,8);
        break;
      case 0x3ea:
        CheckMenuItem(param_3,0xc86f,8);
        break;
      case 0x3eb:
        CheckMenuItem(param_3,0xc870,8);
        break;
      case 0x3ec:
        CheckMenuItem(param_3,0xc871,8);
        break;
      case 0x3ed:
        CheckMenuItem(param_3,0xc872,8);
        break;
      case 0x3ee:
        CheckMenuItem(param_3,0xc873,8);
      }
    }
  }
  UVar9 = 1;
  if ((local_c4 == 1) && (*(int *)(local_c0 + 0x50) != 0)) {
    UVar9 = 0;
  }
  EnableMenuItem(param_3,0xa08c,UVar9);
  iVar5 = local_c0;
  iVar4 = local_c4;
  if ((local_c4 == 1) && (*(int *)(local_c0 + 0x50) != 0)) {
    UVar9 = 0;
  }
  else {
    UVar9 = 1;
  }
  EnableMenuItem(param_3,0xa0a0,UVar9);
  UVar9 = local_a8;
  if (*(int *)(iVar5 + 0x50) == 0) {
    UVar9 = 1;
  }
  EnableMenuItem(param_3,0xa778,UVar9);
  UVar9 = local_a8;
  if (*(int *)(iVar5 + 0x50) == 0) {
    UVar9 = 1;
  }
  EnableMenuItem(param_3,0xa7f6,UVar9);
  if ((iVar4 == 1) && (*(int *)(iVar5 + 0x50) != 0)) {
    UVar9 = 0;
  }
  else {
    UVar9 = 1;
  }
  EnableMenuItem(param_3,0xa7f3,UVar9);
  uVar8 = (uint)(iVar4 != 1);
  EnableMenuItem(param_3,0xa08d,uVar8);
  EnableMenuItem(param_3,0xa789,uVar8);
  EnableMenuItem(param_3,0xc867,0);
  pcVar11 = CheckMenuItem_exref;
  if (param_5 == 4) {
    if (local_ac == 0) {
      EnableMenuItem(param_3,0xa782,uVar8);
      EnableMenuItem(param_3,0xa781,uVar8);
      DeleteMenu(param_3,0xa7bc,0);
      iVar4 = FUN_0047c7d0(iVar5 + 0x98,0xc9);
      pcVar11 = CheckMenuItem_exref;
      if (iVar4 != 0) {
        CheckMenuItem(param_3,0xa7bd,8);
      }
      iVar4 = FUN_0047c7d0(iVar5 + 0x98,0xca);
      if (iVar4 != 0) {
        CheckMenuItem(param_3,0xa7bf,8);
      }
    }
    else {
      EnableMenuItem(param_3,0xa782,1);
      EnableMenuItem(param_3,0xa781,1);
      pcVar11 = CheckMenuItem_exref;
    }
  }
  iVar4 = local_c0;
  if (param_7 == 0) {
    if ((*(int *)(local_c0 + 0x50) != 0) && (*(int *)(local_c0 + 4) == 2)) {
      if (local_a8 == 0) {
        FUN_004a5f60(param_3,0xa778,0xa7f6);
      }
      else {
        EnableMenuItem(param_3,0xa778,1);
        EnableMenuItem(param_3,0xa789,1);
      }
    }
    if (((*(int *)(iVar4 + 4) == 2) || (*(int *)(iVar4 + 4) == 3)) &&
       (FUN_004a6fb0(param_1,param_3,iVar4,*(uint *)(param_1 + 0x174) & 0xff,&local_b8),
       *(int *)(iVar4 + 4) == 3)) {
      param_6 = *(int *)(iVar4 + 8);
    }
  }
  else {
    FUN_004a6fb0(param_1,param_3,local_c0,*(uint *)(param_1 + 0x174) & 0xff,&local_b8);
  }
LAB_004a6ab3:
  UVar9 = local_ac;
  if (0 < local_c4) {
    EnableMenuItem(param_3,0xa1c5,local_ac);
    (*pcVar11)(param_3,0xa1c5,-(local_84 != 0) & 8);
    EnableMenuItem(param_3,0xa1c6,UVar9);
    (*pcVar11)(param_3,0xa1c6,-((int *)local_a0.x != (int *)0x0) & 8);
    EnableMenuItem(param_3,0xc613,UVar9);
    (*pcVar11)(param_3,0xc613,-(local_b0 != (HMENU)0x0) & 8);
    EnableMenuItem(param_3,0xa78a,unaff_EBX);
    (*pcVar11)(param_3,0xa78a,-(local_b4 != 0) & 8);
    EnableMenuItem(param_3,0xc883,unaff_EBX);
    (*pcVar11)(param_3,0xc883,-(local_bc != 0) & 8);
  }
  if ((local_88 != 0) && (*(int *)(local_88 + 4) == 3)) {
    if (DAT_0064b4e4 == 0) {
      iVar4 = FUN_00601ab0(&local_bc,&local_b8,1);
      if (iVar4 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar8 = (local_b8 & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar8) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_bc;
          DAT_0064b4e4 = uVar8;
        }
      }
    }
    if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
      local_b8 = 0xa0c6;
      local_b4 = 0;
      _SfCullMenu_16(param_3,&local_b8,2,1);
    }
  }
  if (DAT_0064b4e4 == 0) {
    iVar4 = FUN_00601ab0(&local_bc,&local_b8,1);
    if (iVar4 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar8 = (local_b8 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar8) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_bc;
        DAT_0064b4e4 = uVar8;
      }
    }
  }
  if ((((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) && (param_6 != 0)) && (local_ac == 0)) {
    local_a0.x = 0;
    local_a0.y = 0;
    ClientToScreen(*(HWND *)(param_1 + 4),&local_a0);
    local_b8 = (*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0xac0)) - local_a0.x;
    lVar13 = ftol();
    lVar2 = *(longlong *)(param_1 + 0xb88);
    pHVar7 = CreatePopupMenu();
    SVar3 = GetKeyState(0x11);
    local_b8 = FUN_005a2800(param_1,param_6,lVar13 + lVar2,SVar3 < 0,&local_bc,0,0);
    if (local_b8 != 0) {
      uVar8 = -(uint)(local_bc != 0) & 3;
      iVar4 = _SfLoadString_16(DAT_00647204,uVar8 + 0x6dad,local_64,100);
      pcVar11 = AppendMenuA_exref;
      if (iVar4 != 0) {
        iVar4 = GetMenuItemCount(pHVar7);
        pcVar11 = AppendMenuA_exref;
        if (iVar4 != 0) {
          AppendMenuA(pHVar7,0x800,0,(LPCSTR)0x0);
        }
        iVar4 = _SfLoadString_16(DAT_00647204,0x6db3,local_78,0x14);
        if (iVar4 != 0) {
          FUN_004a70b0(pHVar7,local_64,&DAT_00649998,0xc516,local_78);
        }
        iVar4 = _SfLoadString_16(DAT_00647204,0x6db4,local_78,0x14);
        if (iVar4 != 0) {
          FUN_004a70b0(pHVar7,local_64,&DAT_006499c0,0xc517,local_78);
        }
        iVar4 = _SfLoadString_16(DAT_00647204,0x6db5,local_78,0x14);
        if (iVar4 != 0) {
          FUN_004a70b0(pHVar7,local_64,&DAT_006499e8,0xc518,local_78);
        }
      }
      iVar4 = _SfLoadString_16(DAT_00647204,uVar8 + 0x6dae,local_64,100);
      if (iVar4 != 0) {
        local_c5 = 0;
        iVar4 = GetMenuItemCount(pHVar7);
        if (iVar4 != 0) {
          (*pcVar11)(pHVar7,0x800,0,0);
        }
        FUN_004a70b0(pHVar7,local_64,&DAT_00649a10,0xc519,&local_c5);
        FUN_004a70b0(pHVar7,local_64,&DAT_00649a38,0xc51a,&local_c5);
        FUN_004a70b0(pHVar7,local_64,&DAT_00649a60,0xc51b,&local_c5);
        FUN_004a70b0(pHVar7,local_64,&DAT_00649a88,0xc51c,&local_c5);
        FUN_004a70b0(pHVar7,local_64,&DAT_00649ab0,0xc51d,&local_c5);
      }
      iVar4 = _SfLoadString_16(DAT_00647204,uVar8 + 0x6daf,local_64,100);
      if (iVar4 != 0) {
        iVar4 = GetMenuItemCount(pHVar7);
        if (iVar4 != 0) {
          (*pcVar11)(pHVar7,0x800,0,0);
        }
        (*pcVar11)(pHVar7,0,0xc52d,local_64);
      }
      InsertMenuA(param_3,1,0x410,(UINT_PTR)pHVar7,"T&ransition");
      InsertMenuA(param_3,2,0x400,(local_b8 == 2) + 0xc5cc,"Transition Prop&erties...");
      if (param_7 == 0) {
        InsertMenuA(param_3,3,0xc00,0,(LPCSTR)0x0);
      }
    }
  }
  return;
}



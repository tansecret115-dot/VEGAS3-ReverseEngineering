/* Module: vegas30.exe
   Function: FUN_0044bbb0
   Address: 0044bbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044bbb0(int param_1,int param_2)

{
  HMENU hMenu;
  HCURSOR pHVar1;
  int *piVar2;
  LPCSTR pCVar3;
  uint uVar4;
  int iVar5;
  UINT flags;
  int local_124;
  int local_120;
  uint local_118;
  HCURSOR local_114;
  tagPOINT local_110;
  LPCSTR local_108;
  undefined1 local_104 [260];
  
  local_114 = (HCURSOR)_SfGetUICursor_4(0x7f00);
  hMenu = CreatePopupMenu();
  pHVar1 = GetCursor();
  if (pHVar1 != local_114) {
    local_114 = SetCursor(local_114);
  }
  GetCursorPos(&local_110);
  local_110.y = local_110.y + 4;
  piVar2 = (int *)FUN_004452b0(param_1);
  if (piVar2 == (int *)0x0) {
    local_124 = 0;
  }
  else {
    local_124 = *piVar2;
  }
  local_118 = 1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (local_124 + -1 < param_2) {
    param_2 = local_124 + -1;
  }
  if (local_124 != 0) {
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if ((param_2 < 0) || (iVar5 + -1 < param_2)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar2[2] + param_2 * 4);
    }
    local_118 = *(uint *)(iVar5 + 0x78) & 1;
  }
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6da4);
  AppendMenuA(hMenu,-(uint)(local_118 != 0) & 8,0x579,pCVar3);
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6da5);
  AppendMenuA(hMenu,(uint)(param_2 < 1),0x57a,pCVar3);
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6da6);
  AppendMenuA(hMenu,(uint)(local_124 + -1 <= param_2),0x57b,pCVar3);
  AppendMenuA(hMenu,0x800,0xffffffff,(LPCSTR)0x0);
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6da7);
  AppendMenuA(hMenu,0,0x57c,pCVar3);
  AppendMenuA(hMenu,0x800,0xffffffff,(LPCSTR)0x0);
  local_120 = 0;
  if (0 < local_124) {
    do {
      iVar5 = FUN_00508960(local_104,*(undefined4 *)(piVar2[2] + local_120 * 4),0x104);
      if (iVar5 != 0) {
        FUN_0050aaa0(local_104,&local_108);
        AppendMenuA(hMenu,0,local_120 + 0x514,local_108);
      }
      local_120 = local_120 + 1;
    } while (local_120 < local_124);
  }
  flags = 0;
  iVar5 = FUN_00445160(param_1);
  CheckMenuRadioItem(hMenu,0x514,local_124 + 0x514,iVar5 + 0x514,flags);
  uVar4 = TrackPopupMenu(hMenu,0x182,local_110.x,local_110.y,0,*(HWND *)(param_1 + 8),(RECT *)0x0);
  if (hMenu != (HMENU)0x0) {
    DestroyMenu(hMenu);
  }
  if (uVar4 == 0) goto LAB_0044bf74;
  FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
  if (uVar4 < 0x57b) {
    if (uVar4 == 0x57a) {
      iVar5 = FUN_00445380(param_1,0x23b,0,0);
      if (iVar5 < 0) {
        return iVar5;
      }
      iVar5 = FUN_00445590(param_1);
      if (iVar5 < 0) {
        return iVar5;
      }
      iVar5 = _SfList_MoveRange_16(piVar2,param_2,param_2 + -1,1);
      if (iVar5 < 0) goto LAB_0044bf51;
LAB_0044bf3d:
      FUN_00445200(param_1,param_2);
      FUN_00448c50(param_1,param_2);
    }
    else {
      if (uVar4 != 0x579) {
LAB_0044beae:
        if ((0x513 < uVar4) && (uVar4 < 0x579)) {
          FUN_00445200(param_1,uVar4 - 0x514);
          FUN_00448c50(param_1,uVar4 - 0x514);
          FUN_00446940(param_1);
        }
        goto LAB_0044bf59;
      }
      iVar5 = FUN_00445380(param_1,0x23b,0,0);
      if (iVar5 < 0) {
        return iVar5;
      }
      iVar5 = FUN_00445590(param_1);
      if (iVar5 < 0) {
        return iVar5;
      }
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
      if ((param_2 < 0) || (iVar5 + -1 < param_2)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(piVar2[2] + param_2 * 4);
      }
      *(uint *)(iVar5 + 0x78) =
           ((uint)(local_118 == 0) ^ *(uint *)(iVar5 + 0x78)) & 1 ^ *(uint *)(iVar5 + 0x78);
    }
    FUN_00446940(param_1);
LAB_0044bf51:
    FUN_004457c0(param_1,0);
  }
  else {
    if (uVar4 == 0x57b) {
      iVar5 = FUN_00445380(param_1,0x23b,0,0);
      if (iVar5 < 0) {
        return iVar5;
      }
      iVar5 = FUN_00445590(param_1);
      if (iVar5 < 0) {
        return iVar5;
      }
      iVar5 = _SfList_MoveRange_16(piVar2,param_2,param_2 + 1,1);
      if (-1 < iVar5) goto LAB_0044bf3d;
      goto LAB_0044bf51;
    }
    if (uVar4 != 0x57c) goto LAB_0044beae;
    FUN_0044a420(param_1,param_2);
    FUN_0044aa60(param_1);
    *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 0x100;
    *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 8;
  }
LAB_0044bf59:
  FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
  DAT_0064767c = DAT_0064767c | 0x800;
LAB_0044bf74:
  if (local_114 != (HCURSOR)0x0) {
    SetCursor(local_114);
  }
  return 0;
}



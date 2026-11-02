/* Module: vegas30.exe
   Function: FUN_004edda0
   Address: 004edda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004edda0(int param_1,int *param_2,int param_3,int param_4)

{
  HWND pHVar1;
  HMENU hMenu;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  HWND local_4;
  
  local_4 = *(HWND *)(param_1 + 0x184);
  local_1c = 0;
  local_8 = 0;
  local_c = 0;
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(local_4,(LPPOINT)&param_3);
  }
  _SfList_CreateExZ_32(&local_1c,4,0x40,0x10,0x40000002,0,0,0);
  if (local_1c == 0) {
    return;
  }
  SendMessageA(*(HWND *)(param_1 + 0x184),0x60e,0,local_1c);
  iVar3 = **(int **)(local_1c + 8);
  if (param_2 == (int *)0x0) {
    local_18 = 0;
LAB_004ede48:
    hMenu = (HMENU)FUN_004047d0(0x348,0);
    pcVar5 = EnableMenuItem_exref;
    iVar3 = **(int **)(local_1c + 8);
    uVar2 = *(uint *)(iVar3 + 0x210);
    if (((uVar2 & 0x40000) != 0) || (((uVar2 & 0x10) != 0 && ((uVar2 & 1) != 0)))) {
      EnableMenuItem(hMenu,0x1461,1);
    }
    iVar3 = **(int **)(iVar3 + 0x20c);
    if (((((iVar3 == 0xe || iVar3 == 0xc) || iVar3 == 5) || iVar3 == 4) || iVar3 == 2) || iVar3 == 1
       ) {
      EnableMenuItem(hMenu,0x146a,1);
      EnableMenuItem(hMenu,0x1467,1);
    }
  }
  else {
    local_18 = *param_2;
    if (local_18 == 0) goto LAB_004ede48;
    local_8 = 0x1c;
    FUN_004ec4f0(param_2,0,&local_14,0);
    local_18 = *param_2;
    hMenu = (HMENU)FUN_004047d0(0x349,0);
    pcVar5 = EnableMenuItem_exref;
    iVar3 = **(int **)(iVar3 + 0x20c);
    if (((((iVar3 == 0xe || iVar3 == 0xc) || iVar3 == 5) || iVar3 == 4) || iVar3 == 2) || iVar3 == 1
       ) {
      EnableMenuItem(hMenu,0x146a,1);
      EnableMenuItem(hMenu,0x1467,1);
    }
    if ((local_14 & 0x1c) == 0) {
      EnableMenuItem(hMenu,0xa7bb,1);
      EnableMenuItem(hMenu,0x1466,1);
      EnableMenuItem(hMenu,0x1468,1);
      EnableMenuItem(hMenu,0x146b,1);
      EnableMenuItem(hMenu,0x1469,1);
    }
    else {
      SetMenuDefaultItem(hMenu,0x14ba,0);
    }
    if ((local_14 & 0x10000) != 0) {
      EnableMenuItem(hMenu,0x1469,1);
    }
    if ((DAT_00647e30 != 1) || ((local_14 & 0x18) == 0)) {
      DeleteMenu(hMenu,0x146b,0);
    }
    if ((local_14 & 0x14) == 0) {
      DeleteMenu(hMenu,0x1468,0);
    }
    else {
      FUN_004ed9e0(hMenu,0x1468);
    }
    iVar3 = local_18;
    local_10 = 0;
    if (1 < local_18) {
      EnableMenuItem(hMenu,0x1462,1);
    }
    iVar4 = 0;
    if (iVar3 < 1) {
LAB_004ee08b:
      EnableMenuItem(hMenu,0x145e,1);
    }
    else {
      do {
        iVar3 = *(int *)(param_2[2] + iVar4 * 4);
        if ((iVar4 == 0) && ((*(uint *)(iVar3 + 0x210) & 0x100000) != 0)) {
          EnableMenuItem(hMenu,0x145f,1);
        }
        if ((*(uint *)(iVar3 + 0x210) & 0x80000) == 0) {
          local_10 = 1;
        }
        iVar3 = FUN_004ee240(param_1,iVar3);
        if (iVar3 != 0) {
          local_c = 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_18);
      if (local_10 == 0) goto LAB_004ee08b;
    }
    if (local_c != 0) goto LAB_004ee0ab;
  }
  (*pcVar5)(hMenu,0x1463,1);
LAB_004ee0ab:
  pHVar1 = local_4;
  FUN_004ed760(local_4,hMenu);
  if (((hMenu != (HMENU)0x0) &&
      (uVar2 = FUN_00404830(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2), uVar2 != 0)) &&
     (iVar3 = FUN_004ed800(pHVar1,uVar2), iVar3 == 0)) {
    if (uVar2 < 0x1469) {
      if (uVar2 == 0x1468) {
        FUN_004ee2f0(param_2);
      }
      else if (uVar2 == 0x1462) {
        if (local_18 == 1) {
          FUN_004ee190(pHVar1,param_2,local_1c);
        }
      }
      else if (uVar2 == 0x1466) {
        FUN_004ee2a0(param_2,local_8);
      }
      else if (uVar2 == 0x1467) {
        FUN_004edc50(pHVar1,param_2,local_1c);
      }
    }
    else if (uVar2 == 0x146a) {
      FUN_004ee350(param_2);
    }
    else if (uVar2 == 0x146b) {
      FUN_004edbe0(param_2,1);
    }
    else if (uVar2 == 0xa7bb) {
      FUN_004edbb0(param_2,0);
    }
  }
  if (local_1c != 0) {
    _SfList_DeleteList_16(local_1c,0,0xffffffff,0);
    _SfList_Destroy_4(local_1c);
  }
  return;
}



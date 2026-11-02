/* Module: vegas30.exe
   Function: FUN_0047a800
   Address: 0047a800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047a827) */

undefined4 FUN_0047a800(uint param_1,uint param_2,LONG param_3,LONG param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  LONG LVar4;
  HMENU hMenu;
  LPCSTR lpNewItem;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  UINT uItem;
  tagPOINT local_8;
  
  iVar3 = param_1;
  if (((param_2 & 1) != 0) || (piVar2 = *(int **)(param_1 + 0x18), piVar2 == (int *)0x0)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x44);
  if ((iVar5 < 0) || (*piVar2 + -1 < iVar5)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(piVar2[2] + iVar5 * 4);
  }
  if (iVar7 == 0) {
    return 0;
  }
  if ((*(byte *)(iVar7 + 0xc) & 4) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) != iVar5) {
    *(int *)(param_1 + 0x40) = iVar5;
    FUN_00479520(param_1);
  }
  FUN_00477e00(param_1,0,3);
  LVar4 = param_4;
  uVar9 = **(uint **)(iVar7 + 0x30);
  param_2 = FUN_00479820(param_1,iVar7,param_3,param_4,0);
  if (param_2 < uVar9) {
    iVar8 = *(int *)(*(int *)(iVar7 + 0x30) + 4) * param_2 + *(int *)(*(int *)(iVar7 + 0x30) + 8);
    hMenu = (HMENU)FUN_004047d0(0x7e,1);
    if (param_2 == 0) {
      EnableMenuItem(hMenu,0xa100,1);
    }
    iVar5 = *(int *)(iVar7 + 0x10);
    if (iVar5 == 1) {
      DeleteMenu(hMenu,0xa0f3,0);
      DeleteMenu(hMenu,0xa0f4,0);
      DeleteMenu(hMenu,0xa0f5,0);
      DeleteMenu(hMenu,0xa0f7,0);
      DeleteMenu(hMenu,0xa0fa,0);
      DeleteMenu(hMenu,0xa0fb,0);
      DeleteMenu(hMenu,0xa0fc,0);
      DeleteMenu(hMenu,0xa0fd,0);
      DeleteMenu(hMenu,0xa0fe,0);
      DeleteMenu(hMenu,0xa0ff,0);
      DeleteMenu(hMenu,0xa105,0);
      DeleteMenu(hMenu,0xa106,0);
      DeleteMenu(hMenu,0xa107,0);
      uItem = 0xa0f8;
    }
    else if (iVar5 == 0x1d) {
      DeleteMenu(hMenu,0xa0f3,0);
      DeleteMenu(hMenu,0xa0f4,0);
      DeleteMenu(hMenu,0xa0f5,0);
      DeleteMenu(hMenu,0xa0f6,0);
      DeleteMenu(hMenu,0xa0f7,0);
      DeleteMenu(hMenu,0xa0f8,0);
      DeleteMenu(hMenu,0xa0fa,0);
      DeleteMenu(hMenu,0xa0f9,0);
      DeleteMenu(hMenu,0xa0fd,0);
      DeleteMenu(hMenu,0xa0fe,0);
      DeleteMenu(hMenu,0xa0ff,0);
      DeleteMenu(hMenu,0xa105,0);
      DeleteMenu(hMenu,0xa106,0);
      DeleteMenu(hMenu,0xa107,0);
      uItem = 0xa0fb;
    }
    else if ((iVar5 == 0x1e) || (iVar5 == 0xc9)) {
      DeleteMenu(hMenu,0xa0f3,0);
      DeleteMenu(hMenu,0xa0f4,0);
      DeleteMenu(hMenu,0xa0f5,0);
      DeleteMenu(hMenu,0xa0f6,0);
      DeleteMenu(hMenu,0xa0f7,0);
      DeleteMenu(hMenu,0xa0f8,0);
      DeleteMenu(hMenu,0xa0fa,0);
      DeleteMenu(hMenu,0xa0f9,0);
      DeleteMenu(hMenu,0xa0fb,0);
      DeleteMenu(hMenu,0xa0fc,0);
      DeleteMenu(hMenu,0xa105,0);
      DeleteMenu(hMenu,0xa106,0);
      DeleteMenu(hMenu,0xa107,0);
      uItem = 0xa0fe;
    }
    else if (iVar5 == 0xca) {
      DeleteMenu(hMenu,0xa0f3,0);
      DeleteMenu(hMenu,0xa0f4,0);
      DeleteMenu(hMenu,0xa0f5,0);
      DeleteMenu(hMenu,0xa0f6,0);
      DeleteMenu(hMenu,0xa0f7,0);
      DeleteMenu(hMenu,0xa0f8,0);
      DeleteMenu(hMenu,0xa0fa,0);
      DeleteMenu(hMenu,0xa0f9,0);
      DeleteMenu(hMenu,0xa0fb,0);
      DeleteMenu(hMenu,0xa0fc,0);
      DeleteMenu(hMenu,0xa0fd,0);
      DeleteMenu(hMenu,0xa0fe,0);
      DeleteMenu(hMenu,0xa0ff,0);
      uItem = 0xa106;
    }
    else {
      DeleteMenu(hMenu,0xa0f6,0);
      DeleteMenu(hMenu,0xa0f8,0);
      DeleteMenu(hMenu,0xa0f9,0);
      DeleteMenu(hMenu,0xa0f7,0);
      DeleteMenu(hMenu,0xa0fa,0);
      DeleteMenu(hMenu,0xa0fb,0);
      DeleteMenu(hMenu,0xa0fc,0);
      DeleteMenu(hMenu,0xa0fd,0);
      DeleteMenu(hMenu,0xa0fe,0);
      DeleteMenu(hMenu,0xa0ff,0);
      DeleteMenu(hMenu,0xa105,0);
      DeleteMenu(hMenu,0xa106,0);
      DeleteMenu(hMenu,0xa107,0);
      uItem = 0xa0f4;
    }
LAB_0047ad28:
    SetMenuDefaultItem(hMenu,uItem,0);
  }
  else {
    iVar5 = FUN_00479ce0(param_1,iVar7,param_3,LVar4,&param_2,0);
    if (iVar5 == 0) {
      return 0;
    }
    iVar8 = *(int *)(*(int *)(iVar7 + 0x30) + 4) * param_2 + *(int *)(*(int *)(iVar7 + 0x30) + 8);
    hMenu = (HMENU)FUN_004047d0(0x7e,0);
    iVar5 = FUN_00479640(param_1,iVar7,param_3,param_4);
    if (iVar5 != -1) {
      uItem = 0xa101;
      goto LAB_0047ad28;
    }
    EnableMenuItem(hMenu,0xa101,1);
  }
  CheckMenuItem(hMenu,0xa0f0,(-(uint)(*(int *)(iVar8 + 0xc) != 1) & 0xfffffff8) + 8);
  CheckMenuItem(hMenu,0xa0f1,(*(int *)(iVar8 + 0xc) != 2) - 1 & 8);
  CheckMenuItem(hMenu,0xa0f2,(*(int *)(iVar8 + 0xc) != -2) - 1 & 8);
  CheckMenuItem(hMenu,0xa108,(*(int *)(iVar8 + 0xc) != 4) - 1 & 8);
  CheckMenuItem(hMenu,0xa109,(*(int *)(iVar8 + 0xc) != -4) - 1 & 8);
  if (*(int *)(param_1 + 0x4c) != 0) {
    lpNewItem = (LPCSTR)_SfGetString_8(DAT_00647204,0x3a);
    ModifyMenuA(hMenu,0xa102,0,0xa102,lpNewItem);
  }
  FUN_00479550(param_1,0,iVar7);
  local_8.x = param_3;
  puVar1 = (undefined4 *)(param_1 + 0x54);
  local_8.y = param_4;
  param_1 = 0;
  ClientToScreen(*(HWND *)*puVar1,&local_8);
  iVar5 = FUN_00404830(**(undefined4 **)(iVar3 + 0x54),hMenu,&local_8,2);
  if (iVar5 != 0) {
    if (((((iVar5 == 0xa104) || (iVar5 == 0xa100)) || (iVar5 == 0xa102)) ||
        ((iVar5 == 0xa103 || (iVar5 == 0xa101)))) ||
       ((*(int *)(iVar3 + 0x4c) == 0 ||
        ((uVar9 = *(uint *)(iVar3 + 0x48), param_2 < uVar9 ||
         (uVar6 = *(int *)(iVar3 + 0x4c) + uVar9, uVar6 - 1 < param_2)))))) {
      param_1 = FUN_0047a2e0(iVar3,iVar5,iVar7,param_2,param_3,param_4);
    }
    else {
      if (uVar6 <= uVar9) goto LAB_0047aee6;
      do {
        uVar6 = FUN_0047a2e0(iVar3,iVar5,iVar7,uVar9,param_3,param_4);
        param_1 = param_1 | uVar6;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)(iVar3 + 0x4c) + *(int *)(iVar3 + 0x48)));
    }
    if (param_1 != 0) {
      FUN_00477e00(iVar3,iVar7,1);
      FUN_00479600(iVar3,0,iVar7);
      FUN_00479520(iVar3);
      return 1;
    }
  }
LAB_0047aee6:
  FUN_00479620(iVar3,0,iVar7);
  FUN_00479520(iVar3);
  return 1;
}



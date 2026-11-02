/* Module: vegas30.exe
   Function: FUN_00550690
   Address: 00550690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00550690(int param_1,int param_2)

{
  int iVar1;
  HMENU hMenu;
  HMENU hmenu;
  HWND pHVar2;
  UINT check;
  TPMPARAMS *pTVar3;
  tagPOINT local_24;
  LONG local_1c;
  int local_18;
  TPMPARAMS local_14;
  
  if (*(int *)(param_2 + 8) != -0x2c6) {
    return 0;
  }
  pHVar2 = *(HWND *)(param_1 + 0x90);
  SendMessageA(pHVar2,0x433,*(WPARAM *)(param_2 + 0xc),(LPARAM)&local_24);
  MapWindowPoints(pHVar2,(HWND)0x0,&local_24,2);
  local_14.cbSize = 0x14;
  local_14.rcExclude.left = local_24.x;
  local_14.rcExclude.top = local_24.y;
  local_14.rcExclude.right = local_1c;
  local_14.rcExclude.bottom = local_18;
  hMenu = (HMENU)_SfLoadMenu_8(DAT_00647204,0x33d);
  hmenu = GetSubMenu(hMenu,0);
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 2) {
    check = 0xc866;
  }
  else if (iVar1 == 1) {
    check = 0xc865;
  }
  else {
    if (iVar1 != 0) goto LAB_0055076f;
    check = 0xc864;
  }
  CheckMenuRadioItem(hmenu,0xc864,0xc866,check,0);
LAB_0055076f:
  pTVar3 = &local_14;
  pHVar2 = GetParent(pHVar2);
  TrackPopupMenuEx(hmenu,0x42,local_24.x,local_18,pHVar2,pTVar3);
  DestroyMenu(hMenu);
  return 0;
}



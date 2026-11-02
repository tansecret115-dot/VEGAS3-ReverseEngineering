/* Module: vegas30.exe
   Function: FUN_004e9d60
   Address: 004e9d60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004e9d60(undefined4 param_1)

{
  undefined4 uVar1;
  HMENU hMenu;
  int iVar2;
  uint uVar3;
  tagPOINT local_138;
  tagMENUITEMINFOA local_130 [6];
  
  hMenu = CreatePopupMenu();
  uVar1 = DAT_0064b138;
  if (hMenu != (HMENU)0x0) {
    local_130[0].dwTypeData = (LPSTR)&local_130[0].hbmpItem;
    local_130[0].hbmpItem._0_1_ = 0;
    local_130[0].cbSize = 0x2c;
    local_130[0].fMask = 0x10;
    local_130[0].cch = 0x104;
    GetMenuItemInfoA(DAT_00647674,0xa1bc,0,local_130);
    if (local_130[0].cch != 0) {
      iVar2 = lstrlenA((LPCSTR)&local_130[0].hbmpItem);
      if (iVar2 != 0) {
        AppendMenuA(hMenu,0,0xa1bc,(LPCSTR)&local_130[0].hbmpItem);
        FUN_005b8630(uVar1);
        iVar2 = FUN_005b4740();
        EnableMenuItem(hMenu,0xa1bc,(uint)(iVar2 == 0));
        GetCursorPos(&local_138);
        uVar3 = FUN_00404830(param_1,hMenu,&local_138,2);
        if (uVar3 != 0) {
          FUN_004043e0(param_1,uVar3 & 0xffff);
        }
        DestroyMenu(hMenu);
        return uVar3;
      }
    }
  }
  return 0;
}



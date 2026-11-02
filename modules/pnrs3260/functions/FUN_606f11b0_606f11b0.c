/* Module: pnrs3260.dll
   Function: FUN_606f11b0
   Address: 606f11b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_606f11b0(void *param_1,uint param_2)

{
  LPVOID lpMenuTemplate;
  HMENU hMenu;
  HMENU hMenu_00;
  UINT uIDNewItem;
  UINT uFlags;
  UINT uId;
  CHAR local_108 [256];
  int local_8;
  
  lpMenuTemplate = FUN_606f14b0(param_1,param_2,(LPCSTR)0x4);
  if (lpMenuTemplate != (LPVOID)0x0) {
    hMenu = LoadMenuIndirectA(lpMenuTemplate);
    hMenu_00 = CreatePopupMenu();
    local_8 = GetMenuItemCount(hMenu);
    uId = 0;
    if (0 < local_8) {
      do {
        uIDNewItem = GetMenuItemID(hMenu,uId);
        uFlags = GetMenuState(hMenu,uId,0x400);
        GetMenuStringA(hMenu,uId,local_108,0xff,0x400);
        AppendMenuA(hMenu_00,uFlags,uIDNewItem,local_108);
        uId = uId + 1;
      } while ((int)uId < local_8);
    }
    return hMenu_00;
  }
  return (HMENU)0x0;
}



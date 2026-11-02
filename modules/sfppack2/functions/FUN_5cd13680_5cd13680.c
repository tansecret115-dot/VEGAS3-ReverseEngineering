/* Module: sfppack2.dll
   Function: FUN_5cd13680
   Address: 5cd13680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd13680(uint *param_1,int param_2)

{
  HMENU hMenu;
  HMENU hMenu_00;
  WPARAM WVar1;
  tagPOINT local_8;
  
  hMenu = (HMENU)FUN_5cd069f0(DAT_5cd62f64,(LPCSTR)0xa2);
  if (hMenu != (HMENU)0x0) {
    local_8.x = (LONG)(short)param_2;
    local_8.y = (LONG)(short)((uint)param_2 >> 0x10);
    if (param_2 == -1) {
      local_8.y = 0x10;
      local_8.x = 0x10;
      ClientToScreen((HWND)param_1[2],&local_8);
    }
    hMenu_00 = GetSubMenu(hMenu,0);
    if (hMenu_00 != (HMENU)0x0) {
      FUN_5cd13410(param_1,hMenu_00);
      WVar1 = TrackPopupMenu(hMenu_00,0x182,local_8.x,local_8.y,0,(HWND)param_1[2],(RECT *)0x0);
      if (WVar1 != 0) {
        FUN_5cd13500(param_1,WVar1);
      }
    }
    DestroyMenu(hMenu);
  }
  return;
}



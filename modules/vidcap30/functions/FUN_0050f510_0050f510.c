/* Module: vidcap30.exe
   Function: FUN_0050f510
   Address: 0050f510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050f510(int param_1,int param_2)

{
  HMENU hMenu;
  HMENU hMenu_00;
  BOOL BVar1;
  tagPOINT local_8;
  
  hMenu = (HMENU)_SfLoadMenu_8(DAT_005b8054,0xa2);
  if (hMenu != (HMENU)0x0) {
    local_8.x = (LONG)(short)param_2;
    local_8.y = (LONG)(short)((uint)param_2 >> 0x10);
    if (param_2 == -1) {
      local_8.y = 0x10;
      local_8.x = 0x10;
      ClientToScreen(*(HWND *)(param_1 + 8),&local_8);
    }
    hMenu_00 = GetSubMenu(hMenu,0);
    if (hMenu_00 != (HMENU)0x0) {
      FUN_0050f2a0(param_1,hMenu_00);
      BVar1 = TrackPopupMenu(hMenu_00,0x182,local_8.x,local_8.y,0,*(HWND *)(param_1 + 8),(RECT *)0x0
                            );
      if (BVar1 != 0) {
        FUN_0050f390(param_1,BVar1);
      }
    }
    DestroyMenu(hMenu);
  }
  return;
}



/* Module: sftrkfx1.dll
   Function: FUN_5cbb33f0
   Address: 5cbb33f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbb33f0(void *this,HWND param_1,undefined4 param_2,int param_3,int param_4)

{
  HMENU hMenu;
  HMENU uIDNewItem;
  tagRECT local_10;
  
  if ((param_3 < 0) || (param_4 < 0)) {
    GetWindowRect(param_1,&local_10);
    param_3 = (local_10.right - local_10.left) / 2 + local_10.left;
    param_4 = ((int)((local_10.bottom - local_10.top) +
                    (local_10.bottom - local_10.top >> 0x1f & 3U)) >> 2) + local_10.top;
  }
  hMenu = CreatePopupMenu();
  if (hMenu != (HMENU)0x0) {
    uIDNewItem = FUN_5cbb32d0((int)this);
    AppendMenuA(hMenu,0x10,(UINT_PTR)uIDNewItem,"Presets");
    AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
    AppendMenuA(hMenu,0,41000,"Help");
    AppendMenuA(hMenu,0,0xa029,"About...");
    TrackPopupMenu(hMenu,2,param_3,param_4,0,param_1,(RECT *)0x0);
    DestroyMenu(hMenu);
  }
  return;
}



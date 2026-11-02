/* Module: sfppack2.dll
   Function: FUN_5cce57a0
   Address: 5cce57a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cce57a0(void *this,HWND param_1,undefined4 param_2,int param_3,int param_4)

{
  HMENU hMenu;
  HMENU uIDNewItem;
  LPCSTR pCVar1;
  tagRECT local_10;
  
  if ((param_3 < 0) || (param_4 < 0)) {
    GetWindowRect(param_1,&local_10);
    param_3 = (local_10.right - local_10.left) / 2 + local_10.left;
    param_4 = ((int)((local_10.bottom - local_10.top) +
                    (local_10.bottom - local_10.top >> 0x1f & 3U)) >> 2) + local_10.top;
  }
  hMenu = CreatePopupMenu();
  if (hMenu != (HMENU)0x0) {
    uIDNewItem = FUN_5cce5680((int)this);
    pCVar1 = FUN_5cd08210(DAT_5cd67a38,1000);
    AppendMenuA(hMenu,0x10,(UINT_PTR)uIDNewItem,pCVar1);
    AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
    pCVar1 = FUN_5cd08210(DAT_5cd67a38,0x3e9);
    AppendMenuA(hMenu,0,41000,pCVar1);
    pCVar1 = FUN_5cd08210(DAT_5cd67a38,0x3eb);
    AppendMenuA(hMenu,0,0xa029,pCVar1);
    TrackPopupMenu(hMenu,2,param_3,param_4,0,param_1,(RECT *)0x0);
    DestroyMenu(hMenu);
  }
  return;
}



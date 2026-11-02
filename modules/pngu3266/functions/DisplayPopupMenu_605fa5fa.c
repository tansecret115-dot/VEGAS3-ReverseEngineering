/* Module: pngu3266.dll
   Function: DisplayPopupMenu
   Address: 605fa5fa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::DisplayPopupMenu(unsigned long,class CPNxPoint const
   &,class CPNWindow *,class CPNxRect *) */

int __thiscall
CPNMenu::DisplayPopupMenu
          (CPNMenu *this,ulong param_1,CPNxPoint *param_2,CPNWindow *param_3,CPNxRect *param_4)

{
  BOOL BVar1;
  HMENU__ *wParam;
  LPTPMPARAMS pTVar2;
  RECT *prcRect;
  TPMPARAMS local_30;
  LONG local_1c;
  LONG local_18;
  LONG local_14;
  LONG local_10;
  CPNMenu *local_c;
  uint local_8;
  
                    /* 0xa5fa  961
                       ?DisplayPopupMenu@CPNMenu@@UAEHKABVCPNxPoint@@PAVCPNWindow@@PAVCPNxRect@@@Z
                        */
  prcRect = (RECT *)0x0;
  local_8 = 0;
  if ((param_1 & 1) == 0) {
    if (((param_1 & 2) == 0) && ((param_1 & 4) != 0)) {
      local_8 = 8;
    }
  }
  else {
    local_8 = 4;
  }
  if ((param_1 & 8) == 0) {
    if (((param_1 & 0x10) == 0) && ((param_1 & 0x20) != 0)) {
      local_8 = local_8 | 0x10;
    }
  }
  else {
    local_8 = local_8 | 0x20;
  }
  if ((param_1 & 0x100) != 0) {
    local_8 = local_8 | 0x100;
  }
  if (((param_1 & 0x40) == 0) && ((param_1 & 0x80) != 0)) {
    local_8 = local_8 | 2;
  }
  if ((param_1 & 0x400) != 0) {
    local_8 = local_8 | 0x40;
  }
  if (param_3 == (CPNWindow *)0x0) {
    param_3 = (CPNWindow *)0x0;
  }
  else {
    param_3 = *(CPNWindow **)(param_3 + 0xc);
  }
  pTVar2 = (LPTPMPARAMS)0x0;
  local_c = this;
  memset(&local_30,0,0x14);
  local_30.cbSize = 0x14;
  if (param_4 != (CPNxRect *)0x0) {
    local_30.rcExclude.left = *(LONG *)param_4;
    local_30.rcExclude.top = *(LONG *)(param_4 + 4);
    local_30.rcExclude.right = *(LONG *)(param_4 + 8);
    local_30.rcExclude.bottom = *(LONG *)(param_4 + 0xc);
    prcRect = &local_30.rcExclude;
    pTVar2 = &local_30;
    local_1c = local_30.rcExclude.left;
    local_18 = local_30.rcExclude.top;
    local_14 = local_30.rcExclude.right;
    local_10 = local_30.rcExclude.bottom;
  }
  if ((param_1 & 0x200) == 0) {
    BVar1 = TrackPopupMenuEx(*(HMENU *)(local_c + 0x14),local_8,*(int *)param_2,
                             *(int *)(param_2 + 4),(HWND)param_3,pTVar2);
  }
  else {
    BVar1 = TrackPopupMenu(*(HMENU *)(local_c + 0x14),local_8,*(int *)param_2,*(int *)(param_2 + 4),
                           0,(HWND)param_3,prcRect);
  }
  if (param_3 != (CPNWindow *)0x0) {
    while( true ) {
      wParam = PopActiveMenu();
      if (wParam == (HMENU__ *)0x0) break;
      PostMessageA((HWND)param_3,0x537,(WPARAM)wParam,0);
    }
  }
  return BVar1;
}



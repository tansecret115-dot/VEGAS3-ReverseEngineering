/* Module: pngu3266.dll
   Function: GetMinWidthBeforeMenuWrap
   Address: 605f3c75
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNFrame::GetMinWidthBeforeMenuWrap(void) */

ulong __thiscall CPNFrame::GetMinWidthBeforeMenuWrap(CPNFrame *this)

{
  ulong uVar1;
  int iVar2;
  HWND__ *hWnd;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  HMENU hMenu;
  uint uItem;
  tagRECT *lprcItem;
  tagRECT local_18;
  uint local_8;
  
                    /* 0x3c75  1263  ?GetMinWidthBeforeMenuWrap@CPNFrame@@UAEKXZ */
  iVar5 = 0;
  if (*(int **)(this + 0xc0) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    iVar2 = (**(code **)(**(int **)(this + 0xc0) + 0x24))();
    local_8 = 0;
    uVar6 = iVar2 + (*(uint *)(this + 8) >> 0x10 & 1);
    if (uVar6 != 0) {
      do {
        lprcItem = &local_18;
        hMenu = *(HMENU *)(*(int *)(this + 0xc0) + 0x14);
        uItem = local_8;
        hWnd = CPNWindow::GetHWND((CPNWindow *)this);
        GetMenuItemRect(hWnd,hMenu,uItem,lprcItem);
        iVar5 = iVar5 + (local_18.right - local_18.left);
        local_8 = local_8 + 1;
      } while (local_8 < uVar6);
    }
    iVar2 = GetSystemMetrics(7);
    iVar3 = GetSystemMetrics(0x2d);
    iVar4 = GetSystemMetrics(0x36);
    uVar1 = iVar5 + iVar2 * 2 + iVar3 * 2 + iVar4;
  }
  return uVar1;
}



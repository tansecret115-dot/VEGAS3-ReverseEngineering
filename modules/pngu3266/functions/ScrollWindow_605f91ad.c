/* Module: pngu3266.dll
   Function: ScrollWindow
   Address: 605f91ad
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::ScrollWindow(long,long,class CPNxRect *,unsigned long)
    */

void __thiscall
CPNWindow::ScrollWindow(CPNWindow *this,long param_1,long param_2,CPNxRect *param_3,ulong param_4)

{
  RECT *prcScroll;
  RECT local_44;
  RECT local_34;
  LONG local_24;
  LONG local_20;
  LONG local_1c;
  LONG local_18;
  LONG local_14;
  LONG local_10;
  LONG local_c;
  LONG local_8;
  
                    /* 0x91ad  1799  ?ScrollWindow@CPNWindow@@UAEXJJPAVCPNxRect@@K@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_14);
  local_24 = local_14;
  local_20 = local_10;
  local_1c = local_c;
  local_18 = local_8;
  local_44.left = local_14;
  prcScroll = (RECT *)0x0;
  local_44.top = local_10;
  local_44.right = local_c;
  local_44.bottom = local_8;
  if (param_3 != (CPNxRect *)0x0) {
    local_34.left = *(LONG *)param_3;
    local_34.top = *(LONG *)(param_3 + 4);
    local_34.right = *(LONG *)(param_3 + 8);
    local_34.bottom = *(LONG *)(param_3 + 0xc);
    prcScroll = &local_34;
    local_24 = local_34.left;
    local_20 = local_34.top;
    local_1c = local_34.right;
    local_18 = local_34.bottom;
  }
  ScrollWindowEx(*(HWND *)(this + 0xc),param_1,param_2,prcScroll,&local_44,(HRGN)0x0,(LPRECT)0x0,
                 param_4);
  return;
}



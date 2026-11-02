/* Module: pngu3266.dll
   Function: StopScrolling
   Address: 60601ec5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNScrollingText::StopScrolling(void) */

void __thiscall CPNScrollingText::StopScrolling(CPNScrollingText *this)

{
                    /* 0x11ec5  2079  ?StopScrolling@CPNScrollingText@@UAEXXZ */
  KillTimer(*(HWND *)(this + 0xc),*(UINT_PTR *)(this + 0x13e));
  *(undefined4 *)(this + 0x13e) = 0;
  XPNScrollingText::StopScrolling((XPNScrollingText *)this);
  return;
}



/* Module: pngu3266.dll
   Function: StartScrolling
   Address: 60601e93
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNScrollingText::StartScrolling(void) */

void __thiscall CPNScrollingText::StartScrolling(CPNScrollingText *this)

{
  UINT_PTR UVar1;
  
                    /* 0x11e93  2073  ?StartScrolling@CPNScrollingText@@UAEXXZ */
  if (*(int *)(this + 0x13e) == 0) {
    UVar1 = SetTimer(*(HWND *)(this + 0xc),1,*(UINT *)(this + 0x112),(TIMERPROC)0x0);
    *(UINT_PTR *)(this + 0x13e) = UVar1;
    XPNScrollingText::StartScrolling((XPNScrollingText *)this);
  }
  return;
}



/* Module: pngu3266.dll
   Function: SetScrollPos
   Address: 606029f3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNScrollBar::SetScrollPos(long) */

void __thiscall CPNScrollBar::SetScrollPos(CPNScrollBar *this,long param_1)

{
                    /* 0x129f3  1992  ?SetScrollPos@CPNScrollBar@@UAEXJ@Z */
  SendMessageA(*(HWND *)(this + 0xc),0xe0,param_1,1);
  return;
}



/* Module: pngu3266.dll
   Function: SetScrollRange
   Address: 606029da
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNScrollBar::SetScrollRange(long,long) */

void __thiscall CPNScrollBar::SetScrollRange(CPNScrollBar *this,long param_1,long param_2)

{
                    /* 0x129da  1994  ?SetScrollRange@CPNScrollBar@@UAEXJJ@Z */
  SendMessageA(*(HWND *)(this + 0xc),0xe2,param_1,param_2);
  return;
}



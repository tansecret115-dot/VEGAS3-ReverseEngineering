/* Module: pngu3266.dll
   Function: ResetScrolling
   Address: 6061180a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::ResetScrolling(void) */

void __thiscall XPNScrollingText::ResetScrolling(XPNScrollingText *this)

{
                    /* 0x2180a  1787  ?ResetScrolling@XPNScrollingText@@QAEXXZ */
  *(undefined4 *)(this + 0x11e) = 0;
  *(undefined4 *)(this + 0x122) = 0;
  return;
}



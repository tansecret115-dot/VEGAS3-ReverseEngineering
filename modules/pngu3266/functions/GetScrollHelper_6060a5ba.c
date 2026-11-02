/* Module: pngu3266.dll
   Function: GetScrollHelper
   Address: 6060a5ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNScrollHelper * __thiscall XPNScrollButton::GetScrollHelper(void) */

CPNScrollHelper * __thiscall XPNScrollButton::GetScrollHelper(XPNScrollButton *this)

{
                    /* 0x1a5ba  1332  ?GetScrollHelper@XPNScrollButton@@QAEPAVCPNScrollHelper@@XZ */
  return *(CPNScrollHelper **)(this + 0xfb);
}



/* Module: pngu3266.dll
   Function: SetPosition
   Address: 6060a690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollButton::SetPosition(long) */

void __thiscall XPNScrollButton::SetPosition(XPNScrollButton *this,long param_1)

{
                    /* 0x1a690  1967  ?SetPosition@XPNScrollButton@@QAEXJ@Z */
  CPNScrollHelper::SetPosition(*(CPNScrollHelper **)(this + 0xfb),param_1);
  return;
}



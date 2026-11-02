/* Module: pngu3266.dll
   Function: SetBottomMargin
   Address: 60607265
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetBottomMargin(int) */

void __thiscall XPNCustomText::SetBottomMargin(XPNCustomText *this,int param_1)

{
                    /* 0x17265  1837  ?SetBottomMargin@XPNCustomText@@QAEXH@Z */
  *(int *)(this + 0x13d) = param_1;
  return;
}



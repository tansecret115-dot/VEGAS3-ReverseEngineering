/* Module: pngu3266.dll
   Function: SetRightMargin
   Address: 6060723d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetRightMargin(int) */

void __thiscall XPNCustomText::SetRightMargin(XPNCustomText *this,int param_1)

{
                    /* 0x1723d  1978  ?SetRightMargin@XPNCustomText@@QAEXH@Z */
  *(int *)(this + 0x139) = param_1;
  return;
}



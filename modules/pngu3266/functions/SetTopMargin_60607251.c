/* Module: pngu3266.dll
   Function: SetTopMargin
   Address: 60607251
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetTopMargin(int) */

void __thiscall XPNCustomText::SetTopMargin(XPNCustomText *this,int param_1)

{
                    /* 0x17251  2034  ?SetTopMargin@XPNCustomText@@QAEXH@Z */
  *(int *)(this + 0x135) = param_1;
  return;
}



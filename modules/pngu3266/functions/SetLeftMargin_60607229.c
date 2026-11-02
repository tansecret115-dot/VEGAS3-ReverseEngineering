/* Module: pngu3266.dll
   Function: SetLeftMargin
   Address: 60607229
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetLeftMargin(int) */

void __thiscall XPNCustomText::SetLeftMargin(XPNCustomText *this,int param_1)

{
                    /* 0x17229  1941  ?SetLeftMargin@XPNCustomText@@QAEXH@Z */
  *(int *)(this + 0x131) = param_1;
  return;
}



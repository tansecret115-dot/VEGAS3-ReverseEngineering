/* Module: pngu3266.dll
   Function: SetTextStyle
   Address: 6060c5ee
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetTextStyle(unsigned long) */

void __thiscall XPNCustomText::SetTextStyle(XPNCustomText *this,ulong param_1)

{
                    /* 0x1c5ee  2026  ?SetTextStyle@XPNCustomText@@QAEXK@Z */
  TranslateStyles(this,param_1);
  return;
}



/* Module: pngu3266.dll
   Function: SetBackgroundColor
   Address: 606071c1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetBackgroundColor(class CPNColor const &) */

void __thiscall XPNCustomText::SetBackgroundColor(XPNCustomText *this,CPNColor *param_1)

{
                    /* 0x171c1  1827  ?SetBackgroundColor@XPNCustomText@@QAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xef),param_1);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}



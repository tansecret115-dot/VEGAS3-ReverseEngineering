/* Module: pngu3266.dll
   Function: SetBorderColor
   Address: 606071f5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetBorderColor(class CPNColor const &) */

void __thiscall XPNCustomText::SetBorderColor(XPNCustomText *this,CPNColor *param_1)

{
                    /* 0x171f5  1836  ?SetBorderColor@XPNCustomText@@QAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0x112),param_1);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}



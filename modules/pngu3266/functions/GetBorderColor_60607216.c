/* Module: pngu3266.dll
   Function: GetBorderColor
   Address: 60607216
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::GetBorderColor(class CPNColor &) */

void __thiscall XPNCustomText::GetBorderColor(XPNCustomText *this,CPNColor *param_1)

{
                    /* 0x17216  1100  ?GetBorderColor@XPNCustomText@@QAEXAAVCPNColor@@@Z */
  CPNColor::operator=(param_1,(CPNColor *)(this + 0x112));
  return;
}



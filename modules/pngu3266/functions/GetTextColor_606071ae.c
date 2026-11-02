/* Module: pngu3266.dll
   Function: GetTextColor
   Address: 606071ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::GetTextColor(class CPNColor &) */

void __thiscall XPNCustomText::GetTextColor(XPNCustomText *this,CPNColor *param_1)

{
                    /* 0x171ae  1388  ?GetTextColor@XPNCustomText@@QAEXAAVCPNColor@@@Z */
  CPNColor::operator=(param_1,(CPNColor *)(this + 0xd0));
  return;
}



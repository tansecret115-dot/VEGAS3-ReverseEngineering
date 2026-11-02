/* Module: pngu3266.dll
   Function: GetBackgroundColor
   Address: 606071e2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::GetBackgroundColor(class CPNColor &) */

void __thiscall XPNCustomText::GetBackgroundColor(XPNCustomText *this,CPNColor *param_1)

{
                    /* 0x171e2  1093  ?GetBackgroundColor@XPNCustomText@@QAEXAAVCPNColor@@@Z */
  CPNColor::operator=(param_1,(CPNColor *)(this + 0xef));
  return;
}



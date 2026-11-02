/* Module: pngu3266.dll
   Function: GetLinkColor
   Address: 60607588
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNTextWithLink::GetLinkColor(class CPNColor &) */

void __thiscall XPNTextWithLink::GetLinkColor(XPNTextWithLink *this,CPNColor *param_1)

{
                    /* 0x17588  1242  ?GetLinkColor@XPNTextWithLink@@QAEXAAVCPNColor@@@Z */
  CPNColor::operator=(param_1,(CPNColor *)(this + 0x149));
  return;
}



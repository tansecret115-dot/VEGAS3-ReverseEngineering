/* Module: pngu3266.dll
   Function: SetLinkColor
   Address: 60607567
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNTextWithLink::SetLinkColor(class CPNColor const &) */

void __thiscall XPNTextWithLink::SetLinkColor(XPNTextWithLink *this,CPNColor *param_1)

{
                    /* 0x17567  1942  ?SetLinkColor@XPNTextWithLink@@QAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0x149),param_1);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}



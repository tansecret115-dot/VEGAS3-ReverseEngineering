/* Module: pngu3266.dll
   Function: SetBackgroundColor
   Address: 605fc732
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNImageControl::SetBackgroundColor(class CPNColor const &) */

void __thiscall CPNImageControl::SetBackgroundColor(CPNImageControl *this,CPNColor *param_1)

{
                    /* 0xc732  1825  ?SetBackgroundColor@CPNImageControl@@QAEXABVCPNColor@@@Z
                       0xc732  1835  ?SetBkgndColor@XPNAnimateCtl@@QAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xc4),param_1);
  return;
}



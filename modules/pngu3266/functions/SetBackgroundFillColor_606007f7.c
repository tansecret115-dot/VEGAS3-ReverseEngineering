/* Module: pngu3266.dll
   Function: SetBackgroundFillColor
   Address: 606007f7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNImageControl::SetBackgroundFillColor(class CPNColor const &) */

void __thiscall CPNImageControl::SetBackgroundFillColor(CPNImageControl *this,CPNColor *param_1)

{
                    /* 0x107f7  1830  ?SetBackgroundFillColor@CPNImageControl@@QAEXABVCPNColor@@@Z
                        */
  CPNColor::operator=((CPNColor *)(this + 0xe3),param_1);
  return;
}



/* Module: pngu3266.dll
   Function: SetTrackFillColor
   Address: 605fc1dc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNSlider::SetTrackFillColor(class CPNColor &) */

void __thiscall XPNSlider::SetTrackFillColor(XPNSlider *this,CPNColor *param_1)

{
                    /* 0xc1dc  2035  ?SetTrackFillColor@XPNSlider@@QAEXAAVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xf8),param_1);
  return;
}



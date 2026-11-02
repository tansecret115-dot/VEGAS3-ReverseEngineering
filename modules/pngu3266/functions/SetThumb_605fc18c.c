/* Module: pngu3266.dll
   Function: SetThumb
   Address: 605fc18c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNSlider::SetThumb(class CPNRegion &) */

void __thiscall XPNSlider::SetThumb(XPNSlider *this,CPNRegion *param_1)

{
                    /* 0xc18c  2027  ?SetThumb@XPNSlider@@QAEXAAVCPNRegion@@@Z */
  CPNRegion::operator=((CPNRegion *)(this + 0x117),param_1);
  (**(code **)(*(int *)(this + 0x117) + 0x18))(this + 299);
  return;
}



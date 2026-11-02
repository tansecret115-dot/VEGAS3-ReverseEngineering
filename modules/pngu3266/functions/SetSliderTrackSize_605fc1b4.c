/* Module: pngu3266.dll
   Function: SetSliderTrackSize
   Address: 605fc1b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNSlider::SetSliderTrackSize(class CPNxSize &) */

void __thiscall XPNSlider::SetSliderTrackSize(XPNSlider *this,CPNxSize *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0xc1b4  2006  ?SetSliderTrackSize@XPNSlider@@QAEXAAVCPNxSize@@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x13b) = 0;
  *(undefined4 *)(this + 0x13f) = 0;
  *(undefined4 *)(this + 0x143) = uVar2;
  *(undefined4 *)(this + 0x147) = uVar1;
  return;
}



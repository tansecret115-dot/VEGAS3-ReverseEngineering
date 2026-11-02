/* Module: pngu3266.dll
   Function: ~XPNImageSlider
   Address: 60616eb4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNImageSlider::~XPNImageSlider(void) */

void __thiscall XPNImageSlider::~XPNImageSlider(XPNImageSlider *this)

{
                    /* 0x26eb4  399  ??1XPNImageSlider@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x183) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x183))(1);
    *(undefined4 *)(this + 0x183) = 0;
  }
  if (*(undefined4 **)(this + 399) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 399))(1);
    *(undefined4 *)(this + 399) = 0;
  }
  XPNSlider::~XPNSlider((XPNSlider *)this);
  return;
}



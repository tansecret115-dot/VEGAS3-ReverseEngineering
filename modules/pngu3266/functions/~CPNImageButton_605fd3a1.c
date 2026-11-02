/* Module: pngu3266.dll
   Function: ~CPNImageButton
   Address: 605fd3a1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNImageButton::~CPNImageButton(void) */

void __thiscall CPNImageButton::~CPNImageButton(CPNImageButton *this)

{
                    /* 0xd3a1  338  ??1CPNImageButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x107) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x107))(1);
    *(undefined4 *)(this + 0x107) = 0;
  }
  *(undefined ***)this = &XPNImageButton::_vftable_;
  CPNButton::~CPNButton((CPNButton *)this);
  return;
}



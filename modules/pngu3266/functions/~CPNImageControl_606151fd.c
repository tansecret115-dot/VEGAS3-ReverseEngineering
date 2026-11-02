/* Module: pngu3266.dll
   Function: ~CPNImageControl
   Address: 606151fd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNImageControl::~CPNImageControl(void) */

void __thiscall CPNImageControl::~CPNImageControl(CPNImageControl *this)

{
                    /* 0x251fd  339  ??1CPNImageControl@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0xc0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc0))(1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  CPNColor::~CPNColor((CPNColor *)(this + 0xe3));
  CPNColor::~CPNColor((CPNColor *)(this + 0xc4));
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}



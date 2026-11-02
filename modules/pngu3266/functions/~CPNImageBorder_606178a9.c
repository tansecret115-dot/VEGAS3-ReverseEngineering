/* Module: pngu3266.dll
   Function: ~CPNImageBorder
   Address: 606178a9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNImageBorder::~CPNImageBorder(void) */

void __thiscall CPNImageBorder::~CPNImageBorder(CPNImageBorder *this)

{
                    /* 0x278a9  337  ??1CPNImageBorder@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))(1);
    *(undefined4 *)(this + 0xc) = 0;
  }
  CPNColor::~CPNColor((CPNColor *)(this + 0x20));
  return;
}



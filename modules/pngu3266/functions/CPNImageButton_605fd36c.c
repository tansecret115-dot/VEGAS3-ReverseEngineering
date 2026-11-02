/* Module: pngu3266.dll
   Function: CPNImageButton
   Address: 605fd36c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImageButton::CPNImageButton(void) */

CPNImageButton * __thiscall CPNImageButton::CPNImageButton(CPNImageButton *this)

{
                    /* 0xd36c  83  ??0CPNImageButton@@QAE@XZ */
  XPNImageButton::XPNImageButton((XPNImageButton *)this);
  *(undefined4 *)(this + 0x107) = 0;
  *(undefined4 *)(this + 0x10b) = 0;
  *(undefined4 *)(this + 0x10f) = 0xffffffff;
  *(undefined4 *)(this + 0x113) = 0xffffffff;
  *(undefined ***)this = &_vftable_;
  InitImageOffsetArray(this);
  return this;
}



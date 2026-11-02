/* Module: pngu3266.dll
   Function: ~XPNImageButton
   Address: 605fd0f7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNImageButton::~XPNImageButton(void) */

void __thiscall XPNImageButton::~XPNImageButton(XPNImageButton *this)

{
                    /* 0xd0f7  398  ??1XPNImageButton@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNButton::~CPNButton((CPNButton *)this);
  return;
}



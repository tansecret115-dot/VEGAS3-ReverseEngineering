/* Module: pngu3266.dll
   Function: ~CPNListBox
   Address: 6060031a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNListBox::~CPNListBox(void) */

void __thiscall CPNListBox::~CPNListBox(CPNListBox *this)

{
                    /* 0x1031a  341  ??1CPNListBox@@UAE@XZ
                       0x1031a  400  ??1XPNListBox@@MAE@XZ */
  *(undefined ***)this = &XPNListBox::_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}



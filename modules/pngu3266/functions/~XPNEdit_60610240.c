/* Module: pngu3266.dll
   Function: ~XPNEdit
   Address: 60610240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNEdit::~XPNEdit(void) */

void __thiscall XPNEdit::~XPNEdit(XPNEdit *this)

{
                    /* 0x20240  391  ??1XPNEdit@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}



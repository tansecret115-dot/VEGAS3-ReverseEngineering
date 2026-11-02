/* Module: pngu3266.dll
   Function: XPNEdit
   Address: 6061022e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNEdit::XPNEdit(void) */

XPNEdit * __thiscall XPNEdit::XPNEdit(XPNEdit *this)

{
                    /* 0x2022e  214  ??0XPNEdit@@IAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}



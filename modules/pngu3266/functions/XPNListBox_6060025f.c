/* Module: pngu3266.dll
   Function: XPNListBox
   Address: 6060025f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNListBox::XPNListBox(void) */

XPNListBox * __thiscall XPNListBox::XPNListBox(XPNListBox *this)

{
                    /* 0x1025f  233  ??0XPNListBox@@IAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}



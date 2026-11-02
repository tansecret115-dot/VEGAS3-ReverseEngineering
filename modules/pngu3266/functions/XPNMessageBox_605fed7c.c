/* Module: pngu3266.dll
   Function: XPNMessageBox
   Address: 605fed7c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNMessageBox::XPNMessageBox(void) */

XPNMessageBox * __thiscall XPNMessageBox::XPNMessageBox(XPNMessageBox *this)

{
                    /* 0xed7c  242  ??0XPNMessageBox@@IAE@XZ */
  CPNDialog::CPNDialog((CPNDialog *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}



/* Module: pngu3266.dll
   Function: CPNEdit
   Address: 605fdf46
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNEdit::CPNEdit(void) */

CPNEdit * __thiscall CPNEdit::CPNEdit(CPNEdit *this)

{
  CPNColor *pCVar1;
  
                    /* 0xdf46  61  ??0CPNEdit@@QAE@XZ */
  XPNEdit::XPNEdit((XPNEdit *)this);
  CPNColor::CPNColor((CPNColor *)(this + 0xc0));
  CPNColor::CPNColor((CPNColor *)(this + 0xdf));
  *(undefined4 *)(this + 0x102) = 0xffffffff;
  *(undefined4 *)(this + 0xfe) = 0;
  *(undefined4 *)(this + 0x106) = 0;
  *(undefined4 *)(this + 0x10e) = 0;
  this[0x112] = (CPNEdit)0x0;
  *(undefined ***)this = &_vftable_;
  pCVar1 = CPNDrawHelper::GetWindowTextColor();
  CPNColor::operator=((CPNColor *)(this + 0xdf),pCVar1);
  pCVar1 = CPNDrawHelper::GetWindowColor();
  CPNColor::operator=((CPNColor *)(this + 0xc0),pCVar1);
  return this;
}



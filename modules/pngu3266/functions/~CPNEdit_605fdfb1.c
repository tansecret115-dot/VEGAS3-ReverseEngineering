/* Module: pngu3266.dll
   Function: ~CPNEdit
   Address: 605fdfb1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNEdit::~CPNEdit(void) */

void __thiscall CPNEdit::~CPNEdit(CPNEdit *this)

{
                    /* 0xdfb1  328  ??1CPNEdit@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(HGDIOBJ *)(this + 0xfe) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(this + 0xfe));
  }
  *(undefined4 *)(this + 0xfe) = 0;
  CPNColor::~CPNColor((CPNColor *)(this + 0xdf));
  CPNColor::~CPNColor((CPNColor *)(this + 0xc0));
  XPNEdit::~XPNEdit((XPNEdit *)this);
  return;
}



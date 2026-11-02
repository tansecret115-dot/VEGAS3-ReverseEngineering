/* Module: pngu3266.dll
   Function: CPNIcon
   Address: 605f3e6b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNIcon::CPNIcon(void) */

CPNIcon * __thiscall CPNIcon::CPNIcon(CPNIcon *this)

{
                    /* 0x3e6b  77  ??0CPNIcon@@QAE@XZ */
  XPNIcon::XPNIcon((XPNIcon *)this);
  *(undefined4 *)(this + 0x2a) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined2 *)(this + 0x28) = 1;
  return this;
}



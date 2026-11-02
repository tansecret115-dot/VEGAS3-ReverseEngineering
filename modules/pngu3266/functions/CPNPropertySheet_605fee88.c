/* Module: pngu3266.dll
   Function: CPNPropertySheet
   Address: 605fee88
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPropertySheet::CPNPropertySheet(void) */

CPNPropertySheet * __thiscall CPNPropertySheet::CPNPropertySheet(CPNPropertySheet *this)

{
                    /* 0xee88  122  ??0CPNPropertySheet@@QAE@XZ */
  XPNPropertySheet::XPNPropertySheet((XPNPropertySheet *)this,0);
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}



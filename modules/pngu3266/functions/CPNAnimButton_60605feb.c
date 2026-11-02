/* Module: pngu3266.dll
   Function: CPNAnimButton
   Address: 60605feb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNAnimButton::CPNAnimButton(void) */

CPNAnimButton * __thiscall CPNAnimButton::CPNAnimButton(CPNAnimButton *this)

{
                    /* 0x15feb  2  ??0CPNAnimButton@@QAE@XZ */
  XPNAnimButton::XPNAnimButton((XPNAnimButton *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x15e) = 0;
  *(undefined4 *)(this + 0x162) = 0;
  *(undefined4 *)(this + 0x166) = 0;
  *(undefined4 *)(this + 0x16a) = 0;
  *(undefined4 *)(this + 0x16e) = 0;
  *(undefined4 *)(this + 0x172) = 0;
  return this;
}



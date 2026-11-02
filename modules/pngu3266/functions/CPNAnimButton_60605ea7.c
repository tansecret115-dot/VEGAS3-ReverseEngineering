/* Module: pngu3266.dll
   Function: CPNAnimButton
   Address: 60605ea7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNAnimButton::CPNAnimButton(class CPNAnimButton const &) */

CPNAnimButton * __thiscall CPNAnimButton::CPNAnimButton(CPNAnimButton *this,CPNAnimButton *param_1)

{
                    /* 0x15ea7  1  ??0CPNAnimButton@@QAE@ABV0@@Z */
  XPNAnimButton::XPNAnimButton((XPNAnimButton *)this,(XPNAnimButton *)param_1);
  *(undefined4 *)(this + 0x15e) = *(undefined4 *)(param_1 + 0x15e);
  *(undefined4 *)(this + 0x162) = *(undefined4 *)(param_1 + 0x162);
  *(undefined4 *)(this + 0x166) = *(undefined4 *)(param_1 + 0x166);
  *(undefined4 *)(this + 0x16a) = *(undefined4 *)(param_1 + 0x16a);
  *(undefined4 *)(this + 0x16e) = *(undefined4 *)(param_1 + 0x16e);
  *(undefined4 *)(this + 0x172) = *(undefined4 *)(param_1 + 0x172);
  *(undefined ***)this = &_vftable_;
  return this;
}



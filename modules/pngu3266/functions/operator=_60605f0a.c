/* Module: pngu3266.dll
   Function: operator=
   Address: 60605f0a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNAnimButton & __thiscall CPNAnimButton::operator=(class CPNAnimButton const &) */

CPNAnimButton * __thiscall CPNAnimButton::operator=(CPNAnimButton *this,CPNAnimButton *param_1)

{
                    /* 0x15f0a  431  ??4CPNAnimButton@@QAEAAV0@ABV0@@Z */
  XPNAnimButton::operator=((XPNAnimButton *)this,(XPNAnimButton *)param_1);
  *(undefined4 *)(this + 0x15e) = *(undefined4 *)(param_1 + 0x15e);
  *(undefined4 *)(this + 0x162) = *(undefined4 *)(param_1 + 0x162);
  *(undefined4 *)(this + 0x166) = *(undefined4 *)(param_1 + 0x166);
  *(undefined4 *)(this + 0x16a) = *(undefined4 *)(param_1 + 0x16a);
  *(undefined4 *)(this + 0x16e) = *(undefined4 *)(param_1 + 0x16e);
  *(undefined4 *)(this + 0x172) = *(undefined4 *)(param_1 + 0x172);
  return this;
}



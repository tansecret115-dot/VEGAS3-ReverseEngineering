/* Module: pngu3266.dll
   Function: operator=
   Address: 606000ff
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMenuButton & __thiscall CPNMenuButton::operator=(class CPNMenuButton const &) */

CPNMenuButton * __thiscall CPNMenuButton::operator=(CPNMenuButton *this,CPNMenuButton *param_1)

{
                    /* 0x100ff  472  ??4CPNMenuButton@@QAEAAV0@ABV0@@Z */
  XPNMenuButton::operator=((XPNMenuButton *)this,(XPNMenuButton *)param_1);
  return this;
}



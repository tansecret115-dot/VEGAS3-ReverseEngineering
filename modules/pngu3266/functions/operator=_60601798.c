/* Module: pngu3266.dll
   Function: operator=
   Address: 60601798
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNColorSelection & __thiscall CPNColorSelection::operator=(class CPNColorSelection
   const &) */

CPNColorSelection * __thiscall
CPNColorSelection::operator=(CPNColorSelection *this,CPNColorSelection *param_1)

{
                    /* 0x11798  444  ??4CPNColorSelection@@QAEAAV0@ABV0@@Z
                       0x11798  516  ??4XPNColorSelection@@QAEAAV0@ABV0@@Z */
  XPNMenuButton::operator=((XPNMenuButton *)this,(XPNMenuButton *)param_1);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  return this;
}



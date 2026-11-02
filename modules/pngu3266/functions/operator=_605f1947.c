/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1947
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNBrush & __thiscall XPNBrush::operator=(class XPNBrush const &) */

XPNBrush * __thiscall XPNBrush::operator=(XPNBrush *this,XPNBrush *param_1)

{
                    /* 0x1947  512  ??4XPNBrush@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  CPNColor::operator=((CPNColor *)(this + 0x10),(CPNColor *)(param_1 + 0x10));
  return this;
}



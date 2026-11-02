/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1a1b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBrush & __thiscall CPNBrush::operator=(class CPNBrush const &) */

CPNBrush * __thiscall CPNBrush::operator=(CPNBrush *this,CPNBrush *param_1)

{
                    /* 0x1a1b  436  ??4CPNBrush@@QAEAAV0@ABV0@@Z */
  XPNBrush::operator=((XPNBrush *)this,(XPNBrush *)param_1);
  *(undefined4 *)(this + 0x2f) = *(undefined4 *)(param_1 + 0x2f);
  *(undefined4 *)(this + 0x33) = *(undefined4 *)(param_1 + 0x33);
  return this;
}



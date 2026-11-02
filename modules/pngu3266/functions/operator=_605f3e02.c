/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3e02
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNIcon & __thiscall CPNIcon::operator=(class CPNIcon const &) */

CPNIcon * __thiscall CPNIcon::operator=(CPNIcon *this,CPNIcon *param_1)

{
                    /* 0x3e02  461  ??4CPNIcon@@QAEAAV0@ABV0@@Z */
  XPNImage::operator=((XPNImage *)this,(XPNImage *)param_1);
  *(undefined4 *)(this + 0x2a) = *(undefined4 *)(param_1 + 0x2a);
  return this;
}



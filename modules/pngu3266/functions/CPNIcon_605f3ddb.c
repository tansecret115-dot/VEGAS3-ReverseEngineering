/* Module: pngu3266.dll
   Function: CPNIcon
   Address: 605f3ddb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNIcon::CPNIcon(class CPNIcon const &) */

CPNIcon * __thiscall CPNIcon::CPNIcon(CPNIcon *this,CPNIcon *param_1)

{
                    /* 0x3ddb  76  ??0CPNIcon@@QAE@ABV0@@Z */
  XPNImage::XPNImage((XPNImage *)this,(XPNImage *)param_1);
  *(undefined ***)this = &XPNIcon::_vftable_;
  *(undefined4 *)(this + 0x2a) = *(undefined4 *)(param_1 + 0x2a);
  *(undefined ***)this = &_vftable_;
  return this;
}



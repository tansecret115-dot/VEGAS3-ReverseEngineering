/* Module: pngu3266.dll
   Function: XPNIcon
   Address: 605f3d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNIcon::XPNIcon(class XPNIcon const &) */

XPNIcon * __thiscall XPNIcon::XPNIcon(XPNIcon *this,XPNIcon *param_1)

{
                    /* 0x3d50  225  ??0XPNIcon@@QAE@ABV0@@Z */
  XPNImage::XPNImage((XPNImage *)this,(XPNImage *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



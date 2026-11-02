/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3d68
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNImage & __thiscall CPNImage::operator=(class CPNImage const &) */

CPNImage * __thiscall CPNImage::operator=(CPNImage *this,CPNImage *param_1)

{
                    /* 0x3d68  462  ??4CPNImage@@QAEAAV0@ABV0@@Z
                       0x3d68  528  ??4XPNIcon@@QAEAAV0@ABV0@@Z */
  XPNImage::operator=((XPNImage *)this,(XPNImage *)param_1);
  return this;
}



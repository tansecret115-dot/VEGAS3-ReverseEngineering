/* Module: pngu3266.dll
   Function: operator=
   Address: 606076ce
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNTextWithLink & __thiscall CPNTextWithLink::operator=(class CPNTextWithLink const
   &) */

CPNTextWithLink * __thiscall
CPNTextWithLink::operator=(CPNTextWithLink *this,CPNTextWithLink *param_1)

{
                    /* 0x176ce  497  ??4CPNTextWithLink@@QAEAAV0@ABV0@@Z */
  XPNTextWithLink::operator=((XPNTextWithLink *)this,(XPNTextWithLink *)param_1);
  return this;
}



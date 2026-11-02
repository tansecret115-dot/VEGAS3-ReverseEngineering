/* Module: pngu3266.dll
   Function: XPNPaintDC
   Address: 605fca21
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPaintDC::XPNPaintDC(class XPNPaintDC const &) */

XPNPaintDC * __thiscall XPNPaintDC::XPNPaintDC(XPNPaintDC *this,XPNPaintDC *param_1)

{
                    /* 0xca21  250  ??0XPNPaintDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



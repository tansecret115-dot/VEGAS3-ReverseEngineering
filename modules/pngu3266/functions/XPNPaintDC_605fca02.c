/* Module: pngu3266.dll
   Function: XPNPaintDC
   Address: 605fca02
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPaintDC::XPNPaintDC(struct _PNxWindow const &) */

XPNPaintDC * __thiscall XPNPaintDC::XPNPaintDC(XPNPaintDC *this,_PNxWindow *param_1)

{
                    /* 0xca02  249  ??0XPNPaintDC@@QAE@ABU_PNxWindow@@@Z
                       0xca02  251  ??0XPNPaintDC@@QAE@PAVCPNWindow@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}



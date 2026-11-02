/* Module: pngu3266.dll
   Function: XPNBitmapDC
   Address: 60603930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNBitmapDC::XPNBitmapDC(class CPNBitmapImage &) */

XPNBitmapDC * __thiscall XPNBitmapDC::XPNBitmapDC(XPNBitmapDC *this,CPNBitmapImage *param_1)

{
                    /* 0x13930  181  ??0XPNBitmapDC@@QAE@AAVCPNBitmapImage@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  *(CPNBitmapImage **)(this + 0x1df) = param_1;
  return this;
}



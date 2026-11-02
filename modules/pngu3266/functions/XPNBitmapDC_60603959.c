/* Module: pngu3266.dll
   Function: XPNBitmapDC
   Address: 60603959
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNBitmapDC::XPNBitmapDC(class XPNBitmapDC const &) */

XPNBitmapDC * __thiscall XPNBitmapDC::XPNBitmapDC(XPNBitmapDC *this,XPNBitmapDC *param_1)

{
  undefined4 uVar1;
  
                    /* 0x13959  182  ??0XPNBitmapDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x1df);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1df) = uVar1;
  return this;
}



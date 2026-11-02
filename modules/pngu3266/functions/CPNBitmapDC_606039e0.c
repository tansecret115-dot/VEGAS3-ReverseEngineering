/* Module: pngu3266.dll
   Function: CPNBitmapDC
   Address: 606039e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBitmapDC::CPNBitmapDC(class CPNBitmapDC const &) */

CPNBitmapDC * __thiscall CPNBitmapDC::CPNBitmapDC(CPNBitmapDC *this,CPNBitmapDC *param_1)

{
  undefined4 uVar1;
  
                    /* 0x139e0  8  ??0CPNBitmapDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x1df);
  *(undefined ***)this = &XPNBitmapDC::_vftable_;
  *(undefined4 *)(this + 0x1df) = uVar1;
  *(undefined4 *)(this + 0x1e3) = *(undefined4 *)(param_1 + 0x1e3);
  *(undefined ***)this = &_vftable_;
  return this;
}



/* Module: pngu3266.dll
   Function: CPNBitmapDC
   Address: 60603a6d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBitmapDC::CPNBitmapDC(class CPNBitmapImage &) */

CPNBitmapDC * __thiscall CPNBitmapDC::CPNBitmapDC(CPNBitmapDC *this,CPNBitmapImage *param_1)

{
  HDC pHVar1;
  HGDIOBJ pvVar2;
  
                    /* 0x13a6d  7  ??0CPNBitmapDC@@QAE@AAVCPNBitmapImage@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  *(CPNBitmapImage **)(this + 0x1df) = param_1;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  *(HDC *)(this + 0x1cf) = pHVar1;
  XPNDC::SetupDefaultTools((XPNDC *)this);
  pvVar2 = SelectObject(*(HDC *)(this + 0x1cf),*(HGDIOBJ *)(*(int *)(this + 0x1df) + 0x14));
  *(HGDIOBJ *)(this + 0x1e3) = pvVar2;
  return this;
}



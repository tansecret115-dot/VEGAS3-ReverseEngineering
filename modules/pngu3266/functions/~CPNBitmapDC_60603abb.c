/* Module: pngu3266.dll
   Function: ~CPNBitmapDC
   Address: 60603abb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNBitmapDC::~CPNBitmapDC(void) */

void __thiscall CPNBitmapDC::~CPNBitmapDC(CPNBitmapDC *this)

{
                    /* 0x13abb  307  ??1CPNBitmapDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  SelectObject(*(HDC *)(this + 0x1cf),*(HGDIOBJ *)(this + 0x1e3));
  CPNDC::CleanupDefaultTools((CPNDC *)this);
  DeleteDC(*(HDC *)(this + 0x1cf));
  *(undefined ***)this = &XPNBitmapDC::_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}



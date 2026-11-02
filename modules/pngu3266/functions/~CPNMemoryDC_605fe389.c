/* Module: pngu3266.dll
   Function: ~CPNMemoryDC
   Address: 605fe389
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNMemoryDC::~CPNMemoryDC(void) */

void __thiscall CPNMemoryDC::~CPNMemoryDC(CPNMemoryDC *this)

{
                    /* 0xe389  342  ??1CPNMemoryDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::CleanupDefaultTools((CPNDC *)this);
  if (*(HGDIOBJ *)(this + 0x1e7) != (HGDIOBJ)0x0) {
    SelectObject(*(HDC *)(this + 0x1cf),*(HGDIOBJ *)(this + 0x1e7));
    *(undefined4 *)(this + 0x1e7) = 0;
  }
  if (*(HGDIOBJ *)(this + 0x1df) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(this + 0x1df));
    *(undefined4 *)(this + 0x1df) = 0;
  }
  if (*(HDC *)(this + 0x1cf) != (HDC)0x0) {
    DeleteDC(*(HDC *)(this + 0x1cf));
    *(undefined4 *)(this + 0x1cf) = 0;
  }
  *(undefined ***)this = &XPNMemDC::_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}



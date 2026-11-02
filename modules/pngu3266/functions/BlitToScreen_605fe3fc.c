/* Module: pngu3266.dll
   Function: BlitToScreen
   Address: 605fe3fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMemoryDC::BlitToScreen(void) */

void __thiscall CPNMemoryDC::BlitToScreen(CPNMemoryDC *this)

{
                    /* 0xe3fc  833  ?BlitToScreen@CPNMemoryDC@@UAEXXZ */
  if (*(HDC *)(this + 0x1e3) != (HDC)0x0) {
    BitBlt(*(HDC *)(this + 0x1e3),0,0,*(int *)(this + 0x1eb),*(int *)(this + 0x1ef),
           *(HDC *)(this + 0x1cf),0,0,0xcc0020);
  }
  return;
}



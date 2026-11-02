/* Module: pngu3266.dll
   Function: DestroyRgn
   Address: 605fcf62
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNRegion::DestroyRgn(void) */

void __thiscall CPNRegion::DestroyRgn(CPNRegion *this)

{
                    /* 0xcf62  946  ?DestroyRgn@CPNRegion@@UAEXXZ */
  if ((*(HGDIOBJ *)(this + 0xc) != (HGDIOBJ)0x0) && (*(int *)(this + 0x10) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}



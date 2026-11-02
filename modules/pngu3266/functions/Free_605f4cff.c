/* Module: pngu3266.dll
   Function: Free
   Address: 605f4cff
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBitmapImage::Free(void) */

void __thiscall CPNBitmapImage::Free(CPNBitmapImage *this)

{
                    /* 0x4cff  1057  ?Free@CPNBitmapImage@@UAEXXZ */
  if ((*(int *)(this + 8) == 0) && (*(int *)(this + 0x18) == 0)) {
    if (*(HGDIOBJ *)(this + 0x14) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(this + 0x14));
      *(undefined4 *)(this + 0x14) = 0;
    }
    if (*(void **)(this + 0x2b) != (void *)0x0) {
      operator_delete(*(void **)(this + 0x2b));
      *(undefined4 *)(this + 0x2b) = 0;
    }
    *(undefined4 *)(this + 0x2f) = 0;
  }
  return;
}



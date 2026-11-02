/* Module: pngu3266.dll
   Function: DestroyClippingRegion
   Address: 605fb9b3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DestroyClippingRegion(void) */

void __thiscall CPNDC::DestroyClippingRegion(CPNDC *this)

{
  HRGN hrgn;
  
                    /* 0xb9b3  944  ?DestroyClippingRegion@CPNDC@@UAEXXZ */
  if (*(int *)(this + 0x1c7) != 0) {
    hrgn = CreateRectRgn(0,0,32000,32000);
    SelectClipRgn(*(HDC *)(this + 0x1cf),hrgn);
    DeleteObject(hrgn);
  }
  *(undefined4 *)(this + 0x1c7) = 0;
  return;
}



/* Module: pngu3266.dll
   Function: DoClipping
   Address: 605fb9f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNDC::DoClipping(struct HDC__ *) */

void __thiscall CPNDC::DoClipping(CPNDC *this,HDC__ *param_1)

{
                    /* 0xb9f1  963  ?DoClipping@CPNDC@@QAEXPAUHDC__@@@Z */
  if (*(int *)(this + 0x1c7) != 0) {
    IntersectClipRect(*(HDC *)(this + 0x1cf),*(int *)(this + 0x1b7),*(int *)(this + 0x1bb),
                      *(int *)(this + 0x1bf),*(int *)(this + 0x1c3));
  }
  return;
}



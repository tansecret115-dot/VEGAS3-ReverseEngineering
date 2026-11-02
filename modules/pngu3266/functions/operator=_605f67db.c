/* Module: pngu3266.dll
   Function: operator=
   Address: 605f67db
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNDrawHelper & __thiscall CPNDrawHelper::operator=(class CPNDrawHelper const &) */

CPNDrawHelper * __thiscall CPNDrawHelper::operator=(CPNDrawHelper *this,CPNDrawHelper *param_1)

{
                    /* 0x67db  453  ??4CPNDrawHelper@@QAEAAV0@ABV0@@Z
                       0x67db  475  ??4CPNObject@@QAEAAV0@ABV0@@Z
                       0x67db  487  ??4CPNRouter@@QAEAAV0@ABV0@@Z
                       0x67db  495  ??4CPNSystemInfo@@QAEAAV0@ABV0@@Z
                       0x67db  518  ??4XPNCursor@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}



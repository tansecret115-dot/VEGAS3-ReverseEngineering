/* Module: pngu3266.dll
   Function: operator=
   Address: 60602473
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMultipleWindowUpdate & __thiscall CPNMultipleWindowUpdate::operator=(class
   CPNMultipleWindowUpdate const &) */

CPNMultipleWindowUpdate * __thiscall
CPNMultipleWindowUpdate::operator=(CPNMultipleWindowUpdate *this,CPNMultipleWindowUpdate *param_1)

{
                    /* 0x12473  474  ??4CPNMultipleWindowUpdate@@QAEAAV0@ABV0@@Z */
  CPNMapPtrToPtr::operator=((CPNMapPtrToPtr *)(this + 4),(CPNMapPtrToPtr *)(param_1 + 4));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}



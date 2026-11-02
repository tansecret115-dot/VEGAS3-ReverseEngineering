/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3b13
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNCustomMenu & __thiscall CPNCustomMenu::operator=(class CPNCustomMenu const &) */

CPNCustomMenu * __thiscall CPNCustomMenu::operator=(CPNCustomMenu *this,CPNCustomMenu *param_1)

{
                    /* 0x3b13  449  ??4CPNCustomMenu@@QAEAAV0@ABV0@@Z */
  CPNMapPtrToPtr::operator=((CPNMapPtrToPtr *)this,(CPNMapPtrToPtr *)param_1);
  return this;
}



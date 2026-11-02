/* Module: pngu3266.dll
   Function: CPNMultipleWindowUpdate
   Address: 60602446
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMultipleWindowUpdate::CPNMultipleWindowUpdate(class CPNMultipleWindowUpdate
   const &) */

CPNMultipleWindowUpdate * __thiscall
CPNMultipleWindowUpdate::CPNMultipleWindowUpdate
          (CPNMultipleWindowUpdate *this,CPNMultipleWindowUpdate *param_1)

{
  undefined4 uVar1;
  
                    /* 0x12446  100  ??0CPNMultipleWindowUpdate@@QAE@ABV0@@Z */
  *(undefined ***)this = &XPNMultipleWindowUpdate::_vftable_;
  CPNMapPtrToPtr::CPNMapPtrToPtr((CPNMapPtrToPtr *)(this + 4),(CPNMapPtrToPtr *)(param_1 + 4));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x20) = uVar1;
  return this;
}



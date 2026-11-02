/* Module: pngu3266.dll
   Function: CPNMapPtrToPtr
   Address: 605f2851
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMapPtrToPtr::CPNMapPtrToPtr(class CPNMapPtrToPtr const &) */

void __thiscall CPNMapPtrToPtr::CPNMapPtrToPtr(CPNMapPtrToPtr *this,CPNMapPtrToPtr *param_1)

{
                    /* 0x2851  90  ??0CPNMapPtrToPtr@@QAE@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &_vftable_;
  return;
}



/* Module: pngu3266.dll
   Function: operator=
   Address: 605f399a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMapPtrToPtr & __thiscall CPNMapPtrToPtr::operator=(class CPNMapPtrToPtr const &)
    */

CPNMapPtrToPtr * __thiscall CPNMapPtrToPtr::operator=(CPNMapPtrToPtr *this,CPNMapPtrToPtr *param_1)

{
                    /* 0x399a  469  ??4CPNMapPtrToPtr@@QAEAAV0@ABV0@@Z
                       0x399a  471  ??4CPNMenu@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}



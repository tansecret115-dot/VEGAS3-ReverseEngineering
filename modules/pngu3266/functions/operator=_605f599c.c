/* Module: pngu3266.dll
   Function: operator=
   Address: 605f599c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNFont const & __thiscall CPNFont::operator=(class CPNFont const &) */

CPNFont * __thiscall CPNFont::operator=(CPNFont *this,CPNFont *param_1)

{
  int iVar1;
  
                    /* 0x599c  456  ??4CPNFont@@UAEABV0@ABV0@@Z */
  if (this != param_1) {
    iVar1 = *(int *)(param_1 + 0x2c);
    *(int *)(this + 0x2c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x30) = 1;
    }
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  }
  return this;
}



/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNCustomFrame & __thiscall CPNCustomFrame::operator=(class CPNCustomFrame const &)
    */

CPNCustomFrame * __thiscall CPNCustomFrame::operator=(CPNCustomFrame *this,CPNCustomFrame *param_1)

{
                    /* 0x3a60  448  ??4CPNCustomFrame@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return this;
}



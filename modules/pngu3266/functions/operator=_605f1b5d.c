/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1b5d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNImage & __thiscall XPNImage::operator=(class XPNImage const &) */

XPNImage * __thiscall XPNImage::operator=(XPNImage *this,XPNImage *param_1)

{
                    /* 0x1b5d  529  ??4XPNImage@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0x28);
  return this;
}



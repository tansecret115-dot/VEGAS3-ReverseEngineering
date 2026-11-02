/* Module: pngu3266.dll
   Function: operator=
   Address: 605f24e1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNTimer & __thiscall XPNTimer::operator=(class XPNTimer const &) */

XPNTimer * __thiscall XPNTimer::operator=(XPNTimer *this,XPNTimer *param_1)

{
                    /* 0x24e1  554  ??4XPNTimer@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 8) =
       *(undefined4 *)((-(uint)(param_1 != (XPNTimer *)0x0) & (uint)(param_1 + 4)) + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return this;
}



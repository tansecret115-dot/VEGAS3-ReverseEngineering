/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1777
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNPen & __thiscall XPNPen::operator=(class XPNPen const &) */

XPNPen * __thiscall XPNPen::operator=(XPNPen *this,XPNPen *param_1)

{
                    /* 0x1777  540  ??4XPNPen@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  CPNColor::operator=((CPNColor *)(this + 0x14),(CPNColor *)(param_1 + 0x14));
  *(undefined4 *)(this + 0x33) = *(undefined4 *)(param_1 + 0x33);
  *(undefined4 *)(this + 0x37) = *(undefined4 *)(param_1 + 0x37);
  *(undefined4 *)(this + 0x3b) = *(undefined4 *)(param_1 + 0x3b);
  *(undefined4 *)(this + 0x3f) = *(undefined4 *)(param_1 + 0x3f);
  return this;
}



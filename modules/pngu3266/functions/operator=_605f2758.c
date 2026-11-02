/* Module: pngu3266.dll
   Function: operator=
   Address: 605f2758
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNTipManager & __thiscall XPNTipManager::operator=(class XPNTipManager const &) */

XPNTipManager * __thiscall XPNTipManager::operator=(XPNTipManager *this,XPNTipManager *param_1)

{
                    /* 0x2758  555  ??4XPNTipManager@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return this;
}



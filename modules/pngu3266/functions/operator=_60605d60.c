/* Module: pngu3266.dll
   Function: operator=
   Address: 60605d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNAnimButton & __thiscall XPNAnimButton::operator=(class XPNAnimButton const &) */

XPNAnimButton * __thiscall XPNAnimButton::operator=(XPNAnimButton *this,XPNAnimButton *param_1)

{
                    /* 0x15d60  507  ??4XPNAnimButton@@QAEAAV0@ABV0@@Z */
  XPNButton::operator=((XPNButton *)this,(XPNButton *)param_1);
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  CPNColor::operator=((CPNColor *)(this + 0xff),(CPNColor *)(param_1 + 0xff));
  *(undefined4 *)(this + 0x11e) = *(undefined4 *)(param_1 + 0x11e);
  *(undefined4 *)(this + 0x122) = *(undefined4 *)(param_1 + 0x122);
  *(undefined4 *)(this + 0x126) = *(undefined4 *)(param_1 + 0x126);
  *(undefined4 *)(this + 0x12a) = *(undefined4 *)(param_1 + 0x12a);
  *(undefined4 *)(this + 0x12e) = *(undefined4 *)(param_1 + 0x12e);
  *(undefined4 *)(this + 0x132) = *(undefined4 *)(param_1 + 0x132);
  *(undefined4 *)(this + 0x136) = *(undefined4 *)(param_1 + 0x136);
  *(undefined4 *)(this + 0x13a) = *(undefined4 *)(param_1 + 0x13a);
  *(undefined4 *)(this + 0x13e) = *(undefined4 *)(param_1 + 0x13e);
  *(undefined4 *)(this + 0x142) = *(undefined4 *)(param_1 + 0x142);
  *(undefined4 *)(this + 0x146) = *(undefined4 *)(param_1 + 0x146);
  *(undefined4 *)(this + 0x14a) = *(undefined4 *)(param_1 + 0x14a);
  *(undefined4 *)(this + 0x14e) = *(undefined4 *)(param_1 + 0x14e);
  *(undefined4 *)(this + 0x152) = *(undefined4 *)(param_1 + 0x152);
  *(undefined4 *)(this + 0x156) = *(undefined4 *)(param_1 + 0x156);
  *(undefined4 *)(this + 0x15a) = *(undefined4 *)(param_1 + 0x15a);
  return this;
}



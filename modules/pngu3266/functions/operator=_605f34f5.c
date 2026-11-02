/* Module: pngu3266.dll
   Function: operator=
   Address: 605f34f5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNButton & __thiscall XPNButton::operator=(class XPNButton const &) */

XPNButton * __thiscall XPNButton::operator=(XPNButton *this,XPNButton *param_1)

{
                    /* 0x34f5  513  ??4XPNButton@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  CPNColor::operator=((CPNColor *)(this + 0xd8),(CPNColor *)(param_1 + 0xd8));
  *(undefined4 *)(this + 0xf7) = *(undefined4 *)(param_1 + 0xf7);
  return this;
}



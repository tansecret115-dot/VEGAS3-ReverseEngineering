/* Module: pngu3266.dll
   Function: operator=
   Address: 60613562
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNCustomButton & __thiscall XPNCustomButton::operator=(class XPNCustomButton const
   &) */

XPNCustomButton * __thiscall
XPNCustomButton::operator=(XPNCustomButton *this,XPNCustomButton *param_1)

{
                    /* 0x23562  519  ??4XPNCustomButton@@QAEAAV0@ABV0@@Z */
  XPNButton::operator=((XPNButton *)this,(XPNButton *)param_1);
  FUN_60618e60(this + 0xfb,(int *)(param_1 + 0xfb));
  *(undefined4 *)(this + 0x107) = *(undefined4 *)(param_1 + 0x107);
  *(undefined4 *)(this + 0x10b) = *(undefined4 *)(param_1 + 0x10b);
  return this;
}



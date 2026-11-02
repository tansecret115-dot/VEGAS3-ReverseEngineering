/* Module: pngu3266.dll
   Function: operator=
   Address: 605fd14c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNImageButton & __thiscall XPNImageButton::operator=(class XPNImageButton const &)
    */

XPNImageButton * __thiscall XPNImageButton::operator=(XPNImageButton *this,XPNImageButton *param_1)

{
                    /* 0xd14c  530  ??4XPNImageButton@@QAEAAV0@ABV0@@Z */
  XPNButton::operator=((XPNButton *)this,(XPNButton *)param_1);
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  *(undefined4 *)(this + 0xff) = *(undefined4 *)(param_1 + 0xff);
  *(undefined4 *)(this + 0x103) = *(undefined4 *)(param_1 + 0x103);
  return this;
}



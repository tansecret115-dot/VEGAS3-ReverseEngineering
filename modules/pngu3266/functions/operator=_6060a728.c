/* Module: pngu3266.dll
   Function: operator=
   Address: 6060a728
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNScrollButton & __thiscall CPNScrollButton::operator=(class CPNScrollButton const
   &) */

CPNScrollButton * __thiscall
CPNScrollButton::operator=(CPNScrollButton *this,CPNScrollButton *param_1)

{
                    /* 0x1a728  490  ??4CPNScrollButton@@QAEAAV0@ABV0@@Z
                       0x1a728  548  ??4XPNScrollButton@@QAEAAV0@ABV0@@Z */
  XPNButton::operator=((XPNButton *)this,(XPNButton *)param_1);
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  return this;
}



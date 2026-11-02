/* Module: pngu3266.dll
   Function: CPNImageControl
   Address: 60600695
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImageControl::CPNImageControl(class CPNImageControl const &) */

CPNImageControl * __thiscall
CPNImageControl::CPNImageControl(CPNImageControl *this,CPNImageControl *param_1)

{
  undefined4 uVar1;
  
                    /* 0x10695  84  ??0CPNImageControl@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &CPNControl::_vftable_;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  CPNColor::CPNColor((CPNColor *)(this + 0xc4),(CPNColor *)(param_1 + 0xc4));
  CPNColor::CPNColor((CPNColor *)(this + 0xe3),(CPNColor *)(param_1 + 0xe3));
  *(undefined4 *)(this + 0x102) = *(undefined4 *)(param_1 + 0x102);
  *(undefined4 *)(this + 0x106) = *(undefined4 *)(param_1 + 0x106);
  *(undefined ***)this = &_vftable_;
  return this;
}



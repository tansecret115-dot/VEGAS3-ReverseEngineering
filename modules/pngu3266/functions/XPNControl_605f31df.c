/* Module: pngu3266.dll
   Function: XPNControl
   Address: 605f31df
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNControl::XPNControl(class XPNControl const &) */

XPNControl * __thiscall XPNControl::XPNControl(XPNControl *this,XPNControl *param_1)

{
  undefined4 uVar1;
  
                    /* 0x31df  200  ??0XPNControl@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  return this;
}



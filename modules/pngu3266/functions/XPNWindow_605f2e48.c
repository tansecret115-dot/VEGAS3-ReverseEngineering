/* Module: pngu3266.dll
   Function: XPNWindow
   Address: 605f2e48
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNWindow::XPNWindow(class XPNWindow const &) */

void __thiscall XPNWindow::XPNWindow(XPNWindow *this,XPNWindow *param_1)

{
  undefined4 uVar1;
  
                    /* 0x2e48  291  ??0XPNWindow@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNRouter::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return;
}



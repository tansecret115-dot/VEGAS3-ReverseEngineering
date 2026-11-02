/* Module: pngu3266.dll
   Function: CPNControl
   Address: 605f327b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNControl::CPNControl(class CPNControl const &) */

CPNControl * __thiscall CPNControl::CPNControl(CPNControl *this,CPNControl *param_1)

{
  undefined4 uVar1;
  
                    /* 0x327b  41  ??0CPNControl@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}



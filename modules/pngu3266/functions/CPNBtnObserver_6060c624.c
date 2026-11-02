/* Module: pngu3266.dll
   Function: CPNBtnObserver
   Address: 6060c624
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBtnObserver::CPNBtnObserver(class CPNBtnObserver const &) */

void __thiscall CPNBtnObserver::CPNBtnObserver(CPNBtnObserver *this,CPNBtnObserver *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1c624  18  ??0CPNBtnObserver@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNRouter::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &_vftable_;
  return;
}



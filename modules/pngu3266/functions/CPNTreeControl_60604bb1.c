/* Module: pngu3266.dll
   Function: CPNTreeControl
   Address: 60604bb1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTreeControl::CPNTreeControl(void) */

CPNTreeControl * __thiscall CPNTreeControl::CPNTreeControl(CPNTreeControl *this)

{
  void *this_00;
  undefined4 uVar1;
  
                    /* 0x14bb1  158  ??0CPNTreeControl@@QAE@XZ */
  XPNTreeControl::XPNTreeControl((XPNTreeControl *)this);
  *(undefined ***)this = &_vftable_;
  this_00 = operator_new(0x18);
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_6061ff50(this_00,10);
  }
  *(undefined4 *)(this + 200) = uVar1;
  return this;
}



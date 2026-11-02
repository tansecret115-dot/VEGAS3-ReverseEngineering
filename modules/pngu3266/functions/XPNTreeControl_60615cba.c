/* Module: pngu3266.dll
   Function: XPNTreeControl
   Address: 60615cba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNTreeControl::XPNTreeControl(void) */

XPNTreeControl * __thiscall XPNTreeControl::XPNTreeControl(XPNTreeControl *this)

{
  void *this_00;
  undefined4 uVar1;
  
                    /* 0x25cba  289  ??0XPNTreeControl@@IAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc4) = 1;
  this_00 = operator_new(0x18);
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_6061ff50(this_00,10);
  }
  *(undefined4 *)(this + 0xc0) = uVar1;
  return this;
}



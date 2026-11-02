/* Module: pngu3266.dll
   Function: XPNTabControl
   Address: 6060a7a9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNTabControl::XPNTabControl(void) */

XPNTabControl * __thiscall XPNTabControl::XPNTabControl(XPNTabControl *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
                    /* 0x1a7a9  277  ??0XPNTabControl@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &_vftable_;
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_6061a0c0(puVar1);
  }
  *(undefined4 *)(this + 0xd0) = uVar2;
  return this;
}



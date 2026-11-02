/* Module: pngu3266.dll
   Function: TranslateStyles
   Address: 6061363d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNCustomButton::TranslateStyles(unsigned long) */

void __thiscall XPNCustomButton::TranslateStyles(XPNCustomButton *this,ulong param_1)

{
  uint uVar1;
  
                    /* 0x2363d  2097  ?TranslateStyles@XPNCustomButton@@IAEXK@Z */
  this[0x108] = (XPNCustomButton)((byte)this[0x108] | 0x20);
  uVar1 = *(uint *)(this + 0x107);
  if ((param_1 & 8) == 0) {
    if ((param_1 & 4) == 0) {
      uVar1 = uVar1 | 0x10000;
    }
    else {
      uVar1 = uVar1 | 0x8000;
    }
  }
  else {
    uVar1 = uVar1 | 0x40000;
  }
  *(uint *)(this + 0x107) = uVar1;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      *(uint *)(this + 0x107) = *(uint *)(this + 0x107) | 2;
    }
    else {
      this[0x108] = (XPNCustomButton)((byte)this[0x108] | 8);
    }
  }
  else {
    this[0x107] = (XPNCustomButton)((byte)this[0x107] | 0x80);
  }
  return;
}



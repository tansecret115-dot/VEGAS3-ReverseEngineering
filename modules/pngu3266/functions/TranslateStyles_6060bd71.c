/* Module: pngu3266.dll
   Function: TranslateStyles
   Address: 6060bd71
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNCustomText::TranslateStyles(unsigned long) */

void __thiscall XPNCustomText::TranslateStyles(XPNCustomText *this,ulong param_1)

{
                    /* 0x1bd71  2098  ?TranslateStyles@XPNCustomText@@IAEXK@Z */
  *(undefined4 *)(this + 0xc0) = 0;
  *(uint *)(this + 0xc0) = (-(uint)((param_1 & 0x200) != 0) & 0xffffe004) + 0x2000;
  if ((param_1 & 0x800) != 0) {
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 8;
  }
  if ((param_1 & 1) == 0) {
    if ((param_1 & 0x10) == 0) {
      this[0xc2] = (XPNCustomText)((byte)this[0xc2] | 1);
    }
    else {
      this[0xc1] = (XPNCustomText)((byte)this[0xc1] | 0x80);
    }
  }
  else {
    this[0xc2] = (XPNCustomText)((byte)this[0xc2] | 4);
  }
  if ((param_1 & 4) == 0) {
    if ((param_1 & 8) == 0) {
      *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 2;
    }
    else {
      *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x800;
    }
  }
  else {
    this[0xc0] = (XPNCustomText)((byte)this[0xc0] | 0x80);
  }
  if ((param_1 & 0x40) == 0) {
    if ((param_1 & 0x80) == 0) {
      if ((param_1 & 0x100) == 0) {
        *(undefined4 *)(this + 0x10e) = 0;
      }
      else {
        *(undefined4 *)(this + 0x10e) = 3;
      }
    }
    else {
      *(undefined4 *)(this + 0x10e) = 2;
    }
  }
  else {
    *(undefined4 *)(this + 0x10e) = 1;
  }
  return;
}



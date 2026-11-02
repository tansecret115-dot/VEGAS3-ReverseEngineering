/* Module: pngu3266.dll
   Function: XPNAnimateCtl
   Address: 6060f52e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNAnimateCtl::XPNAnimateCtl(void) */

XPNAnimateCtl * __thiscall XPNAnimateCtl::XPNAnimateCtl(XPNAnimateCtl *this)

{
                    /* 0x1f52e  177  ??0XPNAnimateCtl@@IAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  CPNColor::CPNColor((CPNColor *)(this + 0xc4),0xf);
  *(undefined4 *)(this + 0xe3) = 1;
  *(undefined4 *)(this + 0xe7) = 0;
  *(undefined4 *)(this + 0xeb) = 0;
  *(undefined4 *)(this + 0xef) = 0;
  *(undefined4 *)(this + 0xf3) = 0;
  *(undefined4 *)(this + 0xf7) = 0;
  *(undefined4 *)(this + 0xfb) = 0;
  *(undefined4 *)(this + 0xff) = 0;
  *(undefined4 *)(this + 0x103) = 0;
  *(undefined4 *)(this + 0x107) = 0;
  *(undefined4 *)(this + 0x10b) = 0;
  *(undefined4 *)(this + 0x10f) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}



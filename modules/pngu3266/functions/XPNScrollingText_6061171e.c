/* Module: pngu3266.dll
   Function: XPNScrollingText
   Address: 6061171e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNScrollingText::XPNScrollingText(void) */

XPNScrollingText * __thiscall XPNScrollingText::XPNScrollingText(XPNScrollingText *this)

{
                    /* 0x2171e  272  ??0XPNScrollingText@@IAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  CPNColor::CPNColor((CPNColor *)(this + 0xc0),'\0','\0','\0');
  CPNColor::CPNColor((CPNColor *)(this + 0xdf),0xff,0xff,0xff);
  FUN_6061a4b0((undefined4 *)(this + 0xfe));
  *(undefined4 *)(this + 0x10e) = 2;
  *(undefined4 *)(this + 0x112) = 500;
  *(undefined4 *)(this + 0x116) = 0;
  *(undefined4 *)(this + 0x11a) = 8;
  *(undefined4 *)(this + 0x11e) = 0;
  *(undefined4 *)(this + 0x122) = 0;
  *(undefined4 *)(this + 0x126) = 0;
  *(undefined4 *)(this + 0x12a) = 0;
  *(undefined4 *)(this + 0x12e) = 0;
  *(undefined4 *)(this + 0x136) = 0;
  *(undefined4 *)(this + 0x13a) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}



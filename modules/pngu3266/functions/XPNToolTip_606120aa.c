/* Module: pngu3266.dll
   Function: XPNToolTip
   Address: 606120aa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNToolTip::XPNToolTip(void) */

XPNToolTip * __thiscall XPNToolTip::XPNToolTip(XPNToolTip *this)

{
                    /* 0x220aa  287  ??0XPNToolTip@@IAE@XZ */
  CPNWindow::CPNWindow((CPNWindow *)this);
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}



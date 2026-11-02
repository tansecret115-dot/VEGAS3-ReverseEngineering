/* Module: pngu3266.dll
   Function: XPNPropertyPage
   Address: 60610917
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNPropertyPage::XPNPropertyPage(void) */

XPNPropertyPage * __thiscall XPNPropertyPage::XPNPropertyPage(XPNPropertyPage *this)

{
                    /* 0x20917  260  ??0XPNPropertyPage@@IAE@XZ */
  CPNDialog::CPNDialog((CPNDialog *)this);
  FUN_60618bb0((undefined4 *)(this + 0xd0));
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}



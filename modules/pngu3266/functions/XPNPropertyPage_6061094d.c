/* Module: pngu3266.dll
   Function: XPNPropertyPage
   Address: 6061094d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNPropertyPage::XPNPropertyPage(unsigned long,char const *) */

XPNPropertyPage * __thiscall
XPNPropertyPage::XPNPropertyPage(XPNPropertyPage *this,ulong param_1,char *param_2)

{
                    /* 0x2094d  259  ??0XPNPropertyPage@@IAE@KPBD@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,param_1,(CPNWindow *)0x0);
  FUN_60618d40(this + 0xd0,param_2);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}



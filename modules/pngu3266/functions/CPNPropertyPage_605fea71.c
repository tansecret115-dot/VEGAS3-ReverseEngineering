/* Module: pngu3266.dll
   Function: CPNPropertyPage
   Address: 605fea71
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall CPNPropertyPage::CPNPropertyPage(unsigned long,char const *) */

CPNPropertyPage * __thiscall
CPNPropertyPage::CPNPropertyPage(CPNPropertyPage *this,ulong param_1,char *param_2)

{
                    /* 0xea71  117  ??0CPNPropertyPage@@IAE@KPBD@Z */
  XPNPropertyPage::XPNPropertyPage((XPNPropertyPage *)this,param_1,param_2);
  *(undefined4 *)(this + 0xec) = 0;
  FUN_60618d40(this + 0xf0,param_2);
  *(undefined ***)this = &_vftable_;
  return this;
}



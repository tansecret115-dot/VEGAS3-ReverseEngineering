/* Module: pngu3266.dll
   Function: CPNPropertyPage
   Address: 605fea54
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall CPNPropertyPage::CPNPropertyPage(void) */

CPNPropertyPage * __thiscall CPNPropertyPage::CPNPropertyPage(CPNPropertyPage *this)

{
                    /* 0xea54  118  ??0CPNPropertyPage@@IAE@XZ */
  XPNPropertyPage::XPNPropertyPage((XPNPropertyPage *)this);
  FUN_60618bb0((undefined4 *)(this + 0xf0));
  *(undefined ***)this = &_vftable_;
  return this;
}



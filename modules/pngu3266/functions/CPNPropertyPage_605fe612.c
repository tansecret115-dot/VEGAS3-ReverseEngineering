/* Module: pngu3266.dll
   Function: CPNPropertyPage
   Address: 605fe612
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPropertyPage::CPNPropertyPage(class CPNPropertyPage const &) */

CPNPropertyPage * __thiscall
CPNPropertyPage::CPNPropertyPage(CPNPropertyPage *this,CPNPropertyPage *param_1)

{
                    /* 0xe612  119  ??0CPNPropertyPage@@QAE@ABV0@@Z */
  XPNPropertyPage::XPNPropertyPage((XPNPropertyPage *)this,(XPNPropertyPage *)param_1);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  FUN_60618bd0(this + 0xf0,(int *)(param_1 + 0xf0));
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined ***)this = &_vftable_;
  return this;
}



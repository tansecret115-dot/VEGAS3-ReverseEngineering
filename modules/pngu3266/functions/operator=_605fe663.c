/* Module: pngu3266.dll
   Function: operator=
   Address: 605fe663
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPropertyPage & __thiscall CPNPropertyPage::operator=(class CPNPropertyPage const
   &) */

CPNPropertyPage * __thiscall
CPNPropertyPage::operator=(CPNPropertyPage *this,CPNPropertyPage *param_1)

{
                    /* 0xe663  481  ??4CPNPropertyPage@@QAEAAV0@ABV0@@Z */
  XPNPropertyPage::operator=((XPNPropertyPage *)this,(XPNPropertyPage *)param_1);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  FUN_60618e60(this + 0xf0,(int *)(param_1 + 0xf0));
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  return this;
}



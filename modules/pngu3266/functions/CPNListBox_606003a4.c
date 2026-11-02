/* Module: pngu3266.dll
   Function: CPNListBox
   Address: 606003a4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNListBox::CPNListBox(class CPNListBox const &) */

CPNListBox * __thiscall CPNListBox::CPNListBox(CPNListBox *this,CPNListBox *param_1)

{
                    /* 0x103a4  88  ??0CPNListBox@@QAE@ABV0@@Z */
  XPNListBox::XPNListBox((XPNListBox *)this,(XPNListBox *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



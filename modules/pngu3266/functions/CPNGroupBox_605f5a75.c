/* Module: pngu3266.dll
   Function: CPNGroupBox
   Address: 605f5a75
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNGroupBox::CPNGroupBox(class CPNGroupBox const &) */

CPNGroupBox * __thiscall CPNGroupBox::CPNGroupBox(CPNGroupBox *this,CPNGroupBox *param_1)

{
                    /* 0x5a75  74  ??0CPNGroupBox@@QAE@ABV0@@Z */
  XPNGroupBox::XPNGroupBox((XPNGroupBox *)this,(XPNGroupBox *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



/* Module: pngu3266.dll
   Function: ~CPNPropertyPage
   Address: 605feaa3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNPropertyPage::~CPNPropertyPage(void) */

void __thiscall CPNPropertyPage::~CPNPropertyPage(CPNPropertyPage *this)

{
                    /* 0xeaa3  353  ??1CPNPropertyPage@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_60618cd0((int *)(this + 0xf0));
  XPNPropertyPage::~XPNPropertyPage((XPNPropertyPage *)this);
  return;
}



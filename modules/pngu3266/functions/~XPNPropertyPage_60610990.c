/* Module: pngu3266.dll
   Function: ~XPNPropertyPage
   Address: 60610990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNPropertyPage::~XPNPropertyPage(void) */

void __thiscall XPNPropertyPage::~XPNPropertyPage(XPNPropertyPage *this)

{
                    /* 0x20990  411  ??1XPNPropertyPage@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_60618cd0((int *)(this + 0xd0));
  CPNDialog::~CPNDialog((CPNDialog *)this);
  return;
}



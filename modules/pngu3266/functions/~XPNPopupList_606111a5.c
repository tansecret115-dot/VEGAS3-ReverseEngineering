/* Module: pngu3266.dll
   Function: ~XPNPopupList
   Address: 606111a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNPopupList::~XPNPopupList(void) */

void __thiscall XPNPopupList::~XPNPopupList(XPNPopupList *this)

{
                    /* 0x211a5  409  ??1XPNPopupList@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}



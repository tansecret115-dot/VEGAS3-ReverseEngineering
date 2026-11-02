/* Module: pngu3266.dll
   Function: XPNPopupList
   Address: 60611193
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNPopupList::XPNPopupList(void) */

XPNPopupList * __thiscall XPNPopupList::XPNPopupList(XPNPopupList *this)

{
                    /* 0x21193  255  ??0XPNPopupList@@IAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}



/* Module: pngu3266.dll
   Function: ~CPNPopupList
   Address: 60601382
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNPopupList::~CPNPopupList(void) */

void __thiscall CPNPopupList::~CPNPopupList(CPNPopupList *this)

{
                    /* 0x11382  351  ??1CPNPopupList@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0xc0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc0))(1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  XPNPopupList::~XPNPopupList((XPNPopupList *)this);
  return;
}



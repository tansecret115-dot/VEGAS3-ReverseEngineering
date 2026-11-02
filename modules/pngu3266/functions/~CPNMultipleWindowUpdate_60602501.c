/* Module: pngu3266.dll
   Function: ~CPNMultipleWindowUpdate
   Address: 60602501
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNMultipleWindowUpdate::~CPNMultipleWindowUpdate(void) */

void __thiscall CPNMultipleWindowUpdate::~CPNMultipleWindowUpdate(CPNMultipleWindowUpdate *this)

{
                    /* 0x12501  346  ??1CPNMultipleWindowUpdate@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_60619720((undefined4 *)(this + 4));
  XPNMultipleWindowUpdate::~XPNMultipleWindowUpdate((XPNMultipleWindowUpdate *)this);
  return;
}



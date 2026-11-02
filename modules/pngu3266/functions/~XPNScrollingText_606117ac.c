/* Module: pngu3266.dll
   Function: ~XPNScrollingText
   Address: 606117ac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNScrollingText::~XPNScrollingText(void) */

void __thiscall XPNScrollingText::~XPNScrollingText(XPNScrollingText *this)

{
                    /* 0x217ac  417  ??1XPNScrollingText@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  RemoveAllText(this);
  FUN_6061a4c0((undefined4 *)(this + 0xfe));
  CPNColor::~CPNColor((CPNColor *)(this + 0xdf));
  CPNColor::~CPNColor((CPNColor *)(this + 0xc0));
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}



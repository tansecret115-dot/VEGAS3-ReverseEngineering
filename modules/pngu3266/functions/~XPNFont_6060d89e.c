/* Module: pngu3266.dll
   Function: ~XPNFont
   Address: 6060d89e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNFont::~XPNFont(void) */

void __thiscall XPNFont::~XPNFont(XPNFont *this)

{
                    /* 0x1d89e  392  ??1XPNFont@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNGraphicResource::~CPNGraphicResource((CPNGraphicResource *)this);
  return;
}



/* Module: pngu3266.dll
   Function: ~XPNIcon
   Address: 60610223
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNIcon::~XPNIcon(void) */

void __thiscall XPNIcon::~XPNIcon(XPNIcon *this)

{
                    /* 0x20223  396  ??1XPNIcon@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNImage::~CPNImage((CPNImage *)this);
  return;
}



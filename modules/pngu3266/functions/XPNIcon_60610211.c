/* Module: pngu3266.dll
   Function: XPNIcon
   Address: 60610211
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNIcon::XPNIcon(void) */

XPNIcon * __thiscall XPNIcon::XPNIcon(XPNIcon *this)

{
                    /* 0x20211  226  ??0XPNIcon@@QAE@XZ */
  CPNImage::CPNImage((CPNImage *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}



/* Module: pngu3266.dll
   Function: XPNImage
   Address: 60610177
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNImage::XPNImage(void) */

XPNImage * __thiscall XPNImage::XPNImage(XPNImage *this)

{
                    /* 0x20177  228  ??0XPNImage@@QAE@XZ */
  CPNGraphicResource::CPNGraphicResource((CPNGraphicResource *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined2 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined ***)this = &_vftable_;
  return this;
}



/* Module: pngu3266.dll
   Function: XPNFont
   Address: 6060d82c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNFont::XPNFont(void) */

XPNFont * __thiscall XPNFont::XPNFont(XPNFont *this)

{
                    /* 0x1d82c  217  ??0XPNFont@@IAE@XZ */
  CPNGraphicResource::CPNGraphicResource((CPNGraphicResource *)this);
  *(undefined4 *)(this + 0xc) = 0xfffffff6;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = 0xd;
  *(undefined4 *)(this + 0x1c) = 0x12;
  *(undefined ***)this = &_vftable_;
  return this;
}



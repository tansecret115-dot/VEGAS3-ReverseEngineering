/* Module: pngu3266.dll
   Function: XPNFont
   Address: 6060d864
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNFont::XPNFont(int,int,int,int,char const *,int) */

XPNFont * __thiscall
XPNFont::XPNFont(XPNFont *this,int param_1,int param_2,int param_3,int param_4,char *param_5,
                int param_6)

{
                    /* 0x1d864  216  ??0XPNFont@@IAE@HHHHPBDH@Z */
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



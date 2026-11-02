/* Module: pngu3266.dll
   Function: CPNFont
   Address: 605f56f4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNFont::CPNFont(int,int,int,int,char const *,int) */

CPNFont * __thiscall
CPNFont::CPNFont(CPNFont *this,int param_1,int param_2,int param_3,int param_4,char *param_5,
                int param_6)

{
                    /* 0x56f4  66  ??0CPNFont@@QAE@HHHHPBDH@Z */
  XPNFont::XPNFont((XPNFont *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &_vftable_;
  Create(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return this;
}



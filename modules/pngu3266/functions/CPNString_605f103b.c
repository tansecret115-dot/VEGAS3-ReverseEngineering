/* Module: pngu3266.dll
   Function: CPNString
   Address: 605f103b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNString::CPNString(unsigned char const *) */

CPNString * __thiscall CPNString::CPNString(CPNString *this,uchar *param_1)

{
                    /* 0x103b  143  ??0CPNString@@QAE@PBE@Z */
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  FUN_60618b30((undefined4 *)this);
  FUN_60618ed0(this,(char *)param_1);
  return this;
}



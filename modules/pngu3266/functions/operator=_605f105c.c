/* Module: pngu3266.dll
   Function: operator=
   Address: 605f105c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNString const & __thiscall CPNString::operator=(unsigned char const *) */

CPNString * __thiscall CPNString::operator=(CPNString *this,uchar *param_1)

{
                    /* 0x105c  494  ??4CPNString@@QAEABV0@PBE@Z */
  FUN_60618ed0(this,(char *)param_1);
  return this;
}



/* Module: pngu3266.dll
   Function: operator_char_const*
   Address: 605f108d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNString::operator char const *(void)const  */

char * __thiscall CPNString::operator_char_const_(CPNString *this)

{
                    /* 0x108d  592  ??BCPNString@@QBEPBDXZ */
  return *(char **)this;
}



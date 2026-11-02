/* Module: pncrt.dll
   Function: raw_name
   Address: 78008320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: char const * __thiscall type_info::raw_name(void)const  */

char * __thiscall type_info::raw_name(type_info *this)

{
                    /* 0x8320  42  ?raw_name@type_info@@QBEPBDXZ */
  return (char *)(this + 8);
}



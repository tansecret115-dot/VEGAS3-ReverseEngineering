/* Module: pncrt.dll
   Function: bad_cast
   Address: 78008040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall bad_cast::bad_cast(char const * const &) */

bad_cast * __thiscall bad_cast::bad_cast(bad_cast *this,char **param_1)

{
                    /* 0x8040  3  ??0bad_cast@@QAE@ABQBD@Z */
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



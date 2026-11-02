/* Module: pncrt.dll
   Function: bad_cast
   Address: 78008060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall bad_cast::bad_cast(class bad_cast const &) */

bad_cast * __thiscall bad_cast::bad_cast(bad_cast *this,bad_cast *param_1)

{
                    /* 0x8060  4  ??0bad_cast@@QAE@ABV0@@Z */
  exception::exception((exception *)this,(exception *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



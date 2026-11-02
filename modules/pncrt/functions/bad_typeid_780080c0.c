/* Module: pncrt.dll
   Function: bad_typeid
   Address: 780080c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall bad_typeid::bad_typeid(class bad_typeid const &) */

bad_typeid * __thiscall bad_typeid::bad_typeid(bad_typeid *this,bad_typeid *param_1)

{
                    /* 0x80c0  5  ??0bad_typeid@@QAE@ABV0@@Z */
  exception::exception((exception *)this,(exception *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



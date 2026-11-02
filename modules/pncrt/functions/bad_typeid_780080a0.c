/* Module: pncrt.dll
   Function: bad_typeid
   Address: 780080a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall bad_typeid::bad_typeid(char const *) */

bad_typeid * __thiscall bad_typeid::bad_typeid(bad_typeid *this,char *param_1)

{
                    /* 0x80a0  6  ??0bad_typeid@@QAE@PBD@Z */
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



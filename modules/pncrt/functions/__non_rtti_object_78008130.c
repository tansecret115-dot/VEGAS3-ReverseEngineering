/* Module: pncrt.dll
   Function: __non_rtti_object
   Address: 78008130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall __non_rtti_object::__non_rtti_object(char const *) */

__non_rtti_object * __thiscall
__non_rtti_object::__non_rtti_object(__non_rtti_object *this,char *param_1)

{
                    /* 0x8130  2  ??0__non_rtti_object@@QAE@PBD@Z */
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



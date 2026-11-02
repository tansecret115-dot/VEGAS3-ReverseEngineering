/* Module: pncrt.dll
   Function: __non_rtti_object
   Address: 78008160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall __non_rtti_object::__non_rtti_object(class __non_rtti_object const &) */

__non_rtti_object * __thiscall
__non_rtti_object::__non_rtti_object(__non_rtti_object *this,__non_rtti_object *param_1)

{
                    /* 0x8160  1  ??0__non_rtti_object@@QAE@ABV0@@Z */
  exception::exception((exception *)this,(exception *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}



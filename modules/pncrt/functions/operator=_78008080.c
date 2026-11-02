/* Module: pncrt.dll
   Function: operator=
   Address: 78008080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class __non_rtti_object & __thiscall __non_rtti_object::operator=(class __non_rtti_object
   const &) */

__non_rtti_object * __thiscall
__non_rtti_object::operator=(__non_rtti_object *this,__non_rtti_object *param_1)

{
                    /* 0x8080  17  ??4__non_rtti_object@@QAEAAV0@ABV0@@Z
                       0x8080  18  ??4bad_cast@@QAEAAV0@ABV0@@Z
                       0x8080  19  ??4bad_typeid@@QAEAAV0@ABV0@@Z */
  exception::operator=((exception *)this,(exception *)param_1);
  return this;
}



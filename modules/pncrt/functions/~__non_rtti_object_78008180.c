/* Module: pncrt.dll
   Function: ~__non_rtti_object
   Address: 78008180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall __non_rtti_object::~__non_rtti_object(void) */

void __thiscall __non_rtti_object::~__non_rtti_object(__non_rtti_object *this)

{
                    /* 0x8180  10  ??1__non_rtti_object@@UAE@XZ
                       0x8180  11  ??1bad_cast@@UAE@XZ
                       0x8180  12  ??1bad_typeid@@UAE@XZ */
  *(undefined ***)this = &exception::_vftable_;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 4));
  }
  return;
}



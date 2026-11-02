/* Module: pncrt.dll
   Function: `vector_deleting_destructor'
   Address: 780080e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void * __thiscall __non_rtti_object::`vector deleting destructor'(unsigned int)
    */

void * __thiscall
__non_rtti_object::_vector_deleting_destructor_(__non_rtti_object *this,uint param_1)

{
                    /* 0x80e0  27  ??_E__non_rtti_object@@UAEPAXI@Z
                       0x80e0  28  ??_Ebad_cast@@UAEPAXI@Z
                       0x80e0  29  ??_Ebad_typeid@@UAEPAXI@Z */
  if ((param_1 & 2) != 0) {
    FUN_7800ab10(this,0xc,*(int *)(this + -4),~__non_rtti_object);
    operator_delete(this + -4);
    return this;
  }
  ~__non_rtti_object(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



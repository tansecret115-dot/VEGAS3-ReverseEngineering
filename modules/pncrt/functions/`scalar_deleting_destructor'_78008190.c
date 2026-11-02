/* Module: pncrt.dll
   Function: `scalar_deleting_destructor'
   Address: 78008190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void * __thiscall __non_rtti_object::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
__non_rtti_object::_scalar_deleting_destructor_(__non_rtti_object *this,uint param_1)

{
                    /* 0x8190  31  ??_G__non_rtti_object@@UAEPAXI@Z
                       0x8190  32  ??_Gbad_cast@@UAEPAXI@Z
                       0x8190  33  ??_Gbad_typeid@@UAEPAXI@Z */
  ~__non_rtti_object(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



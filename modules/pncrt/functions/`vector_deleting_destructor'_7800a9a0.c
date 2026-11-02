/* Module: pncrt.dll
   Function: `vector_deleting_destructor'
   Address: 7800a9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void * __thiscall exception::`vector deleting destructor'(unsigned int) */

void * __thiscall exception::_vector_deleting_destructor_(exception *this,uint param_1)

{
                    /* 0xa9a0  30  ??_Eexception@@UAEPAXI@Z */
  if ((param_1 & 2) != 0) {
    FUN_7800ab10(this,0xc,*(int *)(this + -4),~exception);
    operator_delete(this + -4);
    return this;
  }
  ~exception(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: pncrt.dll
   Function: `scalar_deleting_destructor'
   Address: 7800a980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void * __thiscall exception::`scalar deleting destructor'(unsigned int) */

void * __thiscall exception::_scalar_deleting_destructor_(exception *this,uint param_1)

{
                    /* 0xa980  34  ??_Gexception@@UAEPAXI@Z */
  ~exception(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: pncrt.dll
   Function: FUN_780081e0
   Address: 780081e0
   Source: Ghidra pseudocode (Stage 10 batch) */


type_info * __thiscall FUN_780081e0(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



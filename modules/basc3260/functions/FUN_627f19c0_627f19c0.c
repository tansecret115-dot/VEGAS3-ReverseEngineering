/* Module: basc3260.dll
   Function: FUN_627f19c0
   Address: 627f19c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627f19c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_627f5a20;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



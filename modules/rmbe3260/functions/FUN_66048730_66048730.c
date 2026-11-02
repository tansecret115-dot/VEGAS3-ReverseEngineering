/* Module: rmbe3260.dll
   Function: FUN_66048730
   Address: 66048730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66048730(void *this,byte param_1)

{
  FUN_66048760(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



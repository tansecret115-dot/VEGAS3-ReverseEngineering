/* Module: rmto3260.dll
   Function: FUN_662ffe40
   Address: 662ffe40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ffe40(void *this,byte param_1)

{
  FUN_662ffe70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



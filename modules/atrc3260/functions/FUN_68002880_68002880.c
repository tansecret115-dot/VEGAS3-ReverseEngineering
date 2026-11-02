/* Module: atrc3260.dll
   Function: FUN_68002880
   Address: 68002880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_68002880(void *this,byte param_1)

{
  FUN_680028b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



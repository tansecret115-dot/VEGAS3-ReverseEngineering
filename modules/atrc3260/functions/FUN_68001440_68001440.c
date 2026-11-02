/* Module: atrc3260.dll
   Function: FUN_68001440
   Address: 68001440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_68001440(void *this,byte param_1)

{
  FUN_68001470(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: encn3260.dll
   Function: FUN_664c4440
   Address: 664c4440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c4440(void *this,byte param_1)

{
  FUN_664c4470(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



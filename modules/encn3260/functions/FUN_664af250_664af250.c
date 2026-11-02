/* Module: encn3260.dll
   Function: FUN_664af250
   Address: 664af250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664af250(void *this,byte param_1)

{
  FUN_664af2e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



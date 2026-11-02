/* Module: rmbe3260.dll
   Function: FUN_66018ba0
   Address: 66018ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66018ba0(void *this,byte param_1)

{
  FUN_66018bd0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_6605e990
   Address: 6605e990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6605e990(void *this,byte param_1)

{
  FUN_6605e9c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



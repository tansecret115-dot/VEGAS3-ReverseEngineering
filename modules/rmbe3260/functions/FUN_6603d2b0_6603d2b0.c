/* Module: rmbe3260.dll
   Function: FUN_6603d2b0
   Address: 6603d2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603d2b0(void *this,byte param_1)

{
  FUN_6603d2e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



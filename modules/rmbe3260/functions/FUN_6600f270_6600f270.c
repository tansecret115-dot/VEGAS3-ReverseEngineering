/* Module: rmbe3260.dll
   Function: FUN_6600f270
   Address: 6600f270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6600f270(void *this,byte param_1)

{
  FUN_6600f2a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



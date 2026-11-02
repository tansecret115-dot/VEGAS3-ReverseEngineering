/* Module: rmbe3260.dll
   Function: FUN_6602b980
   Address: 6602b980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6602b980(void *this,byte param_1)

{
  FUN_6602b9b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}



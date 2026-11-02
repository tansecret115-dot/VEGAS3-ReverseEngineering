/* Module: encn3260.dll
   Function: FUN_6649d550
   Address: 6649d550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6649d550(void *this,byte param_1)

{
  FUN_6649d580(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



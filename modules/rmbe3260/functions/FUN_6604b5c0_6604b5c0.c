/* Module: rmbe3260.dll
   Function: FUN_6604b5c0
   Address: 6604b5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604b5c0(void *this,byte param_1)

{
  FUN_6604b5f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



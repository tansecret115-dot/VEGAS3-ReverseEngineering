/* Module: rmbe3260.dll
   Function: FUN_6604b560
   Address: 6604b560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604b560(void *this,byte param_1)

{
  FUN_6604b590(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



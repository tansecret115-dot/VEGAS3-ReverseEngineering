/* Module: rmbe3260.dll
   Function: FUN_66037490
   Address: 66037490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66037490(void *this,byte param_1)

{
  FUN_660374c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



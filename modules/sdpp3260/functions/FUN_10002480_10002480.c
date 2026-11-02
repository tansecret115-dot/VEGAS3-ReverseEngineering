/* Module: sdpp3260.dll
   Function: FUN_10002480
   Address: 10002480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10002480(void *this,byte param_1)

{
  FUN_100024b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



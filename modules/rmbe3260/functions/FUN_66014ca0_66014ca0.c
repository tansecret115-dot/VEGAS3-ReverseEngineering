/* Module: rmbe3260.dll
   Function: FUN_66014ca0
   Address: 66014ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66014ca0(void *this,byte param_1)

{
  FUN_66014cd0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



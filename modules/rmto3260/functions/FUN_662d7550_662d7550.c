/* Module: rmto3260.dll
   Function: FUN_662d7550
   Address: 662d7550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662d7550(void *this,byte param_1)

{
  FUN_662d7580(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



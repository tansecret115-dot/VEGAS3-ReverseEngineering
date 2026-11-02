/* Module: rmto3260.dll
   Function: FUN_662d2f50
   Address: 662d2f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662d2f50(void *this,byte param_1)

{
  FUN_662d2f80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



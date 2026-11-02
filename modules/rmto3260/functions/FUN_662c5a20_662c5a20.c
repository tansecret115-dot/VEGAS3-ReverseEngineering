/* Module: rmto3260.dll
   Function: FUN_662c5a20
   Address: 662c5a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662c5a20(void *this,byte param_1)

{
  FUN_662c5a50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



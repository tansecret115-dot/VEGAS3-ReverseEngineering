/* Module: rmto3260.dll
   Function: FUN_662dec50
   Address: 662dec50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662dec50(void *this,byte param_1)

{
  FUN_662dec80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



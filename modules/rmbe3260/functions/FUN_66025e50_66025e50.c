/* Module: rmbe3260.dll
   Function: FUN_66025e50
   Address: 66025e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66025e50(void *this,byte param_1)

{
  FUN_66025e80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



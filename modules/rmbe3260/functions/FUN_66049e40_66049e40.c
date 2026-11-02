/* Module: rmbe3260.dll
   Function: FUN_66049e40
   Address: 66049e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66049e40(void *this,byte param_1)

{
  FUN_66049e70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



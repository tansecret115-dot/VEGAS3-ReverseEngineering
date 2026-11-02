/* Module: rmbe3260.dll
   Function: FUN_66059130
   Address: 66059130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66059130(void *this,byte param_1)

{
  FUN_66059160(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_66010090
   Address: 66010090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66010090(void *this,byte param_1)

{
  FUN_660100c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



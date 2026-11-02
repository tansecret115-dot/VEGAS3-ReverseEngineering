/* Module: rmbe3260.dll
   Function: FUN_6601afd0
   Address: 6601afd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6601afd0(void *this,byte param_1)

{
  FUN_6601b000(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



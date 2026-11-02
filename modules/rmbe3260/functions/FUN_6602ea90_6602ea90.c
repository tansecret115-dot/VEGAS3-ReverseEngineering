/* Module: rmbe3260.dll
   Function: FUN_6602ea90
   Address: 6602ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6602ea90(void *this,byte param_1)

{
  FUN_6602eac0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



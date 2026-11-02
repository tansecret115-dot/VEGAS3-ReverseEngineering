/* Module: rmbe3260.dll
   Function: FUN_6604c590
   Address: 6604c590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604c590(void *this,byte param_1)

{
  FUN_6604c5c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_6604fd40
   Address: 6604fd40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604fd40(void *this,byte param_1)

{
  FUN_66050070(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



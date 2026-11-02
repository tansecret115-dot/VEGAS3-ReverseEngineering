/* Module: rmto3260.dll
   Function: FUN_662ce000
   Address: 662ce000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ce000(void *this,byte param_1)

{
  FUN_662ce030(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



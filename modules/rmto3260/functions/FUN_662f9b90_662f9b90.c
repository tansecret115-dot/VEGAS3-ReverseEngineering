/* Module: rmto3260.dll
   Function: FUN_662f9b90
   Address: 662f9b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662f9b90(void *this,byte param_1)

{
  FUN_662f9bc0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



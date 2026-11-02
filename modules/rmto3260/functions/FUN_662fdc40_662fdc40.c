/* Module: rmto3260.dll
   Function: FUN_662fdc40
   Address: 662fdc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662fdc40(void *this,byte param_1)

{
  FUN_662fdc70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



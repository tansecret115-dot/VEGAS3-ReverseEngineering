/* Module: rmto3260.dll
   Function: FUN_662fae90
   Address: 662fae90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662fae90(void *this,byte param_1)

{
  FUN_662faec0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



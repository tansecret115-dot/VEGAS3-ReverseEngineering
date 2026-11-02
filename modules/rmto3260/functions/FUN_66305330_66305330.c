/* Module: rmto3260.dll
   Function: FUN_66305330
   Address: 66305330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66305330(void *this,byte param_1)

{
  FUN_66305360(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



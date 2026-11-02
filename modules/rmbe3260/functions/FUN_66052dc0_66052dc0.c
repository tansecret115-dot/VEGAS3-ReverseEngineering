/* Module: rmbe3260.dll
   Function: FUN_66052dc0
   Address: 66052dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66052dc0(void *this,byte param_1)

{
  FUN_66052df0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



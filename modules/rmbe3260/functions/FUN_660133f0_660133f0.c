/* Module: rmbe3260.dll
   Function: FUN_660133f0
   Address: 660133f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_660133f0(void *this,byte param_1)

{
  FUN_66013420(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



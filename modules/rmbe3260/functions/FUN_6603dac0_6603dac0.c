/* Module: rmbe3260.dll
   Function: FUN_6603dac0
   Address: 6603dac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603dac0(void *this,byte param_1)

{
  FUN_6603daf0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



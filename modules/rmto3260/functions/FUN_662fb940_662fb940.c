/* Module: rmto3260.dll
   Function: FUN_662fb940
   Address: 662fb940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662fb940(void *this,byte param_1)

{
  FUN_662fb970(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



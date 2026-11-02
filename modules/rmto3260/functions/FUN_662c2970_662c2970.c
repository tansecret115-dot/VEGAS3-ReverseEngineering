/* Module: rmto3260.dll
   Function: FUN_662c2970
   Address: 662c2970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662c2970(void *this,byte param_1)

{
  FUN_662c29a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



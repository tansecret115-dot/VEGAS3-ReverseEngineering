/* Module: rmbe3260.dll
   Function: FUN_6603c160
   Address: 6603c160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603c160(void *this,byte param_1)

{
  FUN_6603c190(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



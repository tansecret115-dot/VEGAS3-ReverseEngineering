/* Module: rmbe3260.dll
   Function: FUN_66025190
   Address: 66025190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66025190(void *this,byte param_1)

{
  FUN_660251c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



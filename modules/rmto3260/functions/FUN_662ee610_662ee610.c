/* Module: rmto3260.dll
   Function: FUN_662ee610
   Address: 662ee610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ee610(void *this,byte param_1)

{
  FUN_662ee640(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



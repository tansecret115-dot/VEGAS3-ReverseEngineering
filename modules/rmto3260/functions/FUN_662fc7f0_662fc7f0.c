/* Module: rmto3260.dll
   Function: FUN_662fc7f0
   Address: 662fc7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662fc7f0(void *this,byte param_1)

{
  FUN_662fc820(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



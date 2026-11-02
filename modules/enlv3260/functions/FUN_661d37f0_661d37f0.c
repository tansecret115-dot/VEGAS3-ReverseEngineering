/* Module: enlv3260.dll
   Function: FUN_661d37f0
   Address: 661d37f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_661d37f0(void *this,byte param_1)

{
  FUN_661d3820(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



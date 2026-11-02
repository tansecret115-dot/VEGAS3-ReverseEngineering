/* Module: rmto3260.dll
   Function: FUN_662c1510
   Address: 662c1510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662c1510(void *this,byte param_1)

{
  FUN_662c1540(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



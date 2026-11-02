/* Module: pngu3266.dll
   Function: FUN_606202b0
   Address: 606202b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_606202b0(void *this,byte param_1)

{
  FUN_606202e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



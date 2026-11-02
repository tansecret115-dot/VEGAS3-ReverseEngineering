/* Module: pngu3266.dll
   Function: FUN_6061a0e0
   Address: 6061a0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6061a0e0(void *this,byte param_1)

{
  FUN_6061a110(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



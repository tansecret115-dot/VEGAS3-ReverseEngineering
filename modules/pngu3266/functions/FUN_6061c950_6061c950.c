/* Module: pngu3266.dll
   Function: FUN_6061c950
   Address: 6061c950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061c950(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_6062d120;
  FUN_6061d040((int)this);
  FUN_6061c9c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



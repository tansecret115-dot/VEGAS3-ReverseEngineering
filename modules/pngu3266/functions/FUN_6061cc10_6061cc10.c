/* Module: pngu3266.dll
   Function: FUN_6061cc10
   Address: 6061cc10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061cc10(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_6062d1f8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



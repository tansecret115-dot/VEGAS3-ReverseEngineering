/* Module: rmme3260.dll
   Function: FUN_6624c2b0
   Address: 6624c2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6624c2b0(void *this,byte param_1)

{
  FUN_6624c2e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



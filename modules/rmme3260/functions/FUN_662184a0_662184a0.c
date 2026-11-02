/* Module: rmme3260.dll
   Function: FUN_662184a0
   Address: 662184a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662184a0(void *this,byte param_1)

{
  FUN_662184d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



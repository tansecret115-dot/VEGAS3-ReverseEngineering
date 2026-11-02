/* Module: rmme3260.dll
   Function: FUN_6621c950
   Address: 6621c950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6621c950(void *this,byte param_1)

{
  FUN_6621c980(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



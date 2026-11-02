/* Module: rmme3260.dll
   Function: FUN_6621c060
   Address: 6621c060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6621c060(void *this,byte param_1)

{
  FUN_6621c090(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



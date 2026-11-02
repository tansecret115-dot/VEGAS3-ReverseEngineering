/* Module: rmme3260.dll
   Function: FUN_66267e40
   Address: 66267e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66267e40(void *this,byte param_1)

{
  FUN_66267e70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



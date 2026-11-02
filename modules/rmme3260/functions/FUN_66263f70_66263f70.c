/* Module: rmme3260.dll
   Function: FUN_66263f70
   Address: 66263f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66263f70(void *this,byte param_1)

{
  FUN_66263fa0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



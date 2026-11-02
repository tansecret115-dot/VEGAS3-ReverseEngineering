/* Module: rmme3260.dll
   Function: FUN_66252110
   Address: 66252110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66252110(void *this,byte param_1)

{
  FUN_66252140(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



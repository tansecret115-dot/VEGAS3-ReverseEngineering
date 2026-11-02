/* Module: rmme3260.dll
   Function: FUN_66257190
   Address: 66257190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66257190(void *this,byte param_1)

{
  FUN_662571c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmme3260.dll
   Function: FUN_66256df0
   Address: 66256df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66256df0(void *this,byte param_1)

{
  FUN_66256e20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



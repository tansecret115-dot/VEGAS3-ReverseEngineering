/* Module: rmme3260.dll
   Function: FUN_662335e0
   Address: 662335e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662335e0(void *this,byte param_1)

{
  FUN_66233610(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



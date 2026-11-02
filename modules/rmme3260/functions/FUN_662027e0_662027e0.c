/* Module: rmme3260.dll
   Function: FUN_662027e0
   Address: 662027e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662027e0(void *this,byte param_1)

{
  FUN_66202810(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



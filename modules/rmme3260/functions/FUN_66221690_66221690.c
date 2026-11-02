/* Module: rmme3260.dll
   Function: FUN_66221690
   Address: 66221690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66221690(void *this,byte param_1)

{
  FUN_662216c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



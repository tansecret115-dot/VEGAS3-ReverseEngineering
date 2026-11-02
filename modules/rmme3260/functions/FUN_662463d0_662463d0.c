/* Module: rmme3260.dll
   Function: FUN_662463d0
   Address: 662463d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662463d0(void *this,byte param_1)

{
  FUN_66246400(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



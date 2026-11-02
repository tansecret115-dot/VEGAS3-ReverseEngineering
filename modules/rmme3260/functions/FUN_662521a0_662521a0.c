/* Module: rmme3260.dll
   Function: FUN_662521a0
   Address: 662521a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662521a0(void *this,byte param_1)

{
  FUN_662521d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



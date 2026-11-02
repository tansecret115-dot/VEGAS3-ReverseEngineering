/* Module: rmto3260.dll
   Function: FUN_662e04d0
   Address: 662e04d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662e04d0(void *this,byte param_1)

{
  FUN_662e0500(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmto3260.dll
   Function: FUN_662e1970
   Address: 662e1970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662e1970(void *this,byte param_1)

{
  FUN_662e19a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



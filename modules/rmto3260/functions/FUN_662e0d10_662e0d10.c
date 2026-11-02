/* Module: rmto3260.dll
   Function: FUN_662e0d10
   Address: 662e0d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662e0d10(void *this,byte param_1)

{
  FUN_662e0d40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



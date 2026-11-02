/* Module: rmme3260.dll
   Function: FUN_66219ce0
   Address: 66219ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66219ce0(void *this,byte param_1)

{
  FUN_66219d10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



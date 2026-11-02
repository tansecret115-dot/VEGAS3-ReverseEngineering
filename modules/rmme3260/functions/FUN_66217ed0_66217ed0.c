/* Module: rmme3260.dll
   Function: FUN_66217ed0
   Address: 66217ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66217ed0(void *this,byte param_1)

{
  FUN_66217f60(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



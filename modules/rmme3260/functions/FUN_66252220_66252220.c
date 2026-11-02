/* Module: rmme3260.dll
   Function: FUN_66252220
   Address: 66252220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66252220(void *this,byte param_1)

{
  FUN_66252250(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



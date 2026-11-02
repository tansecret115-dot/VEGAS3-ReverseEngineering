/* Module: rmto3260.dll
   Function: FUN_662d50e0
   Address: 662d50e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662d50e0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66307298;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



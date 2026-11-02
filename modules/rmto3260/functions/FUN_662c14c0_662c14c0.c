/* Module: rmto3260.dll
   Function: FUN_662c14c0
   Address: 662c14c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662c14c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66306400;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



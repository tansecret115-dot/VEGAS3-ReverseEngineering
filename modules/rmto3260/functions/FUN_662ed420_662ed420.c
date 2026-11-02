/* Module: rmto3260.dll
   Function: FUN_662ed420
   Address: 662ed420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ed420(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66307b18;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



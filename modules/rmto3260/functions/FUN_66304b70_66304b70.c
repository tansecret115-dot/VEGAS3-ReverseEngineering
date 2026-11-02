/* Module: rmto3260.dll
   Function: FUN_66304b70
   Address: 66304b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66304b70(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66308628;
  FUN_66304910(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



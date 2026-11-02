/* Module: rmto3260.dll
   Function: FUN_663048e0
   Address: 663048e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_663048e0(void *this,byte param_1)

{
  FUN_66304910(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_66025480
   Address: 66025480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66025480(void *this,byte param_1)

{
  FUN_660254b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



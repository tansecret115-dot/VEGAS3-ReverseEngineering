/* Module: rmto3260.dll
   Function: FUN_66301860
   Address: 66301860
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66301860(void *this,byte param_1)

{
  FUN_66301890(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



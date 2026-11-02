/* Module: rmbe3260.dll
   Function: FUN_66041540
   Address: 66041540
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66041540(void *this,byte param_1)

{
  FUN_66041570(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



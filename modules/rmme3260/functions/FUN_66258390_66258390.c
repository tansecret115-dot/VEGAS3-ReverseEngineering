/* Module: rmme3260.dll
   Function: FUN_66258390
   Address: 66258390
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66258390(void *this,byte param_1)

{
  FUN_66258310(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



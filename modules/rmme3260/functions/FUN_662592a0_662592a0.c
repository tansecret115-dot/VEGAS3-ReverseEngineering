/* Module: rmme3260.dll
   Function: FUN_662592a0
   Address: 662592a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_662592a0(void *this,byte param_1)

{
  FUN_662590f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmto3260.dll
   Function: FUN_662c8010
   Address: 662c8010
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_662c8010(void *this,byte param_1)

{
  FUN_662c8040(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



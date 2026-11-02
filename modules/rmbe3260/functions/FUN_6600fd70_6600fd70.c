/* Module: rmbe3260.dll
   Function: FUN_6600fd70
   Address: 6600fd70
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_6600fd70(void *this,byte param_1)

{
  FUN_6600fda0(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (CPNTimer *)((int)this + -4);
}



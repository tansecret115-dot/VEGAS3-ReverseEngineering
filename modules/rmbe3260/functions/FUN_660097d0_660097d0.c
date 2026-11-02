/* Module: rmbe3260.dll
   Function: FUN_660097d0
   Address: 660097d0
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNDialog * __thiscall FUN_660097d0(void *this,byte param_1)

{
  FUN_66009800(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



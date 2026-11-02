/* Module: rmto3260.dll
   Function: FUN_662dde50
   Address: 662dde50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662dde50(void *this,byte param_1)

{
  FUN_662dde80(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}



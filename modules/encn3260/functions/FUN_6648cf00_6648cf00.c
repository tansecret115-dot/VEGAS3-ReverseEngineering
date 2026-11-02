/* Module: encn3260.dll
   Function: FUN_6648cf00
   Address: 6648cf00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648cf00(void *this,byte param_1)

{
  FUN_6648cf30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



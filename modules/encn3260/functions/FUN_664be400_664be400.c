/* Module: encn3260.dll
   Function: FUN_664be400
   Address: 664be400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664be400(void *this,byte param_1)

{
  FUN_664be430(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



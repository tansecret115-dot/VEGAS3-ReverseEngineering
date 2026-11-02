/* Module: rmbe3260.dll
   Function: FUN_66027620
   Address: 66027620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66027620(void *this,byte param_1)

{
  FUN_66027650(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



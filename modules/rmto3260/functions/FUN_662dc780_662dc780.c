/* Module: rmto3260.dll
   Function: FUN_662dc780
   Address: 662dc780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662dc780(void *this,byte param_1)

{
  FUN_662dc7b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



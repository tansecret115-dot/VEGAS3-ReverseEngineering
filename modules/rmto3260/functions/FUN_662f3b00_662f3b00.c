/* Module: rmto3260.dll
   Function: FUN_662f3b00
   Address: 662f3b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662f3b00(void *this,byte param_1)

{
  FUN_662f3b30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



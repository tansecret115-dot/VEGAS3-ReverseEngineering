/* Module: rmto3260.dll
   Function: FUN_662f4100
   Address: 662f4100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662f4100(void *this,byte param_1)

{
  FUN_662f4130(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



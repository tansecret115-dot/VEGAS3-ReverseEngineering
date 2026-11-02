/* Module: rmto3260.dll
   Function: FUN_662ff780
   Address: 662ff780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ff780(void *this,byte param_1)

{
  FUN_662ff7b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



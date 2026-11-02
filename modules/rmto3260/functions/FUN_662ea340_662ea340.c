/* Module: rmto3260.dll
   Function: FUN_662ea340
   Address: 662ea340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ea340(void *this,byte param_1)

{
  FUN_662ea370(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



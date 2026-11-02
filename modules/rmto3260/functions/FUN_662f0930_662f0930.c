/* Module: rmto3260.dll
   Function: FUN_662f0930
   Address: 662f0930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662f0930(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66307c58;
  FUN_662f1b20((int)this);
  FUN_662f09a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



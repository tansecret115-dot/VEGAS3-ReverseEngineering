/* Module: rmto3260.dll
   Function: FUN_662d6390
   Address: 662d6390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662d6390(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_663072c8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: erv23260.dll
   Function: FUN_637f6d70
   Address: 637f6d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f6d70(void *this,int param_1,int param_2,int param_3)

{
  if ((((param_1 == *(int *)((int)this + 0x20)) && (param_2 == *(int *)((int)this + 0x24))) &&
      (param_3 == *(int *)((int)this + 0x28))) && (*(int *)((int)this + 0x1aec) != 0)) {
    return 1;
  }
  return 0;
}



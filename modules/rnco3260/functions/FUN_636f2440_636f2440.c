/* Module: rnco3260.dll
   Function: FUN_636f2440
   Address: 636f2440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f2440(void *this,int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)((int)this + 0x34) % param_1 != 0)) {
    return 0;
  }
  if ((param_2 != 0) && (*(int *)((int)this + 0x38) % param_2 != 0)) {
    return 0;
  }
  return 1;
}



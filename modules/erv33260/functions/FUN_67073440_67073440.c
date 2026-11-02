/* Module: erv33260.dll
   Function: FUN_67073440
   Address: 67073440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67073440(void *this,int *param_1)

{
  *param_1 = 0;
  if (*(int *)((int)this + 0x2b8) == 0) {
    return 4;
  }
  if (this != (void *)0x0) {
    *param_1 = (int)this + 100;
    return 0;
  }
  *param_1 = 0;
  return 0;
}



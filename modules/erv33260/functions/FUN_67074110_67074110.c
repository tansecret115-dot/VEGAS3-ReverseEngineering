/* Module: erv33260.dll
   Function: FUN_67074110
   Address: 67074110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67074110(void *this,int *param_1)

{
  if (*(int *)((int)this + 0x28c) == 0) {
    *param_1 = 0;
    return 3;
  }
  if (this != (void *)0x0) {
    *param_1 = (int)this + 0x74;
    return 0;
  }
  *param_1 = 0;
  return 0;
}



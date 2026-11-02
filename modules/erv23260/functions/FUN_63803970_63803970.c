/* Module: erv23260.dll
   Function: FUN_63803970
   Address: 63803970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63803970(void *this,int *param_1)

{
  *param_1 = 0;
  if (*(int *)((int)this + 0x83c) == 0) {
    return 4;
  }
  if (*(int *)((int)this + 8) == 0x11) {
    return 5;
  }
  if (this != (void *)0x0) {
    *param_1 = (int)this + 100;
    return 0;
  }
  *param_1 = 0;
  return 0;
}



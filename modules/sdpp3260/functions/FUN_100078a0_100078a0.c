/* Module: sdpp3260.dll
   Function: FUN_100078a0
   Address: 100078a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_100078a0(void *this,int *param_1)

{
  if (*param_1 < *(int *)this) {
    return 1;
  }
  if (*(int *)this == *param_1) {
    return *(int *)((int)this + 4) - param_1[1];
  }
  return -1;
}



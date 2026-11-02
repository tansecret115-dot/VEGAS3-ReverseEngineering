/* Module: sdpp3260.dll
   Function: FUN_10007ba0
   Address: 10007ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_10007ba0(void *this,int *param_1)

{
  *(int *)this = *(int *)this - *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - param_1[1];
  FUN_10007860(this);
  return this;
}



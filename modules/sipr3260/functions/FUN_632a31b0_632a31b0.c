/* Module: sipr3260.dll
   Function: FUN_632a31b0
   Address: 632a31b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_632a31b0(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_632a2c90(local_10);
  FUN_632a2dc0(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_632a2cb0(param_1,local_10);
  FUN_632a2db0(local_10);
  return param_1;
}



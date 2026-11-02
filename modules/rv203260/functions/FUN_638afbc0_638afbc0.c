/* Module: rv203260.dll
   Function: FUN_638afbc0
   Address: 638afbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_638afbc0(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_638af6a0(local_10);
  FUN_638af7d0(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_638af6c0(param_1,local_10);
  FUN_638af7c0(local_10);
  return param_1;
}



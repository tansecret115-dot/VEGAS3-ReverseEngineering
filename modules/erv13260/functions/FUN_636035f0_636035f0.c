/* Module: erv13260.dll
   Function: FUN_636035f0
   Address: 636035f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_636035f0(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_636030d0(local_10);
  FUN_63603200(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_636030f0(param_1,local_10);
  FUN_636031f0(local_10);
  return param_1;
}



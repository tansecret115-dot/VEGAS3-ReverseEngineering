/* Module: sdpp3260.dll
   Function: FUN_10006da0
   Address: 10006da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_10006da0(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_100065e0(local_10);
  FUN_10006710(this,local_10,param_2,0,0);
  FUN_10006600(param_1,local_10);
  FUN_10006700(local_10);
  return param_1;
}



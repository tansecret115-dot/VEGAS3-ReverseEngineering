/* Module: rmme3260.dll
   Function: FUN_662507e0
   Address: 662507e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662507e0(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_662500f0(local_10);
  FUN_66250220(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_66250110(param_1,local_10);
  FUN_66250210(local_10);
  return param_1;
}



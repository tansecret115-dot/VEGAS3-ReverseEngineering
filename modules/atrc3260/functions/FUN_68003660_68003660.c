/* Module: atrc3260.dll
   Function: FUN_68003660
   Address: 68003660
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_68003660(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_68003140(local_10);
  FUN_68003270(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_68003160(param_1,local_10);
  FUN_68003260(local_10);
  return param_1;
}



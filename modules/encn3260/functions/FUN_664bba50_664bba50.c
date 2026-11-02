/* Module: encn3260.dll
   Function: FUN_664bba50
   Address: 664bba50
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664bba50(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_664bb2c0(local_10);
  FUN_664bb3f0(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_664bb2e0(param_1,local_10);
  FUN_664bb3e0(local_10);
  return param_1;
}



/* Module: pngu3266.dll
   Function: FUN_606193f0
   Address: 606193f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_606193f0(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_60618bb0(local_10);
  FUN_60618ce0(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_60618bd0(param_1,local_10);
  FUN_60618cd0(local_10);
  return param_1;
}



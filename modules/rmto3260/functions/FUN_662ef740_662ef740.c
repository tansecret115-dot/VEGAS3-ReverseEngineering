/* Module: rmto3260.dll
   Function: FUN_662ef740
   Address: 662ef740
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662ef740(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_662eefd0(local_10);
  FUN_662ef100(this,local_10,param_2,*(int *)(*(int *)this + -8) - param_2,0);
  FUN_662eeff0(param_1,local_10);
  FUN_662ef0f0(local_10);
  return param_1;
}



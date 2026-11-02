/* Module: rv103260.dll
   Function: FUN_636a6520
   Address: 636a6520
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_636a6520(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_636a5fa0(local_10);
  FUN_636a60d0(this,local_10,param_2,0,0);
  FUN_636a5fc0(param_1,local_10);
  FUN_636a60c0(local_10);
  return param_1;
}



/* Module: enlv3260.dll
   Function: FUN_661d30e0
   Address: 661d30e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_661d30e0(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_661d2b60(local_10);
  FUN_661d2c90(this,local_10,param_2,0,0);
  FUN_661d2b80(param_1,local_10);
  FUN_661d2c80(local_10);
  return param_1;
}



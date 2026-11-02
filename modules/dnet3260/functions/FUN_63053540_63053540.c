/* Module: dnet3260.dll
   Function: FUN_63053540
   Address: 63053540
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_63053540(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_63052fc0(local_10);
  FUN_630530f0(this,local_10,param_2,0,0);
  FUN_63052fe0(param_1,local_10);
  FUN_630530e0(local_10);
  return param_1;
}



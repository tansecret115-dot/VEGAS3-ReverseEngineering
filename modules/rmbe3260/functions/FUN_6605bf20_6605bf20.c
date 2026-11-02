/* Module: rmbe3260.dll
   Function: FUN_6605bf20
   Address: 6605bf20
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_6605bf20(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_6605b650(local_10);
  FUN_6605b780(this,local_10,param_2,0,0);
  FUN_6605b670(param_1,local_10);
  FUN_6605b770(local_10);
  return param_1;
}



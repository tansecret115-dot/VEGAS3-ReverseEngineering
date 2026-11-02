/* Module: rv303260.dll
   Function: FUN_6720f190
   Address: 6720f190
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_6720f190(void *this,void *param_1,uint param_2)

{
  int local_10 [3];
  
  if ((int)*(uint *)(*(int *)this + -8) < (int)param_2) {
    param_2 = *(uint *)(*(int *)this + -8);
  }
  FUN_6720ec10(local_10);
  FUN_6720ed40(this,local_10,param_2,0,0);
  FUN_6720ec30(param_1,local_10);
  FUN_6720ed30(local_10);
  return param_1;
}



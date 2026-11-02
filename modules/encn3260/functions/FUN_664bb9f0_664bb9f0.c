/* Module: encn3260.dll
   Function: FUN_664bb9f0
   Address: 664bb9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664bb9f0(void *this,void *param_1,int param_2,uint param_3)

{
  int iVar1;
  int local_10 [3];
  
  iVar1 = *(int *)(*(int *)this + -8);
  if (iVar1 < (int)(param_3 + param_2)) {
    param_3 = iVar1 - param_2;
  }
  if (iVar1 < param_2) {
    param_3 = 0;
  }
  FUN_664bb2c0(local_10);
  FUN_664bb3f0(this,local_10,param_3,param_2,0);
  FUN_664bb2e0(param_1,local_10);
  FUN_664bb3e0(local_10);
  return param_1;
}



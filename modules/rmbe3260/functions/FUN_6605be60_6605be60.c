/* Module: rmbe3260.dll
   Function: FUN_6605be60
   Address: 6605be60
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_6605be60(void *this,void *param_1,int param_2,uint param_3)

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
  FUN_6605b650(local_10);
  FUN_6605b780(this,local_10,param_3,param_2,0);
  FUN_6605b670(param_1,local_10);
  FUN_6605b770(local_10);
  return param_1;
}



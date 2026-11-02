/* Module: rmto3260.dll
   Function: FUN_662ef6e0
   Address: 662ef6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662ef6e0(void *this,void *param_1,int param_2,uint param_3)

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
  FUN_662eefd0(local_10);
  FUN_662ef100(this,local_10,param_3,param_2,0);
  FUN_662eeff0(param_1,local_10);
  FUN_662ef0f0(local_10);
  return param_1;
}



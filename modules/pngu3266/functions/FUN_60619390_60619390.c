/* Module: pngu3266.dll
   Function: FUN_60619390
   Address: 60619390
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_60619390(void *this,void *param_1,int param_2,uint param_3)

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
  FUN_60618bb0(local_10);
  FUN_60618ce0(this,local_10,param_3,param_2,0);
  FUN_60618bd0(param_1,local_10);
  FUN_60618cd0(local_10);
  return param_1;
}



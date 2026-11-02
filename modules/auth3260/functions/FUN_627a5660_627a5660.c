/* Module: auth3260.dll
   Function: FUN_627a5660
   Address: 627a5660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627a5660(void *this,int *param_1,void *param_2,undefined4 *param_3)

{
  int *piVar1;
  void *local_8;
  
  piVar1 = param_1;
  param_1 = (int *)*param_1;
  local_8 = this;
  FUN_627a5600(this,(int *)&local_8,(int *)&param_1);
  *piVar1 = (int)local_8;
  FUN_627a5d40(param_2,param_1 + 2);
  *param_3 = param_1[5];
  return;
}



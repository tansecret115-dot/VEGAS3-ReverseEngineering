/* Module: vegas30.exe
   Function: FUN_005ea7e0
   Address: 005ea7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ea7e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int *param_6)

{
  int iVar1;
  int local_568;
  undefined1 local_564 [1328];
  undefined4 local_34;
  undefined4 local_30;
  
  *param_6 = 0;
  iVar1 = FUN_005d26e0(param_2,local_564);
  if (-1 < iVar1) {
    local_34 = param_5;
    if (param_4 == 1) {
      local_30 = 4;
    }
    else if (param_4 == 4) {
      local_30 = 5;
    }
    else {
      local_30 = 0;
    }
    iVar1 = FUN_005badc0(local_564,2,0,param_1,param_3 == 0,&local_568);
    if (-1 < iVar1) {
      *param_6 = *param_6 + local_568;
    }
  }
  return;
}



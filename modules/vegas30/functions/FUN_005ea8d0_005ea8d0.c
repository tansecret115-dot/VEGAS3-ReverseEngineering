/* Module: vegas30.exe
   Function: FUN_005ea8d0
   Address: 005ea8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ea8d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  int *piVar1;
  int iVar2;
  int local_568;
  undefined1 local_564 [1328];
  undefined4 local_34;
  undefined4 local_30;
  
  piVar1 = param_6;
  *param_6 = 0;
  iVar2 = FUN_005d26e0(DAT_0064b138,local_564);
  if (-1 < iVar2) {
    local_34 = param_3;
    if (param_2 == 1) {
      local_30 = 4;
    }
    else if (param_2 == 4) {
      local_30 = 5;
    }
    iVar2 = FUN_005badc0(local_564,5,&param_5,param_1,param_4,&local_568);
    if (-1 < iVar2) {
      *piVar1 = *piVar1 + local_568;
    }
  }
  return;
}



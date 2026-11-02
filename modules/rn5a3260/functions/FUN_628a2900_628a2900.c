/* Module: rn5a3260.dll
   Function: FUN_628a2900
   Address: 628a2900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2900(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,s_UserName_628a7228,&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,s_Realm_628a709c,&local_c);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,s_Password_628a710c,&local_10);
      if (-1 < iVar1) {
        FUN_628a2850(local_8,local_c,local_10,param_2);
        uVar2 = 0;
        goto LAB_628a2975;
      }
    }
  }
  uVar2 = 0x80070057;
LAB_628a2975:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return uVar2;
}



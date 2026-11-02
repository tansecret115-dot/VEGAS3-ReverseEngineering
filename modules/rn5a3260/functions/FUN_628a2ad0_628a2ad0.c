/* Module: rn5a3260.dll
   Function: FUN_628a2ad0
   Address: 628a2ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2ad0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar5 = (int *)0x0;
  *param_3 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  uVar6 = 0x80004005;
  iVar1 = FUN_628a29b0(param_1,param_2,&local_18);
  if (((-1 < iVar1) &&
      (iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&DAT_628a7284,&local_10), -1 < iVar1)) &&
     (iVar1 = (**(code **)(*param_1 + 0x30))(param_1,s_Nonce_628a727c,&local_c), -1 < iVar1)) {
    puVar2 = operator_new(0x28);
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = (int *)FUN_628a3f00(puVar2);
    }
    (**(code **)(*piVar5 + 4))(piVar5);
    (**(code **)(*piVar5 + 0x14))(piVar5,0x400);
    pcVar3 = (char *)(**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar4 = operator_new(0x6c);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = (int)&PTR_LAB_628a6a88;
      piVar4[1] = 0;
      FUN_628a4fa0(piVar4 + 2,10);
      FUN_628a4fa0(piVar4 + 9,10);
      FUN_628a4fa0(piVar4 + 0x10,10);
      *piVar4 = (int)&PTR_FUN_628a6a48;
      piVar4[0x17] = 0;
      piVar4[0x18] = 0;
      piVar4[0x19] = 0;
      piVar4[0x1a] = 0;
    }
    *param_3 = piVar4;
    (**(code **)(*piVar4 + 4))(piVar4);
    iVar1 = sprintf(pcVar3,&DAT_628a72e0);
    pcVar3 = pcVar3 + iVar1;
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,s_UserName_628a7228,&local_8);
    if (-1 < iVar1) {
      uVar6 = (**(code **)(*local_8 + 0x1c))(local_8);
      iVar1 = sprintf(pcVar3,s_username_____200s___628a72cc,uVar6);
      pcVar3 = pcVar3 + iVar1;
    }
    uVar6 = (**(code **)(*local_10 + 0x1c))(local_10);
    iVar1 = sprintf(pcVar3,s_GUID___s___628a72c0,uVar6);
    pcVar3 = pcVar3 + iVar1;
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,s_Realm_628a709c,&local_14);
    if (-1 < iVar1) {
      uVar6 = (**(code **)(*local_14 + 0x1c))(local_14);
      iVar1 = sprintf(pcVar3,s_realm_____200s___628a72ac,uVar6);
      pcVar3 = pcVar3 + iVar1;
    }
    uVar6 = (**(code **)(*local_c + 0x1c))(local_c);
    iVar1 = sprintf(pcVar3,s_nonce___s___628a72a0,uVar6);
    uVar6 = (**(code **)(*local_18 + 0x1c))(local_18);
    sprintf(pcVar3 + iVar1,s_response_____200s__628a728c,uVar6);
    uVar6 = (**(code **)(*(int *)*param_3 + 0x2c))((int *)*param_3,s_Authorization_628a71c8,piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
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
    local_10 = (int *)0x0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  return uVar6;
}



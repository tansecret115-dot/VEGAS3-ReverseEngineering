/* Module: auth3260.dll
   Function: FUN_627a2580
   Address: 627a2580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2580(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_c;
  int *local_8;
  
  piVar2 = param_3;
  if (param_3 == (int *)0x0) {
    piVar2 = operator_new(0x6c);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = (int)&PTR_LAB_627a7ae0;
      piVar2[1] = 0;
      FUN_627a52c0(piVar2 + 2,10);
      FUN_627a52c0(piVar2 + 9,10);
      FUN_627a52c0(piVar2 + 0x10,10);
      piVar2[0x17] = 0;
      piVar2[0x18] = 0;
      piVar2[0x19] = 0;
      piVar2[0x1a] = 0;
      *piVar2 = (int)&PTR_FUN_627a7aa0;
    }
  }
  FUN_627a6050((void *)(param_1 + 0x1c),piVar2);
  piVar2 = *(int **)(param_1 + 0x4c);
  puVar1 = (undefined4 *)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *puVar1 = 0;
  }
  iVar3 = (**(code **)(*param_3 + 0x30))(param_3,s_Realm_627a8094,puVar1);
  if (iVar3 != 0) {
    *puVar1 = 0;
  }
  piVar2 = *(int **)(param_1 + 0x50);
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,*puVar1), iVar3 == 0))
  {
    (**(code **)(**(int **)(param_1 + 0x50) + 0x14))(*(int **)(param_1 + 0x50),&param_3);
    uVar4 = (**(code **)(*param_2 + 0xc))(param_2,0,param_3);
    return uVar4;
  }
  FUN_627a6050((void *)(param_1 + 0x24),param_2);
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  if (((puVar1 == (undefined4 *)0x0) ||
      (iVar3 = (**(code **)*puVar1)(puVar1,&DAT_627a7720,&local_c), iVar3 < 0)) ||
     (local_c == (int *)0x0)) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    if (((puVar1 == (undefined4 *)0x0) ||
        (iVar3 = (**(code **)*puVar1)(puVar1,&DAT_627a7700,&local_8), iVar3 < 0)) ||
       (local_8 == (int *)0x0)) {
      (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1 + 4,0x80004001,0);
    }
    else if (param_1 == 0x1c) {
      (**(code **)(*local_8 + 0xc))(local_8,0);
    }
    else {
      (**(code **)(*local_8 + 0xc))(local_8,param_1 + 8);
    }
  }
  else if (param_1 == 0x1c) {
    (**(code **)(*local_c + 0xc))(local_c,0,param_3);
  }
  else {
    (**(code **)(*local_c + 0xc))(local_c,param_1 + 4,param_3);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 0;
}



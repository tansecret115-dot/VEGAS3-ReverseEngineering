/* Module: auth3260.dll
   Function: FUN_627a42d0
   Address: 627a42d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_627a42d0(void *this,int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  char *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  FUN_627a19b0(&local_14);
  FUN_627a19b0(&local_c);
  FUN_627a6150(&local_c,*(undefined4 **)((int)this + 0x2c));
  piVar1 = operator_new(0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_627a7ae0;
    piVar1[1] = 0;
    FUN_627a52c0(piVar1 + 2,10);
    FUN_627a52c0(piVar1 + 9,10);
    FUN_627a52c0(piVar1 + 0x10,10);
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    *piVar1 = (int)&PTR_FUN_627a7aa0;
  }
  *param_2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1,&local_18,&local_10);
  while (iVar2 == 0) {
    piVar1 = (int *)FUN_627a6140(&local_c);
    iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1,local_10);
    pcVar3 = strrchr(local_18,0x2e);
    pcVar3 = pcVar3 + 1;
    if (iVar2 == 2) {
      piVar1 = (int *)FUN_627a6140(&local_c);
      iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,local_10,&local_1c);
      if (iVar2 == 0) {
        (**(code **)(*(int *)*param_2 + 0xc))((int *)*param_2,pcVar3,local_1c);
      }
    }
    else if (iVar2 == 4) {
      piVar1 = (int *)FUN_627a6140(&local_c);
      iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,local_10,&local_8);
      if ((iVar2 == 0) &&
         ((**(code **)(*(int *)*param_2 + 0x2c))((int *)*param_2,pcVar3,local_8),
         local_8 != (int *)0x0)) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    else if (iVar2 == 5) {
      piVar1 = (int *)FUN_627a6140(&local_c);
      iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,local_10,&local_8);
      if ((iVar2 == 0) &&
         ((**(code **)(*(int *)*param_2 + 0x1c))((int *)*param_2,pcVar3,local_8),
         local_8 != (int *)0x0)) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_18,&local_10);
  }
  piVar1 = (int *)FUN_627a6140((undefined4 *)((int)this + 0x30));
  iVar2 = *piVar1;
  uVar4 = FUN_627a17b0(&local_14);
  iVar2 = (**(code **)(iVar2 + 0x30))(piVar1,s_Realm_627a8094,uVar4);
  if (-1 < iVar2) {
    iVar2 = *(int *)*param_2;
    uVar4 = FUN_627a6140(&local_14);
    (**(code **)(iVar2 + 0x2c))(*param_2,s_Realm_627a8094,uVar4);
  }
  thunk_FUN_627a6080(&local_c);
  thunk_FUN_627a6080(&local_14);
  return 0;
}



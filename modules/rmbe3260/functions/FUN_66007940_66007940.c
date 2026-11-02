/* Module: rmbe3260.dll
   Function: FUN_66007940
   Address: 66007940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_66007940(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int in_stack_ffffff74;
  undefined4 uVar6;
  undefined8 in_stack_ffffff7c;
  undefined4 uVar7;
  int iVar8;
  int local_54 [3];
  int local_48 [3];
  int local_3c [3];
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  (**(code **)(*param_1 + 0x6c))();
  piVar1 = *(int **)(param_1[0x41] + 0x3c);
  local_8 = (int *)0x0;
  FUN_6605b650(local_3c);
  if (param_1[0x66] == 0) goto LAB_66007d89;
  FUN_660077f0((int)param_1);
  iVar8 = ((int *)param_1[0x42])[1];
  param_1[0x44] = iVar8;
  if (iVar8 != 0) {
    param_1[0x46] = *(int *)(*(int *)(*(int *)param_1[0x42] + -4 + iVar8 * 4) + 0xc);
  }
  FUN_66007560(param_1);
  (**(code **)(*(int *)param_1[0x75] + 0x98))();
  local_c = (**(code **)(*piVar1 + 0x2c))();
  if (local_c < 0) {
    (**(code **)(*(int *)param_1[0x67] + 0x11c))();
  }
  else {
    pcVar2 = (char *)(**(code **)(*local_8 + 0x1c))();
    uVar7 = 0x660079df;
    FUN_6605b7e0(local_48,pcVar2);
    iVar8 = 0x37;
    FUN_6605b670(&stack0xffffff7c,local_48);
    in_stack_ffffff74 = 0x660079f8;
    piVar3 = FUN_6604e730(local_54,(int)in_stack_ffffff7c,
                          (int)((ulonglong)in_stack_ffffff7c >> 0x20),uVar7,iVar8);
    FUN_6605b900(local_48,piVar3);
    FUN_6605b770(local_54);
    (**(code **)(*(int *)param_1[0x67] + 0x11c))();
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))();
      local_8 = (int *)0x0;
    }
    FUN_6605b770(local_48);
  }
  if (local_c < 0) {
LAB_66007ad8:
    (**(code **)(*(int *)param_1[0x69] + 0x11c))();
  }
  else {
    uVar7 = 0x66007a63;
    local_c = (**(code **)(*piVar1 + 0x2c))();
    if (-1 < local_c) {
      pcVar2 = (char *)(**(code **)(*local_8 + 0x1c))();
      uVar6 = 0x66007a7c;
      FUN_6605b7e0(local_48,pcVar2);
      iVar8 = 0x37;
      FUN_6605b670(&stack0xffffff74,local_48);
      piVar3 = FUN_6604e730(local_54,in_stack_ffffff74,uVar7,uVar6,iVar8);
      FUN_6605b900(local_48,piVar3);
      FUN_6605b770(local_54);
      (**(code **)(*(int *)param_1[0x69] + 0x11c))();
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
        local_8 = (int *)0x0;
      }
      FUN_6605b770(local_48);
    }
    if (local_c < 0) goto LAB_66007ad8;
  }
  iVar8 = (**(code **)(*piVar1 + 0x18))();
  if ((iVar8 < 0) || (*(int *)(param_1[0x41] + 0x50) == 0)) {
    uVar5 = 0x2c;
  }
  else {
    switch(local_24) {
    default:
      uVar5 = 0x15;
      break;
    case 1:
      uVar5 = 0x16;
      break;
    case 2:
      uVar5 = 0x17;
      break;
    case 3:
      uVar5 = 0x18;
    }
  }
  uVar7 = 0xff;
  iVar8 = FUN_6605bc10(local_3c,0xff);
  FUN_6602e290(uVar5 | 0x5dd0000,iVar8,uVar7);
  FUN_6605bc90(local_3c,-1);
  (**(code **)(*(int *)param_1[0x6a] + 0x11c))();
  iVar8 = (**(code **)(*piVar1 + 0x18))(piVar1,s_videoquality_6606c364);
  if ((iVar8 < 0) || (*(int *)(param_1[0x41] + 0x54) == 0)) {
    uVar5 = 0x2d;
  }
  else {
    switch(local_28) {
    default:
      uVar5 = 0x33;
      break;
    case 1:
      uVar5 = 0x2a;
      break;
    case 2:
      uVar5 = 0x29;
      break;
    case 3:
      uVar5 = 0x2b;
    }
  }
  uVar7 = 0xff;
  iVar8 = FUN_6605bc10(local_3c,0xff);
  FUN_6602e290(uVar5 | 0x5dd0000,iVar8,uVar7);
  FUN_6605bc90(local_3c,-1);
  (**(code **)(*(int *)param_1[0x6b] + 0x11c))(local_3c[0]);
  iVar8 = (**(code **)(*piVar1 + 0x18))(piVar1,s_multirate_6606c358,&iStack_2c);
  if ((iVar8 < 0) || (uVar5 = 0x2e, iStack_2c != 0)) {
    uVar5 = 0x2f;
  }
  uVar7 = 0xff;
  iVar8 = FUN_6605bc10(local_3c,0xff);
  FUN_6602e290(uVar5 | 0x5dd0000,iVar8,uVar7);
  FUN_6605bc90(local_3c,-1);
  (**(code **)(*(int *)param_1[0x6c] + 0x11c))(local_3c[0]);
  uVar7 = 0xff;
  iVar8 = *(int *)(param_1[0x41] + 0x58);
  iVar4 = FUN_6605bc10(local_3c,0xff);
  FUN_6602e290(0x36 - (iVar8 != 0) | 0x5dd0000,iVar4,uVar7);
  FUN_6605bc90(local_3c,-1);
  (**(code **)(*(int *)param_1[0x6d] + 0x11c))(local_3c[0]);
  uVar7 = 0xff;
  iVar8 = *(int *)(param_1[0x41] + 0x5c);
  iVar4 = FUN_6605bc10(local_3c,0xff);
  FUN_6602e290((iVar8 != 0) + 0x65 | 0x5dd0000,iVar4,uVar7);
  FUN_6605bc90(local_3c,-1);
  (**(code **)(*(int *)param_1[0x70] + 0x11c))(local_3c[0]);
  local_10 = 0;
  iVar8 = (**(code **)(*piVar1 + 0x18))(piVar1,s_wallclock_6606c34c,&local_10);
  if ((iVar8 < 0) || (local_10 == 0)) {
    param_1[0x79] = 0;
  }
  else {
    param_1[0x79] = 1;
  }
  if ((param_1[0x79] == 0) || (param_1[0x7a] == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  (**(code **)(*(int *)param_1[0x72] + 0x98))(uVar7);
  if ((param_1[0x79] == 0) || (param_1[0x7a] == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  (**(code **)(*(int *)param_1[0x73] + 0x98))(uVar7);
LAB_66007d89:
  local_14 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = 0;
  (**(code **)(*(int *)param_1[0x41] + 0x20))();
  FUN_6605bfd0(local_3c,s___2d___2d___2d_6606c33c);
  (**(code **)(*(int *)param_1[0x6e] + 0x11c))();
  if (-1 < *(int *)(param_1[0x41] + 0xe0) + *(int *)(param_1[0x41] + 0xdc)) {
    FUN_6605bfd0(local_3c,&DAT_6606c334);
    (**(code **)(*(int *)param_1[0x6f] + 0x11c))();
  }
  if (*(int *)(param_1[0x41] + 0x5c) == 0) {
    if (local_18 == 0) {
      (**(code **)(*(int *)param_1[0x71] + 0x11c))();
      (**(code **)(*(int *)param_1[0x71] + 0xac))();
    }
    else {
      (**(code **)(*(int *)param_1[0x71] + 0xac))();
      FUN_6605bfd0(local_3c,s___2d___2d___2d_6606c33c);
      (**(code **)(*(int *)param_1[0x71] + 0x11c))();
    }
  }
  else {
    (**(code **)(*(int *)param_1[0x71] + 0xac))();
    FUN_6605b650(local_48);
    iStack_2c = 0;
    local_30 = *(int *)(param_1[0x41] + 0xd4) + *(int *)(param_1[0x41] + 0xd8);
    FUN_6605bfd0(local_48,s___1f_Kbps_6606c31c);
    (**(code **)(*(int *)param_1[0x71] + 0x11c))();
    FUN_6605b770(local_48);
  }
  if ((param_1[0x79] != 0) && (param_1[0x7a] != 0)) {
    FUN_6605bfd0(local_3c,s___2d___2d___2d_6606c33c);
    (**(code **)(*(int *)param_1[0x73] + 0x11c))();
  }
  (**(code **)(*param_1 + 0x188))();
  (**(code **)(*param_1 + 0x74))();
  param_1[0x66] = 0;
  FUN_6605b770(local_3c);
  return;
}



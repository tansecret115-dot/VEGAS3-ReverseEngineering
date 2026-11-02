/* Module: encn3260.dll
   Function: FUN_664859d0
   Address: 664859d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664859d0(int param_1)

{
  char cVar1;
  void *this;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int local_6c [2];
  void *local_64;
  void *local_60;
  uint local_5c;
  int local_58 [2];
  void *local_50;
  int local_4c [5];
  int local_38 [3];
  int local_2c [3];
  char *local_20 [3];
  char *local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  local_8 = operator_new(0x40);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    FUN_66485c20(local_8);
    *local_8 = (int)&PTR_FUN_664de070;
  }
  piVar7 = local_8;
  local_c = (undefined4 *)(param_1 + 0x6c);
  FUN_664bb5e0(local_8 + 0xd,*(char **)(param_1 + 0x6c));
  FUN_664bd620(piVar7,s_Session_664e23cc,*(char **)(param_1 + 0xb6),0);
  FUN_664bb2c0(local_20);
  local_50 = *(void **)(param_1 + 0x102);
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_64 = (void *)0x0;
  local_60 = (void *)0x0;
  local_5c = 0;
  local_10 = 1;
  local_58[0] = -(uint)(*(int *)((int)local_50 + 8) != 0);
  local_58[1] = local_58[0];
  local_4c[0] = 0;
  local_4c[1] = 0;
  if (local_58[0] != 0) {
    FUN_664bbeb0(local_50,local_58 + 1,local_4c + 1,local_4c);
  }
  piVar7 = local_58;
  piVar8 = local_6c;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  do {
    piVar7 = local_8;
    if (local_6c[0] == 0) {
      FUN_664bd620(local_8,s_RTP_Info_664e2480,local_20[0],0);
      iVar5 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
      uVar3 = FUN_6648c6d0((void *)(param_1 + -0x30),piVar7,iVar5);
      (**(code **)(**(int **)(param_1 + 0x170) + 8))();
      FUN_664bb3e0((int *)local_20);
      return uVar3;
    }
    uVar6 = 0xffffffff;
    pcVar9 = (char *)*local_c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_14 = operator_new(~uVar6 + 99);
    uVar6 = local_5c;
    this = local_60;
    *(undefined4 *)((int)local_60 + 4) = 1;
    uVar2 = FUN_6648d540(local_60,local_5c);
    uVar3 = FUN_6648d570(this,uVar6);
    pcVar9 = s__streamid__d_seq__d_rtptime__ld_664e2494;
    puVar4 = FUN_664bb720(local_38,&DAT_664e248c,local_c);
    puVar4 = FUN_664bb6c0(local_2c,puVar4,pcVar9);
    pcVar9 = local_14;
    sprintf(local_14,(char *)*puVar4,uVar6 & 0xffff,(uint)uVar2,uVar3);
    FUN_664bb3e0(local_2c);
    FUN_664bb3e0(local_38);
    if (local_10 == 0) {
      puVar4 = FUN_664bb450(&local_50,pcVar9);
      puVar4 = FUN_664bb720(local_4c + 2,&DAT_664e2358,puVar4);
      FUN_664bb870(local_20,puVar4);
      FUN_664bb3e0(local_4c + 2);
      FUN_664bb3e0((int *)&local_50);
    }
    else {
      local_10 = 0;
      FUN_664bb5e0(local_20,pcVar9);
    }
    operator_delete(pcVar9);
    local_6c[0] = local_6c[1];
    if (local_6c[1] != 0) {
      FUN_664bbeb0(local_64,local_6c + 1,(int *)&local_5c,(int *)&local_60);
    }
  } while( true );
}



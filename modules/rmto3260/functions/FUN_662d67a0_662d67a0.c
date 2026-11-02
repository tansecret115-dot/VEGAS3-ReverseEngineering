/* Module: rmto3260.dll
   Function: FUN_662d67a0
   Address: 662d67a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d67a0(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *pvVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  char local_4c [64];
  int local_c;
  int local_8;
  
  iVar8 = param_1;
  puVar7 = (ushort *)*param_2;
  uVar5 = 0;
  local_8 = 0;
  FUN_662f0810(*(int **)(param_1 + 4),s_COORDS__6630ad80);
  puVar6 = puVar7 + 1;
  local_c = FUN_662f2bd0(this,*puVar7);
  pvVar4 = extraout_ECX;
  if ((short)local_c != 0) {
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      FUN_662f2bd0(pvVar4,uVar1);
      if (uVar5 != 0) {
        FUN_662f0810(*(int **)(param_1 + 4),&DAT_6630ac1c);
      }
      FUN_662f0810(*(int **)(param_1 + 4),&DAT_6630ad7c);
      uVar5 = uVar5 + 1;
      pvVar4 = extraout_ECX_00;
      iVar8 = param_1;
    } while (uVar5 < (ushort)local_c);
  }
  FUN_662f0810(*(int **)(iVar8 + 4),&DAT_6630ad78);
  uVar2 = FUN_662f2bd0(this_00,*puVar6);
  uVar3 = uVar2 & 0xffff;
  if (uVar3 == 1) {
    piVar9 = *(int **)(iVar8 + 4);
    pcVar10 = &DAT_6630ad54;
  }
  else {
    if (uVar3 != 2) {
      if (uVar3 != 3) {
        FUN_662f0810(*(int **)(iVar8 + 4),s____UNKNOWN_SHAPE____6630ad64);
        return 0;
      }
      goto LAB_662d6895;
    }
    piVar9 = *(int **)(iVar8 + 4);
    pcVar10 = s_PLAYER__6630ad5c;
  }
  FUN_662f0810(piVar9,pcVar10);
LAB_662d6895:
  uVar3 = FUN_662f2c20(*(uint *)(puVar6 + 1));
  if ((uVar3 != 0) || (pvVar4 = extraout_ECX_01, (short)uVar2 == 3)) {
    FUN_662d6460(uVar3,local_4c);
    local_8 = FUN_662f0810(*(int **)(iVar8 + 4),s_SEEK__s_6630ad48);
    pvVar4 = extraout_ECX_02;
  }
  puVar7 = puVar6 + 4;
  uVar2 = FUN_662f2bd0(pvVar4,puVar6[3]);
  pvVar4 = extraout_ECX_03;
  if ((short)uVar2 != 0) {
    local_8 = FUN_662d0970(&param_1,(undefined4 *)puVar7,uVar2);
    puVar7 = (ushort *)((int)puVar7 + (uVar2 & 0xffff));
    pvVar4 = extraout_ECX_04;
    if (-1 < local_8) {
      local_8 = FUN_662f0810(*(int **)(iVar8 + 4),s___s__6630ad40);
      pvVar4 = extraout_ECX_05;
    }
    if (param_1 != 0) {
      FUN_662d08d0(&param_1);
      pvVar4 = extraout_ECX_06;
    }
  }
  if (-1 < local_8) {
    uVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar2 = FUN_662f2bd0(pvVar4,uVar5);
    if ((short)uVar2 != 0) {
      local_8 = FUN_662d0970(&param_1,(undefined4 *)puVar7,uVar2);
      puVar7 = (ushort *)((int)puVar7 + (uVar2 & 0xffff));
      if (-1 < local_8) {
        local_8 = FUN_662f0810(*(int **)(iVar8 + 4),s_ALT___s_>_6630ad34);
      }
      if (param_1 != 0) {
        FUN_662d08d0(&param_1);
      }
    }
  }
  *param_2 = puVar7;
  return local_8;
}



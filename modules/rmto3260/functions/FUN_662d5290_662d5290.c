/* Module: rmto3260.dll
   Function: FUN_662d5290
   Address: 662d5290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d5290(void *param_1,int *param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  undefined2 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  short sVar7;
  undefined4 *puVar9;
  int local_c;
  char *local_8;
  short sVar8;
  
  sVar8 = 0;
  sVar7 = 0;
  local_c = 0;
  local_8 = (char *)0x0;
  if (param_4 < *(uint *)((int)param_1 + 0x10)) {
    *param_5 = 0;
    return -0x7ffbfff3;
  }
  if (*(int *)((int)param_1 + 0x18) == 0) {
    pvVar2 = operator_new(0x7990);
    *(void **)((int)param_1 + 0x18) = pvVar2;
  }
  if (*(int *)((int)param_1 + 0x18) == 0) {
    local_c = -0x7ff8fff2;
  }
  if (local_c < 0) {
    if (local_8 == (char *)0x0) goto LAB_662d53cb;
  }
  else {
    *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x18);
    uVar1 = FUN_662f2bb0(*(undefined2 *)((int)param_1 + 0x24));
    **(undefined2 **)((int)param_1 + 0x1c) = uVar1;
    local_8 = *(char **)((int)param_1 + 0x20);
    *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x1c) + 4;
    if (local_8 == (char *)0x0) {
      return -0x7ffbfc36;
    }
  }
  if (-1 < local_c) {
    iVar3 = FUN_662d5a90(local_8,&DAT_6630abe4);
    sVar7 = sVar8;
    if (iVar3 != 0) {
      local_8 = FUN_662d57f0((int)param_1);
      iVar3 = FUN_662d5a90(local_8,&DAT_6630abe0);
      if (iVar3 != 0) {
        local_8 = FUN_662d57f0((int)param_1);
        iVar3 = FUN_662d5cf0(param_1,&local_8);
        if (iVar3 != 0) {
          local_8 = FUN_662d57f0((int)param_1);
          iVar3 = FUN_662d5ee0(param_1,&local_8);
          while (iVar3 != 0) {
            local_8 = FUN_662d57f0((int)param_1);
            sVar7 = sVar7 + 1;
            iVar3 = FUN_662d5ee0(param_1,&local_8);
          }
          iVar3 = FUN_662d62d0(param_1,&local_8);
          if (iVar3 != 0) goto LAB_662d53cb;
        }
      }
    }
    local_c = -0x7ffbfc34;
  }
LAB_662d53cb:
  if (local_c < 0) {
    return -0x7ffbfc35;
  }
  uVar4 = *(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18);
  *param_5 = uVar4;
  if (*(uint *)((int)param_1 + 0x10) < uVar4) {
    *(uint *)((int)param_1 + 0x10) = uVar4;
  }
  *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x18) + 2;
  uVar1 = FUN_662f2bb0(sVar7);
  **(undefined2 **)((int)param_1 + 0x1c) = uVar1;
  iVar3 = FUN_662f2c20(*(uint *)(*(int *)((int)param_1 + 0x18) + 4));
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  *param_2 = iVar3;
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)((int)param_1 + 0x24);
  *(short *)((int)param_1 + 0x24) = *(short *)((int)param_1 + 0x24) + 1;
  *(undefined2 *)(param_2 + 2) = 2;
  pcVar5 = FUN_662d57f0((int)param_1);
  *(char **)((int)param_1 + 0x20) = pcVar5;
  uVar4 = *param_5;
  puVar9 = *(undefined4 **)((int)param_1 + 0x18);
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *param_3 = *puVar9;
    puVar9 = puVar9 + 1;
    param_3 = param_3 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return local_c;
}



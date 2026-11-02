/* Module: vegas30.exe
   Function: FUN_005f7450
   Address: 005f7450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_005f7450(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  short sVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piStack_540;
  int *piStack_53c;
  int *piStack_538;
  undefined4 *puStack_534;
  int *piStack_530;
  undefined4 uStack_52c;
  int *piStack_528;
  undefined4 uStack_524;
  undefined4 *puStack_520;
  undefined4 local_50c;
  undefined4 local_508;
  int local_504;
  int local_500;
  undefined4 local_4fc;
  undefined2 local_4f8;
  undefined1 auStack_4e8 [36];
  undefined4 local_4c4 [33];
  undefined1 auStack_440 [20];
  undefined4 local_42c [264];
  undefined4 *puStack_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  uVar4 = *(uint *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 8) = param_2;
  puVar6 = local_42c;
  for (iVar5 = 0x10b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(uint *)(param_1 + 0x8c) = uVar4 | 1;
  local_42c[0] = 0x42c;
  local_50c = 0;
  if (*(int *)(param_1 + 4) == 2) {
    puVar6 = &local_508;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar5 = *(int *)(param_4 + 4);
    *(undefined2 *)puVar6 = 0;
    local_8 = &local_508;
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(iVar5 + 0xe);
    puVar3 = *(ushort **)(param_4 + 4);
    uVar1 = *puVar3;
    if (uVar1 < 4) {
      if ((uVar1 == 3) || (uVar1 == 1)) {
LAB_005f75c5:
        uVar4 = (uint)((uint)puVar3[6] != (uint)(puVar3[7] >> 3) * (uint)puVar3[1]);
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      if ((0xfdff < uVar1) && (uVar1 < 0xfe03)) goto LAB_005f75c5;
      uVar4 = 1;
    }
    *(uint *)(param_1 + 100) = uVar4;
    if (uVar4 == 0) {
      puVar6 = *(undefined4 **)(param_4 + 4);
      local_508 = *puVar6;
      local_504 = puVar6[1];
      local_500 = puVar6[2];
      local_4fc = puVar6[3];
      local_4f8 = *(undefined2 *)(puVar6 + 4);
    }
    else {
      sVar2 = *(short *)(*(int *)(param_4 + 4) + 2);
      local_504 = *(int *)(*(int *)(param_4 + 4) + 4);
      uVar1 = sVar2 * 2;
      local_508 = CONCAT22(sVar2,1);
      local_4fc = CONCAT22(0x10,uVar1);
      local_500 = (uint)uVar1 * local_504;
      local_4f8 = 0;
    }
    uStack_52c = *(undefined4 *)(param_1 + 0x10);
    puStack_520 = local_42c;
    uStack_524 = 0;
    piStack_528 = (int *)0x0;
    piStack_530 = param_3;
    puStack_534 = (undefined4 *)0x5f766f;
    iVar5 = (**(code **)(*param_3 + 0x54))();
    if (iVar5 < 0) {
      if (iVar5 == -0x7ffb1fef) {
        *local_4 = 0x6d86;
        goto LAB_005f76f4;
      }
      *local_4 = 0x6d87;
    }
    else {
      piStack_540 = *(int **)(param_1 + 0x10);
      puStack_534 = (undefined4 *)auStack_440;
      piStack_538 = (int *)0x0;
      piStack_53c = (int *)0x0;
      piVar7 = (int *)0xffffffff;
      iVar5 = (**(code **)(*param_3 + 0x50))(param_3,&puStack_520);
      if (iVar5 < 0) goto LAB_005f76f4;
      iVar5 = (**(code **)(*piStack_53c + 0x20))(piStack_53c,param_1 + 0x18);
      if (-1 < iVar5) {
        iVar5 = FUN_005f7050(piVar7,param_4,&piStack_540);
      }
      (**(code **)(*piVar7 + 8))(piVar7);
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 3) {
      iVar5 = -0x7ffb1fcb;
      *param_5 = 0x6d89;
      goto LAB_005f76f4;
    }
    puVar6 = local_4c4;
    for (iVar5 = 0x26; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puStack_520 = local_42c;
    local_4c4[0] = *(undefined4 *)(param_4 + 4);
    uStack_52c = *(undefined4 *)(param_1 + 0x10);
    uStack_524 = 0;
    piStack_528 = (int *)0x0;
    puStack_534 = &local_50c;
    piStack_530 = (int *)0xffffffff;
    piStack_538 = param_3;
    piStack_53c = (int *)0x5f7508;
    local_4 = local_4c4;
    iVar5 = (**(code **)(*param_3 + 0x50))();
    if (iVar5 < 0) {
      if (iVar5 == -0x7ffb1fef) {
        *puStack_c = 0x6d7a;
        goto LAB_005f76f4;
      }
      *puStack_c = 0x6d87;
    }
    else {
      piStack_53c = (int *)(param_1 + 0x18);
      piStack_540 = piStack_528;
      iVar5 = (**(code **)(*piStack_528 + 0x20))();
      if (-1 < iVar5) {
        iVar5 = FUN_005f71b0(piStack_530,param_4,auStack_4e8);
      }
      (**(code **)(*piStack_530 + 8))(piStack_530);
    }
  }
  if (-1 < iVar5) {
    return iVar5;
  }
LAB_005f76f4:
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 2;
  return iVar5;
}



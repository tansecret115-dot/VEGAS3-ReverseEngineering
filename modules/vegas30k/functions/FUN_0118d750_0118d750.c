/* Module: vegas30k.dll
   Function: FUN_0118d750
   Address: 0118d750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0118d750(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  int aiStack_1c [3];
  undefined4 local_8 [2];
  
  local_8[0] = *(undefined4 *)(param_1 + 0x168);
  if (((*(uint *)(param_1 + 0x50) & 0x22) == 0) && ((*(byte *)(param_1 + 0x5c) & 4) == 0)) {
    return 0x4e001;
  }
  aiStack_1c[0] = *(int *)(param_1 + 0x15c);
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0;
  puStack_20 = local_8;
  uStack_24 = 0x4006;
  piStack_2c = (int *)0x118d796;
  iStack_28 = param_1;
  iVar2 = (**(code **)(param_1 + 0x158))();
  if (iVar2 < 0) {
    return iVar2;
  }
  *(uint *)(param_1 + 0x164) = (uint)puStack_20 & 0xffff0000;
  *(uint *)(param_1 + 0x160) = (uint)puStack_20 & 0xffff;
  if ((*(uint *)(param_1 + 0x54) & 0x200000) != 0) {
    piStack_2c = (int *)0x118d7d2;
    FUN_0118f2c0();
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffdfffff;
  }
  if ((*(uint *)(param_1 + 0x54) & 0x800000) != 0) {
    piStack_2c = (int *)0x118d7f5;
    FUN_0118e250();
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff7fffff;
  }
  aiStack_1c[0] = 0;
  uVar3 = (uint)puStack_20 & 0x30000000;
  if (uVar3 == 0x10000000) {
    piStack_2c = *(int **)(param_1 + 0x1f0);
    iVar2 = *piStack_2c;
    if (((uint)puStack_20 & 0x800000) == 0) {
      (**(code **)(iVar2 + 0x158))();
    }
    else {
      piVar1 = piStack_2c;
      piStack_2c = aiStack_1c;
      (**(code **)(iVar2 + 0x164))(piVar1);
    }
  }
  else if (uVar3 == 0x20000000) {
    piStack_2c = *(int **)(param_1 + 0x1f0);
    (**(code **)(*piStack_2c + 0x130))();
  }
  else if (uVar3 == 0x30000000) {
    piStack_2c = *(int **)(param_1 + 0x1f0);
    iVar2 = *piStack_2c;
    if (((uint)puStack_20 & 0x800000) == 0) {
      (**(code **)(iVar2 + 0x170))();
    }
    else {
      piVar1 = piStack_2c;
      piStack_2c = aiStack_1c;
      (**(code **)(iVar2 + 0x17c))(piVar1);
    }
  }
  piStack_2c = (int *)0x0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0xdc))(*(int **)(param_1 + 0x1f0),0);
  if (iVar2 < 0) {
    return iVar2;
  }
  uVar3 = (uint)piStack_2c & 0xc0000000;
  if (uVar3 == 0x40000000) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x2c))(*(int **)(param_1 + 0x1fc));
  }
  else if (uVar3 == 0x80000000) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x1c))(*(int **)(param_1 + 0x1fc));
  }
  else {
    if (uVar3 != 0xc0000000) {
      iVar2 = 0;
      goto LAB_0118d8fa;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x1c))(*(int **)(param_1 + 0x1fc));
  }
  if (iVar2 < 0) {
    return iVar2;
  }
LAB_0118d8fa:
  iVar4 = *(int *)(param_1 + 0x204) - iStack_28;
  *(int *)(param_1 + 0x204) = iVar4;
  if (((uint)piStack_2c & 0x10000000) != 0) {
    if (((uint)piStack_2c & 0x800000) == 0) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffffffdf;
    }
    else if ((iVar4 == 0) && (iStack_28 != 0)) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffffffef;
      (**(code **)(param_1 + 0x158))(param_1,0xd,&piStack_2c,*(undefined4 *)(param_1 + 0x15c),0,0);
    }
  }
  uVar5 = FUN_01177970(0);
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffff9;
  *(undefined4 *)(param_1 + 0x1a0) = uVar5;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffff7ffd;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  ResetEvent(*(HANDLE *)(param_1 + 0x40));
  (**(code **)(param_1 + 0x158))(param_1,0x4007,&piStack_2c,*(undefined4 *)(param_1 + 0x15c),0,0);
  return iVar2;
}



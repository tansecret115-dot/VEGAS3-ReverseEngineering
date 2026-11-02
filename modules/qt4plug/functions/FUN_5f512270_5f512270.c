/* Module: qt4plug.dll
   Function: FUN_5f512270
   Address: 5f512270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f512270(int param_1,int *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  undefined4 *puVar7;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x424) == 0)) {
    return 0x80004005;
  }
  puVar2 = FUN_5f518510(param_1);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = FUN_5f5782f0();
  if (iVar3 != 0) {
    FUN_5f578170();
  }
  if ((*(int *)(param_1 + 0x428) != 0) && (iVar3 = FUN_5f5782f0(), iVar3 != 0)) {
    iVar3 = FUN_5f5782f0();
    if ((iVar3 != 0) && (sVar1 = FUN_5f5781b0(), sVar1 == 0)) {
      FUN_5f52e6d0(*(int *)(*(int *)(param_1 + 0x428) + 0x48));
      FUN_5f578170();
    }
    iVar3 = FUN_5f5782f0();
    iVar4 = FUN_5f5782f0();
    if ((iVar3 != 0) && (iVar4 != 0)) {
      FUN_5f57a8f0(iVar3);
      FUN_5f57a8f0(*(undefined4 *)(param_1 + 0x428));
      FUN_5f57a8f0(*(undefined4 *)(*(int *)(param_1 + 0x428) + 0x48));
      FUN_5f57a8f0(extraout_ECX);
      FUN_5f578170();
      FUN_5f57a8f0(*(undefined4 *)(param_1 + 0x428));
      FUN_5f57a8f0(*(undefined4 *)(*(int *)(param_1 + 0x428) + 0x48));
      FUN_5f57a8f0(extraout_ECX_00);
      FUN_5f57a8f0(*(undefined4 *)(param_1 + 0x428));
      FUN_5f578170();
    }
    iVar3 = FUN_5f5782f0();
    if ((iVar3 != 0) && (sVar1 = FUN_5f5781b0(), sVar1 == 0)) {
      FUN_5f57a8f0(*(undefined4 *)(*(int *)(param_1 + 0x428) + 100));
      FUN_5f578170();
    }
  }
  iVar3 = FUN_5f5782f0();
  if (iVar3 != 0) {
    FUN_5f578170();
  }
  iVar3 = FUN_5f5782f0();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_5f5782f0();
  if (iVar3 != 0) {
    FUN_5f578170();
  }
  iVar3 = FUN_5f5782f0();
  if (iVar3 != 0) {
    FUN_5f578170();
  }
  iVar3 = FUN_5f5782f0();
  if (iVar3 != 0) {
    FUN_5f578170();
  }
  FUN_5f5782f0();
  if (iVar3 != 0) {
    FUN_5f578170();
  }
  uVar5 = FUN_5f57b3d0();
  if ((int)uVar5 < 1) {
    return 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x424) + 0x3e);
  if (iVar3 != 0) {
    if (uVar5 <= *(uint *)(iVar3 + 0x10)) goto LAB_5f51272f;
    (**(code **)(*param_2 + 0x24))(param_2,iVar3);
  }
  iVar3 = (**(code **)(*param_2 + 0x20))(param_2,0x42,uVar5 + 0x14);
  if (iVar3 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x424) + 0x3e) = 0;
    return 0x8007000e;
  }
LAB_5f51272f:
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xc) = 1;
    *(uint *)(iVar3 + 0x10) = uVar5;
    FUN_5f5781f0();
    puVar2 = (undefined4 *)*puVar2;
    puVar7 = (undefined4 *)(iVar3 + 0x14);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_5f578230();
    *(int *)(*(int *)(param_1 + 0x424) + 0x3e) = iVar3;
    *(uint *)(*(int *)(param_1 + 0x424) + 0x3a) = uVar5 + 0x14;
  }
  return 0;
}



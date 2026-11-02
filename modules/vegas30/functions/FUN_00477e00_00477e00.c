/* Module: vegas30.exe
   Function: FUN_00477e00
   Address: 00477e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00477e00(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 0x40);
  iVar3 = **(int **)(param_1 + 0x50);
  bVar5 = iVar3 != 0x20;
  if ((iVar3 == 0x24) || (iVar3 == 0x25)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (param_3 == 0) {
    if (bVar5) {
      FUN_004ea040(iVar1,0);
      iVar3 = *(int *)(param_1 + 0x1c) + -1;
      if (iVar3 < 0) {
        iVar3 = 0x7fffffff;
      }
      *(int *)(param_1 + 0x1c) = iVar3;
      FUN_005410b0(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x50) + 8),0);
      return;
    }
    FUN_004ea040(iVar1,0);
    iVar3 = *(int *)(param_1 + 0x1c) + -1;
    if (iVar3 < 0) {
      iVar3 = 0x7fffffff;
    }
    *(int *)(param_1 + 0x1c) = iVar3;
    FUN_005410b0(iVar1,*(undefined4 *)(param_1 + 0x50),0);
  }
  else if (param_3 == 2) {
    if (iVar1 != 0) {
      FUN_004eb2b0(iVar1);
      if (bVar5) {
        FUN_004ea040(iVar1,0);
        return;
      }
      FUN_004ea040(iVar1,0);
    }
  }
  else if ((param_3 == 3) && (iVar1 != 0)) {
    if (!bVar5) {
      FUN_0052c1c0(DAT_00647630,*(int **)(param_1 + 0x50));
    }
    if (bVar2) {
      FUN_0052c2d0(DAT_00647630,*(undefined4 *)(param_1 + 0x50));
    }
  }
  if (!bVar5) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (*(int *)(iVar1 + 4) == 3) {
      DAT_0064767c = DAT_0064767c | 0x800;
      return;
    }
    if (iVar1 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + 0x44);
    }
    (**(code **)(*DAT_0064b144 + 0xd4))(DAT_0064b144,1,uVar4,0,0,0xffffffff,0xffffffff);
  }
  return;
}



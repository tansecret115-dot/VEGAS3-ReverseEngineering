/* Module: vidcap30.exe
   Function: FUN_0042cfe0
   Address: 0042cfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042cfe0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 local_48;
  undefined4 local_44 [14];
  int iStack_c;
  undefined4 uStack_4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x3f0) == 0)) {
    return -0x7fffbffd;
  }
  FUN_004260d0(iVar2,param_1 + 0x58);
  FUN_00428b80(*(undefined4 *)(param_1 + 0x10),param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0x10);
  local_48 = 0;
  puVar5 = local_44;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  piVar1 = *(int **)(iVar2 + 0x3f0);
  iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_48);
  if (-1 < iVar2) {
    puVar5 = (undefined4 *)(param_1 + 0x28);
    puVar4 = (undefined4 *)(iStack_c + 0x30);
    puVar6 = puVar5;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_004207c0(&stack0xffffffb0);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x30);
    uStack_4 = 0;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x2c);
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x84c);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&uStack_4);
    }
    if (-1 < iVar2) {
      fVar7 = (float10)FUN_004219c0((undefined4 *)(param_1 + 0x5c),uStack_4);
      *(double *)(param_1 + 0x68) = (double)fVar7;
      if ((DAT_005bb4b8 != 0) &&
         ((*(int *)(param_1 + 0x58) == 0 || (*(int *)(*(int *)(param_1 + 0x10) + 0x3a8) == 0)))) {
        iVar2 = _SfDibCopyInterlace_40
                          (puVar5,*(undefined4 *)(param_1 + 0x24),0,0,puVar5,
                           *(undefined4 *)(param_1 + 0x24),0,0,1,3);
        return iVar2;
      }
    }
  }
  return iVar2;
}



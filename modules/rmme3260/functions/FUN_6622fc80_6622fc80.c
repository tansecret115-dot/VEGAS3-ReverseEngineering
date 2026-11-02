/* Module: rmme3260.dll
   Function: FUN_6622fc80
   Address: 6622fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6622fc80(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  if ((*(byte *)((int)param_1 + 0x6f) & 1) == 0) {
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1,0,0);
    if (iVar3 != 0) {
      return -0x7ffbfff7;
    }
  }
  bVar1 = *(byte *)(param_1 + 0xb);
  if ((bVar1 & 1) != 0) {
    return -0x7ffbfff7;
  }
  *(byte *)(param_1 + 0xb) = bVar1;
  if ((bVar1 & 2) != 0) {
    return 0;
  }
  *(byte *)(param_1 + 0xb) = bVar1 | 3;
  (**(code **)(*(int *)param_1[0x1e] + 4))();
  uVar5 = 0;
  while( true ) {
    iVar3 = FUN_6622ff10(param_1);
    uVar5 = uVar5 + 1;
    if (((*(byte *)(param_1 + 0xb) & 1) == 0) || (iVar3 != 0)) break;
    if (param_1 == (int *)0xffffffcf) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)param_1 + 0x41);
    }
    if ((iVar4 < 1) || (199 < uVar5)) break;
  }
  (**(code **)(*(int *)param_1[0x1e] + 8))();
  iVar3 = FUN_6622d650(iVar3);
  if (((*(byte *)(param_1 + 0xb) & 1) != 0) &&
     (piVar2 = *(int **)((int)param_1 + 0x61), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2,0,*(undefined4 *)((int)param_1 + 0x59),0x32,0);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd;
  return iVar3;
}



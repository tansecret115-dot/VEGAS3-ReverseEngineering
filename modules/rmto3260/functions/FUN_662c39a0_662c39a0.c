/* Module: rmto3260.dll
   Function: FUN_662c39a0
   Address: 662c39a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c39a0(int param_1,uint param_2,undefined4 param_3,uint param_4,uint *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    iVar5 = -0x7ffbfff9;
  }
  uVar4 = param_2;
  if (-1 < iVar5) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      return -0x7ffbfc36;
    }
    if (*(int *)(iVar1 + 0x12) != 0) {
      iVar5 = -0x7ffbfffc;
    }
    if (-1 < iVar5) {
      uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x24))();
      iVar5 = (**(code **)(*(int *)(param_1 + -0x10) + 0x74))(param_1 + -0x10,param_2);
      if ((-1 < iVar5) && (uVar4 = *(ushort *)(param_2 + 2) - 0xd, param_4 < uVar4)) {
        (**(code **)(**(int **)(param_1 + 8) + 0x20))(uVar2,0);
        iVar5 = -0x7ffbfff3;
      }
    }
  }
  if (-1 < iVar5) {
    uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x28))(param_3,uVar4);
    if (uVar3 != uVar4) {
      return -0x7ffbff7f;
    }
    *param_5 = uVar4;
    iVar1 = *(int *)(param_1 + 0x3c);
    if (*(uint *)(iVar1 + 0xc) < (uint)*(ushort *)(param_2 + 2)) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      return iVar5;
    }
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) - (uint)*(ushort *)(param_2 + 2);
  }
  return iVar5;
}



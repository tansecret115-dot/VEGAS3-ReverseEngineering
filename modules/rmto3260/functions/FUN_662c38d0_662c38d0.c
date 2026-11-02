/* Module: rmto3260.dll
   Function: FUN_662c38d0
   Address: 662c38d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c38d0(int param_1,uint param_2,undefined4 param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x3c);
  if ((iVar2 == 0) || (*(int *)(param_1 + 8) == 0)) {
    iVar6 = -0x7ffbfff9;
  }
  uVar5 = param_2;
  if (-1 < iVar6) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      return -0x7ffbfc36;
    }
    if (*(int *)(iVar2 + 0x12) == 0) {
      iVar6 = -0x7ffbfffc;
    }
    if (-1 < iVar6) {
      uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x24))();
      iVar6 = (**(code **)(*(int *)(param_1 + -0x10) + 0x70))(param_1 + -0x10,param_2);
      if ((-1 < iVar6) && (uVar5 = *(ushort *)(param_2 + 2) - 0xc, param_4 < uVar5)) {
        (**(code **)(**(int **)(param_1 + 8) + 0x20))(uVar3,0);
        iVar6 = -0x7ffbfff3;
      }
    }
  }
  if (-1 < iVar6) {
    uVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x28))(param_3,uVar5);
    if (uVar4 != uVar5) {
      return -0x7ffbff7f;
    }
    *param_5 = uVar5;
    piVar1 = (int *)(*(int *)(param_1 + 0x3c) + 0xc);
    *piVar1 = *piVar1 - (uint)*(ushort *)(param_2 + 2);
  }
  return iVar6;
}



/* Module: rmto3260.dll
   Function: FUN_662cc5d0
   Address: 662cc5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cc5d0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = param_1;
  pbVar4 = *(byte **)(param_1 + 4);
  iVar7 = 0;
  if (pbVar4 == (byte *)0x0) {
    iVar7 = -0x7ffbfc3d;
  }
  pbVar6 = *(byte **)(param_1 + 8);
  if (pbVar6 == (byte *)0x0) {
    iVar7 = -0x7ffbfc3c;
  }
  if (-1 < iVar7) {
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_662cc61b:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_662cc620;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_662cc61b;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_662cc620:
    if (iVar5 == 0) {
      iVar7 = -0x7ffbfc3b;
    }
    if (-1 < iVar7) {
      iVar7 = (**(code **)(*(int *)(param_1 + -0x10) + 0x28))(param_1 + -0x10);
      if (-1 < iVar7) {
        iVar7 = (**(code **)(**(int **)(iVar3 + 0x14) + 0xc))(*(int **)(iVar3 + 0x14),&param_1);
      }
    }
  }
  piVar2 = *(int **)(iVar3 + 0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
  if (-1 < iVar7) {
    iVar7 = (**(code **)(*(int *)(iVar3 + -0x10) + 0x2c))(iVar3 + -0x10,param_1);
  }
  return iVar7;
}



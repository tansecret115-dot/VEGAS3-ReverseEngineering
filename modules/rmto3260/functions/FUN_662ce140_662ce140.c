/* Module: rmto3260.dll
   Function: FUN_662ce140
   Address: 662ce140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662ce140(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar5 = 0;
  pbVar3 = *(byte **)(param_1 + 4);
  if (pbVar3 == (byte *)0x0) {
    iVar5 = -0x7ffbfc3d;
  }
  pbVar6 = *(byte **)(param_1 + 8);
  if (pbVar6 == (byte *)0x0) {
    iVar5 = -0x7ffbfc3c;
  }
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_662ce187:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_662ce18c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_662ce187;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_662ce18c:
  if (iVar4 == 0) {
    iVar5 = -0x7ffbfc3b;
  }
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*(int *)(param_1 + -0x10) + 0x28))(param_1 + -0x10);
    if (-1 < iVar5) {
      iVar5 = (**(code **)(*(int *)(param_1 + -0x10) + 0x2c))(param_1 + -0x10);
      if (-1 < iVar5) {
        iVar5 = FUN_662ce2e0((void *)(param_1 + -0x10));
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    FUN_662f06c0(piVar2);
    operator_delete(piVar2);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return iVar5;
}



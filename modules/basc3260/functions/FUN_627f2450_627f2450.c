/* Module: basc3260.dll
   Function: FUN_627f2450
   Address: 627f2450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f2450(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  
  if ((-1 < param_2) && (param_4 != (int *)0x0)) {
    piVar2 = *(int **)(param_1 + 0x34);
    pbVar3 = (byte *)(**(code **)(*param_4 + 0x1c))(param_4);
    pbVar4 = (byte *)(**(code **)(*piVar2 + 0x1c))(piVar2);
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_627f249c:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_627f24a1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_627f249c;
      pbVar4 = pbVar4 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_627f24a1:
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 1;
      (**(code **)(**(int **)(param_1 + 0x40) + 0xc))(*(int **)(param_1 + 0x40),param_1 + -0x30);
      goto LAB_627f24d0;
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_627f24d0:
  piVar2 = *(int **)(param_1 + 0x34);
  uVar6 = (**(code **)(*piVar2 + 0x18))(piVar2);
  puVar7 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))(piVar2);
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  piVar2 = *(int **)(param_1 + 0x34);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  FUN_627f2260(param_1 + -0x30);
  return 0;
}



/* Module: aviplug.dll
   Function: FUN_5f9367d0
   Address: 5f9367d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9367d0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *local_4;
  
  uVar4 = *(uint *)(param_1 + 4) & 0xff000000;
  if ((uVar4 == 0) || ((uVar4 == 0x1000000 && ((*(uint *)(param_1 + 4) & 0xffffff) == 0)))) {
    iVar5 = *(int *)(param_1 + 0x424);
    if ((iVar5 != 0) && (puVar1 = *(undefined4 **)(iVar5 + 0x3e), puVar1 != (undefined4 *)0x0)) {
      local_4 = (int *)0x40;
      if ((*(int *)(iVar5 + 0x16) == 0) && (puVar1[8] != 0)) {
        local_4 = (int *)(puVar1[8] + 0x40);
      }
      puVar2 = (undefined2 *)(**(code **)(*param_2 + 0x20))(param_2,0x42,local_4);
      if (puVar2 == (undefined2 *)0x0) {
        return 0x8007000e;
      }
      *puVar2 = *(undefined2 *)puVar1;
      puVar2[1] = *(undefined2 *)((int)puVar1 + 2);
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 6) = 0x3fd00000;
      puVar8 = (undefined4 *)(puVar2 + 8);
      puVar7 = puVar1;
      for (iVar5 = 0xb; puVar7 = puVar7 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar8 = puVar8 + 1;
      }
      if ((*(int *)(*(int *)(unaff_EBX + 0x424) + 0x16) == 0) && (uVar4 = puVar1[8], uVar4 != 0)) {
        puVar7 = puVar1 + 0xc;
        puVar8 = (undefined4 *)(puVar2 + 0x20);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      (**(code **)(*local_4 + 0x24))(local_4,puVar1);
      *(undefined2 **)(*(int *)(unaff_EBX + 0x424) + 0x3e) = puVar2;
      *(int **)(*(int *)(unaff_EBX + 0x424) + 0x3a) = local_4;
    }
    if ((*(int *)(param_1 + 0x428) != 0) &&
       (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x428) + 0x94), puVar1 != (undefined4 *)0x0)) {
      piVar3 = (int *)(puVar1[10] + 0x40);
      piVar9 = piVar3;
      puVar2 = (undefined2 *)(**(code **)(*param_2 + 0x20))(param_2,0x42);
      if (puVar2 == (undefined2 *)0x0) {
        return 0x8007000e;
      }
      *puVar2 = *(undefined2 *)puVar1;
      puVar2[1] = *(undefined2 *)((int)puVar1 + 2);
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 6) = 0x3fd00000;
      puVar8 = (undefined4 *)(puVar2 + 8);
      puVar7 = puVar1;
      for (iVar5 = 0xb; puVar7 = puVar7 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar8 = puVar8 + 1;
      }
      uVar4 = puVar1[10];
      if (uVar4 != 0) {
        puVar7 = puVar1 + 0xc;
        puVar8 = (undefined4 *)(puVar2 + 0x20);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      (**(code **)(*piVar3 + 0x24))(piVar3,puVar1);
      *(undefined2 **)(*(int *)(unaff_ESI + 0x428) + 0x94) = puVar2;
      *(int **)(*(int *)(unaff_ESI + 0x428) + 0x90) = piVar9;
    }
  }
  return 0;
}



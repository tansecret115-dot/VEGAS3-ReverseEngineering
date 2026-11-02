/* Module: g2plug.dll
   Function: FUN_5f8043e0
   Address: 5f8043e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f8043e0(void *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  undefined4 *puVar9;
  int local_20;
  int *local_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar4 = FUN_5f804a90((int)param_1);
  if (puVar4 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  local_1c = (int *)0x0;
  local_20 = (**(code **)**(undefined4 **)((int)param_1 + 0x14))
                       (*(undefined4 **)((int)param_1 + 0x14),&DAT_5f869c80,&local_1c);
  if (local_20 < 0) {
    return local_20;
  }
  (**(code **)(*local_1c + 0x18))(local_1c,puVar4,param_2,DAT_5f8762a0);
  (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  if (local_20 < 0) {
    return local_20;
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  FUN_5f804ae0(param_1,*(int *)((int)param_1 + 0x1c));
  *(undefined4 **)((int)param_1 + 0x1c) = puVar4;
  puVar1 = (undefined2 *)puVar4[0x109];
  uVar2 = *(uint *)(puVar1 + 2);
  if (uVar2 < 0x5623) {
    if (((uVar2 == 0x5622) || (uVar2 == 8000)) || (uVar2 == 0x2b11)) goto LAB_5f8044fb;
  }
  else if (uVar2 == 0xac44) goto LAB_5f8044fb;
  uVar5 = puVar1[1];
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  else if (2 < uVar5) {
    uVar5 = 2;
  }
  puVar1[1] = uVar5;
  puVar1[6] = uVar5 * 2;
  *puVar1 = 1;
  *(undefined4 *)(puVar1 + 2) = 0xac44;
  puVar1[7] = 0x10;
  puVar1[8] = 0;
  *(uint *)(puVar1 + 4) = (uint)(ushort)(uVar5 * 2) * 0xac44;
LAB_5f8044fb:
  iVar8 = *(int *)(puVar4[0x109] + 0x3e);
  if (((iVar8 != 0) &&
      (iVar7 = *(int *)(*(int *)((int)param_1 + 0x1c) + 0x428), *(int *)(iVar7 + 0x48) != 0)) &&
     ((*(int *)(iVar8 + 300) != 0 && (*(int *)(iVar8 + 0x148) != -1)))) {
    if ((*(byte *)(iVar8 + 0x66b) & 3) == 0) {
      if (*(int *)(iVar8 + 0x3df) == 0) {
        iVar7 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x428) + 0x48);
        iStack_14 = *(int *)(iVar7 + 4);
        iStack_18 = *(int *)(iVar7 + 8);
      }
      else {
        iStack_14 = *(int *)(iVar8 + 999);
        iStack_18 = *(int *)(iVar8 + 0x3eb);
      }
      *(int **)(iVar8 + 0x674) = (int *)(iVar8 + 0x67c);
      uStack_10 = 0;
      uStack_c = 0;
      local_20 = FUN_5f80a4b0(*(uint *)(iVar8 + 0x138),(int *)(iVar8 + 0x67c),
                              *(uint *)(iVar8 + 0x678),(double *)&uStack_10);
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x1c) + 0x428);
      puVar4 = (undefined4 *)(iVar8 + 0x50);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(ulonglong *)(iVar8 + 0x60) = CONCAT44(uStack_c,uStack_10);
      *(undefined4 *)(iVar8 + 0x68) = 0;
      *(undefined4 *)(iVar8 + 0x70) = 0;
      *(undefined4 *)(iVar8 + 0x50) = 0x40;
      *(undefined4 *)(iVar8 + 0x54) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0x58) = 0;
      *(undefined4 *)(iVar8 + 0x5c) = 0;
      *(undefined4 *)(iVar8 + 0x6c) = 0x3ff00000;
      *(undefined4 *)(iVar8 + 0x74) = 0;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      *(undefined4 *)(iVar8 + 0x7c) = 0;
      *(undefined4 *)(iVar8 + 0x80) = 0;
      *(undefined4 *)(iVar8 + 0x84) = 0;
      *(undefined4 *)(iVar8 + 0x88) = 0;
      *(undefined4 *)(iVar8 + 0x8c) = 0;
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x1c) + 0x428);
      puVar4 = (undefined4 *)(iVar8 + 8);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(ulonglong *)(iVar8 + 0x18) = CONCAT44(uStack_c,uStack_10);
      *(undefined4 *)(iVar8 + 0x20) = 0;
      *(undefined4 *)(iVar8 + 0x28) = 0;
      *(undefined4 *)(iVar8 + 8) = 0x40;
      *(undefined4 *)(iVar8 + 0xc) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0x10) = 0;
      *(undefined4 *)(iVar8 + 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x24) = 0x3ff00000;
      *(undefined4 *)(iVar8 + 0x2c) = 0;
      *(undefined4 *)(iVar8 + 0x30) = 0;
      *(undefined4 *)(iVar8 + 0x34) = 0;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      *(undefined4 *)(iVar8 + 0x3c) = 0;
      *(undefined4 *)(iVar8 + 0x40) = 0;
      *(undefined4 *)(iVar8 + 0x44) = 0;
      iVar8 = iStack_14;
    }
    else {
      iVar3 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x428);
      iVar6 = *(int *)(iVar3 + 0x48);
      iVar8 = *(int *)(iVar6 + 4);
      iStack_18 = *(int *)(iVar6 + 8);
      puVar4 = (undefined4 *)(iVar3 + 0x50);
      puVar9 = (undefined4 *)(iVar7 + 0x50);
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x428) + 8);
      puVar9 = (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1c) + 0x428) + 8);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    FUN_5f81ee40(*(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x1c) + 0x428) + 0x48),0x1b,iVar8
                 ,iStack_18,(uint *)0x0,0,(int *)0x0);
    puVar4 = *(undefined4 **)(*(int *)((int)param_1 + 0x1c) + 0x428);
    puVar9 = (undefined4 *)*puVar4;
    if (puVar9 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar4[0x12];
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
    }
  }
  return local_20;
}



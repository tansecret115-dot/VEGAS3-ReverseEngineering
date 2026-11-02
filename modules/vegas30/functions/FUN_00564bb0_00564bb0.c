/* Module: vegas30.exe
   Function: FUN_00564bb0
   Address: 00564bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00564bb0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_004e6c90(0xa48);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x2c) = (-(uint)(param_3 != 0) & 3) + 0x6e2d;
    *(undefined1 **)(iVar1 + 0x20) = &LAB_00564760;
    *(undefined1 **)(iVar1 + 0x28) = &LAB_00563c20;
    *(undefined1 **)(iVar1 + 0x24) = &LAB_00564060;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffdf | 0x12;
    *(undefined4 *)(iVar1 + 0x18) = 7;
    puVar3 = param_1;
    puVar4 = (undefined4 *)(iVar1 + 0x30);
    for (iVar2 = 0x24c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)(iVar1 + 0x960);
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(iVar1 + 0xa28) = 0;
    *(int *)(iVar1 + 0xa34) = param_3;
    puVar3 = (undefined4 *)(iVar1 + 0xa3c);
    iVar2 = (**(code **)(*(int *)param_1[2] + 0x34))((int *)param_1[2],puVar3,0,0,0);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(int *)*puVar3 + 0x4c))((int *)*puVar3,(undefined4 *)(iVar1 + 0xa40));
      if (iVar2 < 0) {
        (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3);
        *puVar3 = 0;
        *(undefined4 *)(iVar1 + 0xa40) = 0;
      }
    }
    iVar1 = FUN_004e7190(iVar1);
    if (iVar1 < 0) {
      FUN_00532510(param_1);
    }
    return iVar1;
  }
  FUN_00532510(param_1);
  return -0x7ff8fff2;
}



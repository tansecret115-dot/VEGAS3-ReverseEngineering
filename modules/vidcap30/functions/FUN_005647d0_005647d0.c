/* Module: vidcap30.exe
   Function: FUN_005647d0
   Address: 005647d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005647d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x2a);
  *(undefined4 **)(param_1 + 0x1c9) = puVar1;
  *puVar1 = &LAB_00564920;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(int *)((int)puVar1 + 0x22) = *(int *)(param_1 + 0x96) * *(int *)(param_1 + 0x8e);
  if (*(int *)(param_1 + 0x13d) == 2) {
    puVar1[1] = &LAB_00564940;
    *(undefined1 **)((int)puVar1 + 9) = &LAB_00564bb0;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,*(undefined4 *)((int)puVar1 + 0x22));
    *(undefined4 *)((int)puVar1 + 0x1d) = uVar2;
    FUN_00564860(param_1);
    return;
  }
  puVar1[1] = FUN_00564a10;
  *(undefined1 **)((int)puVar1 + 9) = &LAB_00564a50;
  *(undefined4 *)((int)puVar1 + 0x1d) = 0;
  FUN_00564860(param_1);
  return;
}



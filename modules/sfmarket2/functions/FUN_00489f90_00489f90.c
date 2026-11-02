/* Module: sfmarket2.dll
   Function: FUN_00489f90
   Address: 00489f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489f90(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x2a);
  *(undefined4 **)(param_1 + 0x1c9) = puVar1;
  *puVar1 = &LAB_0048a0e0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(int *)((int)puVar1 + 0x22) = *(int *)(param_1 + 0x96) * *(int *)(param_1 + 0x8e);
  if (*(int *)(param_1 + 0x13d) == 2) {
    puVar1[1] = &LAB_0048a100;
    *(undefined1 **)((int)puVar1 + 9) = &LAB_0048a370;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,*(undefined4 *)((int)puVar1 + 0x22));
    *(undefined4 *)((int)puVar1 + 0x1d) = uVar2;
    FUN_0048a020(param_1);
    return;
  }
  puVar1[1] = FUN_0048a1d0;
  *(undefined1 **)((int)puVar1 + 9) = &LAB_0048a210;
  *(undefined4 *)((int)puVar1 + 0x1d) = 0;
  FUN_0048a020(param_1);
  return;
}



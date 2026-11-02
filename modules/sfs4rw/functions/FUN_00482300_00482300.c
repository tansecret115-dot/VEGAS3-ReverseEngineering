/* Module: sfs4rw.dll
   Function: FUN_00482300
   Address: 00482300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00482300(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x2a);
  *(undefined4 **)(param_1 + 0x1c9) = puVar1;
  *puVar1 = &LAB_00482450;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(int *)((int)puVar1 + 0x22) = *(int *)(param_1 + 0x96) * *(int *)(param_1 + 0x8e);
  if (*(int *)(param_1 + 0x13d) == 2) {
    puVar1[1] = &LAB_00482470;
    *(undefined1 **)((int)puVar1 + 9) = &LAB_004826e0;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,*(undefined4 *)((int)puVar1 + 0x22));
    *(undefined4 *)((int)puVar1 + 0x1d) = uVar2;
    FUN_00482390(param_1);
    return;
  }
  puVar1[1] = FUN_00482540;
  *(undefined1 **)((int)puVar1 + 9) = &LAB_00482580;
  *(undefined4 *)((int)puVar1 + 0x1d) = 0;
  FUN_00482390(param_1);
  return;
}



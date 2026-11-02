/* Module: stl2plg.dll
   Function: FUN_0045cd50
   Address: 0045cd50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045cd50(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x2a);
  *(undefined4 **)(param_1 + 0x1c9) = puVar1;
  *puVar1 = &LAB_0045cea0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(int *)((int)puVar1 + 0x22) = *(int *)(param_1 + 0x96) * *(int *)(param_1 + 0x8e);
  if (*(int *)(param_1 + 0x13d) == 2) {
    puVar1[1] = &LAB_0045cec0;
    *(undefined1 **)((int)puVar1 + 9) = &LAB_0045d130;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,*(undefined4 *)((int)puVar1 + 0x22));
    *(undefined4 *)((int)puVar1 + 0x1d) = uVar2;
    FUN_0045cde0(param_1);
    return;
  }
  puVar1[1] = FUN_0045cf90;
  *(undefined1 **)((int)puVar1 + 9) = &LAB_0045cfd0;
  *(undefined4 *)((int)puVar1 + 0x1d) = 0;
  FUN_0045cde0(param_1);
  return;
}



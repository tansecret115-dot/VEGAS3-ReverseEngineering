/* Module: vidcap30.exe
   Function: FUN_00553b80
   Address: 00553b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553b80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x18);
  *(undefined4 **)(param_1 + 0x179) = puVar1;
  *puVar1 = FUN_00553be0;
  *(code **)(*(int *)(param_1 + 0x179) + 4) = FUN_00553cc0;
  *(code **)(*(int *)(param_1 + 0x179) + 8) = FUN_00553e30;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0xc) = &LAB_005540a0;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0x10) = &LAB_00554320;
  *(code **)(*(int *)(param_1 + 0x179) + 0x14) = FUN_00554340;
  return;
}



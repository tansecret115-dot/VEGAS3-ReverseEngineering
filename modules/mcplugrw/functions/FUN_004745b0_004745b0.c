/* Module: mcplugrw.dll
   Function: FUN_004745b0
   Address: 004745b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004745b0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x18);
  *(undefined4 **)(param_1 + 0x179) = puVar1;
  *puVar1 = FUN_00474610;
  *(code **)(*(int *)(param_1 + 0x179) + 4) = FUN_004746f0;
  *(code **)(*(int *)(param_1 + 0x179) + 8) = FUN_00474860;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0xc) = &LAB_00474ad0;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0x10) = &LAB_00474d50;
  *(code **)(*(int *)(param_1 + 0x179) + 0x14) = FUN_00474d70;
  return;
}



/* Module: sfmarket2.dll
   Function: FUN_0047cda0
   Address: 0047cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047cda0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x18);
  *(undefined4 **)(param_1 + 0x179) = puVar1;
  *puVar1 = FUN_0047ce00;
  *(code **)(*(int *)(param_1 + 0x179) + 4) = FUN_0047cee0;
  *(code **)(*(int *)(param_1 + 0x179) + 8) = FUN_0047d050;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0xc) = &LAB_0047d2c0;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0x10) = &LAB_0047d540;
  *(code **)(*(int *)(param_1 + 0x179) + 0x14) = FUN_0047d560;
  return;
}



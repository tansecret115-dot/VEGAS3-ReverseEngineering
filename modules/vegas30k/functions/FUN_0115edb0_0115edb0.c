/* Module: vegas30k.dll
   Function: FUN_0115edb0
   Address: 0115edb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115edb0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x18);
  *(undefined4 **)(param_1 + 0x179) = puVar1;
  *puVar1 = FUN_0115ee10;
  *(code **)(*(int *)(param_1 + 0x179) + 4) = FUN_0115eef0;
  *(code **)(*(int *)(param_1 + 0x179) + 8) = FUN_0115f060;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0xc) = &LAB_0115f2d0;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0x10) = &LAB_0115f550;
  *(code **)(*(int *)(param_1 + 0x179) + 0x14) = FUN_0115f570;
  return;
}



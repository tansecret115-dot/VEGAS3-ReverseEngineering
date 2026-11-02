/* Module: sfmarket2.dll
   Function: FUN_00459000
   Address: 00459000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459000(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x13);
  *(undefined4 **)(param_1 + 0x1b9) = puVar1;
  *puVar1 = FUN_004592f0;
  puVar1[1] = FUN_00459590;
  puVar1[2] = FUN_00459040;
  puVar1[3] = &LAB_004592d0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  return;
}



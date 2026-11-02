/* Module: mcplugrw.dll
   Function: FUN_00450810
   Address: 00450810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450810(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x13);
  *(undefined4 **)(param_1 + 0x1b9) = puVar1;
  *puVar1 = FUN_00450b00;
  puVar1[1] = FUN_00450da0;
  puVar1[2] = FUN_00450850;
  puVar1[3] = &LAB_00450ae0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  return;
}



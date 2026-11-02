/* Module: vegas30k.dll
   Function: FUN_0115bbc0
   Address: 0115bbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115bbc0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x13);
  *(undefined4 **)(param_1 + 0x1b9) = puVar1;
  *puVar1 = FUN_0115beb0;
  puVar1[1] = FUN_0115c150;
  puVar1[2] = FUN_0115bc00;
  puVar1[3] = &LAB_0115be90;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  return;
}



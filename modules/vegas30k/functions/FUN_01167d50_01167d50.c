/* Module: vegas30k.dll
   Function: FUN_01167d50
   Address: 01167d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01167d50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x16);
  *(undefined4 **)(param_1 + 0x1a9) = puVar1;
  *puVar1 = FUN_01168000;
  puVar1[1] = &LAB_01168160;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_01167d80(param_1);
  return;
}



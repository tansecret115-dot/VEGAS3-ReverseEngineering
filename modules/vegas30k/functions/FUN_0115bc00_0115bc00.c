/* Module: vegas30k.dll
   Function: FUN_0115bc00
   Address: 0115bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115bc00(int param_1)

{
  FUN_0115bc40(param_1);
  FUN_0115bde0(param_1);
  (*(code *)**(undefined4 **)(param_1 + 0x1c1))(param_1);
  (*(code *)**(undefined4 **)(param_1 + 0x1b1))(param_1);
  **(undefined4 **)(param_1 + 0x1b9) = *(undefined4 *)(*(int *)(param_1 + 0x1b1) + 4);
  return;
}



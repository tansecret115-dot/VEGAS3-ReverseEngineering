/* Module: vidcap30.exe
   Function: FUN_005509d0
   Address: 005509d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005509d0(int param_1)

{
  FUN_00550a10(param_1);
  FUN_00550bb0(param_1);
  (*(code *)**(undefined4 **)(param_1 + 0x1c1))(param_1);
  (*(code *)**(undefined4 **)(param_1 + 0x1b1))(param_1);
  **(undefined4 **)(param_1 + 0x1b9) = *(undefined4 *)(*(int *)(param_1 + 0x1b1) + 4);
  return;
}



/* Module: vegas30.exe
   Function: FUN_0053c650
   Address: 0053c650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053c650(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_1 + 0x394) = *(int *)(param_2 + 0x10) + -6;
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0xac4);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0xacc);
  *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x394) - *(int *)(param_1 + 0x38c);
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x390);
  return;
}



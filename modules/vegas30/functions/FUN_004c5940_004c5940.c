/* Module: vegas30.exe
   Function: FUN_004c5940
   Address: 004c5940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c5940(int param_1,int param_2)

{
  int iVar1;
  
  FUN_0045f230(param_1,param_1 + 0x810);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10) + -5;
  *(int *)(param_1 + 0x394) = iVar1;
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0xac4);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0xacc);
  *(int *)(param_1 + 0x39c) = iVar1 - *(int *)(param_1 + 0x38c);
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x390);
  return;
}



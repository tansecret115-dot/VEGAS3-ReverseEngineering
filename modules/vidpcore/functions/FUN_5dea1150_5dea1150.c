/* Module: vidpcore.dll
   Function: FUN_5dea1150
   Address: 5dea1150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5dea1150(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)(param_2 + 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  return;
}



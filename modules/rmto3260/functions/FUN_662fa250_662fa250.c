/* Module: rmto3260.dll
   Function: FUN_662fa250
   Address: 662fa250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662fa250(int param_1)

{
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10);
  (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int *)(param_1 + 0x18),0);
  return;
}



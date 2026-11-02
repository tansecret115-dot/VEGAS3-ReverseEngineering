/* Module: mp3plug.dll
   Function: FUN_5f6c9710
   Address: 5f6c9710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c9710(int param_1)

{
  FUN_5f6c9780();
  *(int *)(param_1 + 0xb0e) = param_1 + 0x8a;
  *(int *)(param_1 + 0xb26) = param_1 + 0xa72;
  *(undefined ***)(param_1 + 0xb16) = &PTR_DAT_5f73e7c8;
  *(int *)(param_1 + 0xb1a) = param_1 + 0x97e;
  *(undefined ***)(param_1 + 0xb22) = &PTR_DAT_5f73e7e0;
  *(undefined **)(param_1 + 0xb2e) = &DAT_5f73e7f8;
  *(undefined2 *)(param_1 + 0x16ab) = 0;
  *(undefined4 *)(param_1 + 0x16ad) = 0;
  *(undefined4 *)(param_1 + 0x16a7) = 8;
  FUN_5f6c9790(param_1);
  return;
}



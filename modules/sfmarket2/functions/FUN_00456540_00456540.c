/* Module: sfmarket2.dll
   Function: FUN_00456540
   Address: 00456540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456540(int param_1)

{
  FUN_004565b0();
  *(int *)(param_1 + 0xb0e) = param_1 + 0x8a;
  *(int *)(param_1 + 0xb26) = param_1 + 0xa72;
  *(undefined ***)(param_1 + 0xb16) = &PTR_DAT_004a87e0;
  *(int *)(param_1 + 0xb1a) = param_1 + 0x97e;
  *(undefined ***)(param_1 + 0xb22) = &PTR_DAT_004a87f8;
  *(undefined **)(param_1 + 0xb2e) = &DAT_004a8810;
  *(undefined2 *)(param_1 + 0x16ab) = 0;
  *(undefined4 *)(param_1 + 0x16ad) = 0;
  *(undefined4 *)(param_1 + 0x16a7) = 8;
  FUN_004565c0(param_1);
  return;
}



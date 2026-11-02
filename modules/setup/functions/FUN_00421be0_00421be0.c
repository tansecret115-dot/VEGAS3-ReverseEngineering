/* Module: Setup.exe
   Function: FUN_00421be0
   Address: 00421be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421be0(int param_1)

{
  FUN_00421c50();
  *(int *)(param_1 + 0xb0e) = param_1 + 0x8a;
  *(int *)(param_1 + 0xb26) = param_1 + 0xa72;
  *(undefined ***)(param_1 + 0xb16) = &PTR_DAT_004444b0;
  *(int *)(param_1 + 0xb1a) = param_1 + 0x97e;
  *(undefined ***)(param_1 + 0xb22) = &PTR_DAT_004444c8;
  *(undefined **)(param_1 + 0xb2e) = &DAT_004444e0;
  *(undefined2 *)(param_1 + 0x16ab) = 0;
  *(undefined4 *)(param_1 + 0x16ad) = 0;
  *(undefined4 *)(param_1 + 0x16a7) = 8;
  FUN_00421c60(param_1);
  return;
}



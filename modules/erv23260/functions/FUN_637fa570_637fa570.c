/* Module: erv23260.dll
   Function: FUN_637fa570
   Address: 637fa570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637fa570(int param_1)

{
  FUN_637fd1f0(param_1);
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_637ff9f0(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}



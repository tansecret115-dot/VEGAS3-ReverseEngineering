/* Module: erv23260.dll
   Function: FUN_637f7b70
   Address: 637f7b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f7b70(int param_1)

{
  if (*(void **)(param_1 + 0x1aec) != (void *)0x0) {
    FUN_637f1080(*(void **)(param_1 + 0x1aec));
  }
  *(undefined4 *)(param_1 + 0x1aec) = 0;
  FUN_637f7aa0(param_1);
  return;
}



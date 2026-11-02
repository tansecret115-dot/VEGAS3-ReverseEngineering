/* Module: auth3260.dll
   Function: FUN_627a1740
   Address: 627a1740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627a1740(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    FUN_627a17f0(*(void **)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_627a1800(*(void **)(param_1 + 8),*(undefined4 *)(param_1 + 4));
  }
  return;
}



/* Module: rmto3260.dll
   Function: FUN_662f6cb0
   Address: 662f6cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f6cb0(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 0x47f) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x47f));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x47f) = 0;
  return;
}



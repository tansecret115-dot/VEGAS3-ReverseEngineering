/* Module: rmto3260.dll
   Function: FUN_662d5720
   Address: 662d5720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662d5720(int param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(FILE **)(param_1 + 4) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}



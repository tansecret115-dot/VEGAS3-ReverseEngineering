/* Module: pncrt.dll
   Function: FUN_78013870
   Address: 78013870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78013870(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_78042508)) {
    free(*(undefined **)(param_1 + 0xc));
    free(*(void **)(param_1 + 0x10));
    free(*(void **)(param_1 + 0x14));
    free(*(void **)(param_1 + 0x18));
    free(*(void **)(param_1 + 0x1c));
    free(*(void **)(param_1 + 0x20));
    free(*(void **)(param_1 + 0x24));
  }
  return;
}



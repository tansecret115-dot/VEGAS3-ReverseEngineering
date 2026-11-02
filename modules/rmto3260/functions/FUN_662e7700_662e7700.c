/* Module: rmto3260.dll
   Function: FUN_662e7700
   Address: 662e7700
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662e7700(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
  }
  return;
}



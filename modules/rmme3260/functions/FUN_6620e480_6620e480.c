/* Module: rmme3260.dll
   Function: FUN_6620e480
   Address: 6620e480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6620e480(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
  }
  return;
}



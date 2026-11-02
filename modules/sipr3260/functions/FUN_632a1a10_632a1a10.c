/* Module: sipr3260.dll
   Function: FUN_632a1a10
   Address: 632a1a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_632a1a10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_632a4098;
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete((void *)param_1[0x2b]);
  }
  return;
}



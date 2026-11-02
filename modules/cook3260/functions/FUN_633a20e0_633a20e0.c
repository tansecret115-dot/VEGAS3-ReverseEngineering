/* Module: cook3260.dll
   Function: FUN_633a20e0
   Address: 633a20e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a20e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_633a80a8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  return;
}



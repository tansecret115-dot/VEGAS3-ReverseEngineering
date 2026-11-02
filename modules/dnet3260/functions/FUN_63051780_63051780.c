/* Module: dnet3260.dll
   Function: FUN_63051780
   Address: 63051780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63051780(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_63054098;
  if ((void *)param_1[0x7f] != (void *)0x0) {
    operator_delete((void *)param_1[0x7f]);
  }
  return;
}



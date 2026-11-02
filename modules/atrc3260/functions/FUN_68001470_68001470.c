/* Module: atrc3260.dll
   Function: FUN_68001470
   Address: 68001470
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_68001470(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_68004098;
  if ((void *)param_1[0x75] != (void *)0x0) {
    operator_delete((void *)param_1[0x75]);
  }
  return;
}



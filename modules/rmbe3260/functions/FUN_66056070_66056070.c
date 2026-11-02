/* Module: rmbe3260.dll
   Function: FUN_66056070
   Address: 66056070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66056070(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068a38;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Module: aifplug.dll
   Function: FUN_5fbd5970
   Address: 5fbd5970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd5970(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5fbff6fc;
  param_1[1] = &PTR_LAB_5fbff6ec;
  FUN_5fbd5a20((int)param_1);
  FUN_5fbd59e0((int)param_1);
  if (param_1[0x89] != 0) {
    FUN_5fbd58e0((void *)param_1[2],param_1[0x89]);
  }
  return;
}



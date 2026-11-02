/* Module: oggplug.dll
   Function: FUN_00405160
   Address: 00405160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00405160(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00447890;
  param_1[1] = &PTR_LAB_00447880;
  FUN_00405190((int)param_1);
  if (param_1[0x46] != 0) {
    FUN_00404bb0((void *)param_1[0x47],param_1[0x46]);
  }
  return;
}



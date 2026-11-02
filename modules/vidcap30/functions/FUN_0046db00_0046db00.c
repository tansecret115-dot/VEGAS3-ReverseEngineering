/* Module: vidcap30.exe
   Function: FUN_0046db00
   Address: 0046db00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046db00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00593434;
  param_1[0x12] = &PTR_FUN_005933d8;
  param_1[0x15] = &PTR_FUN_00593390;
  param_1[0x16] = &PTR_LAB_0059337c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  FUN_00583ce0();
  return;
}



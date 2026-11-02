/* Module: vidcap30.exe
   Function: FUN_0046d680
   Address: 0046d680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046d680(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00593354;
  param_1[0x12] = &PTR_FUN_005932f8;
  param_1[0x15] = &PTR_FUN_005932b0;
  param_1[0x16] = &PTR_LAB_0059329c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  FUN_00583ce0();
  return;
}



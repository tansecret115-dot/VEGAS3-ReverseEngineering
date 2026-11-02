/* Module: sfmarket2.dll
   Function: FUN_0040f630
   Address: 0040f630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040f630(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00495f84;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((HMODULE)param_1[0xd] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[0xd]);
    param_1[0xd] = 0;
  }
  if ((int *)param_1[8] != (int *)0x0) {
    FUN_00411010((int *)param_1[8]);
    param_1[8] = 0;
  }
  if ((int *)param_1[9] != (int *)0x0) {
    FUN_00411010((int *)param_1[9]);
    param_1[9] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



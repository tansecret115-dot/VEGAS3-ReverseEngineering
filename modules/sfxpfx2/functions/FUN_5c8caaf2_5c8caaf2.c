/* Module: sfxpfx2.dll
   Function: FUN_5c8caaf2
   Address: 5c8caaf2
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8caaf2(int param_1)

{
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))(1);
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0xc))(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  FUN_5c8c81a9(param_1);
  return;
}



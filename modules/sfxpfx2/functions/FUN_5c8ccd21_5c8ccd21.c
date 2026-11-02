/* Module: sfxpfx2.dll
   Function: FUN_5c8ccd21
   Address: 5c8ccd21
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5c8ccd21(int param_1)

{
  FUN_5c8ccc88((void *)(param_1 + 4),1);
  FUN_5c8ccc88((void *)(param_1 + 8),0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



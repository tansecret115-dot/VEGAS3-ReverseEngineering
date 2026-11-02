/* Module: rmbe3260.dll
   Function: FUN_6604ef20
   Address: 6604ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604ef20(int param_1)

{
  LARGE_INTEGER local_c;
  
  if (*(int *)(*(int *)(param_1 + 0x75) + 4) != 0) {
    QueryPerformanceCounter(&local_c);
    *(DWORD *)(param_1 + 0x6d) = local_c.s.LowPart;
    *(LONG *)(param_1 + 0x71) = local_c.s.HighPart;
    FUN_6604f020(*(void **)(param_1 + 0x75),param_1,*(undefined4 *)(param_1 + 0x65),
                 *(undefined4 *)(param_1 + 0x69),local_c.s.LowPart,local_c.s.HighPart);
  }
  return;
}



/* Module: rmbe3260.dll
   Function: FUN_6604eef0
   Address: 6604eef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604eef0(int param_1)

{
  LARGE_INTEGER local_c;
  
  if (*(int *)(*(int *)(param_1 + 0x75) + 4) != 0) {
    QueryPerformanceCounter(&local_c);
    *(DWORD *)(param_1 + 0x65) = local_c.s.LowPart;
    *(LONG *)(param_1 + 0x69) = local_c.s.HighPart;
  }
  return;
}



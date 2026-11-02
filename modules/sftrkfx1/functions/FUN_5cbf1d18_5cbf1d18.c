/* Module: sftrkfx1.dll
   Function: FUN_5cbf1d18
   Address: 5cbf1d18
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbf1d18(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



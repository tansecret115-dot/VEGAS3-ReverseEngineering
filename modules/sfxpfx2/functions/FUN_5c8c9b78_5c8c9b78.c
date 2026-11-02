/* Module: sfxpfx2.dll
   Function: FUN_5c8c9b78
   Address: 5c8c9b78
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8c9b78(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



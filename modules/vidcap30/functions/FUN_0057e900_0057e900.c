/* Module: vidcap30.exe
   Function: FUN_0057e900
   Address: 0057e900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057e900(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x14);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



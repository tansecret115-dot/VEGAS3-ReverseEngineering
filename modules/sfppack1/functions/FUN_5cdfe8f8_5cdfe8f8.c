/* Module: sfppack1.dll
   Function: FUN_5cdfe8f8
   Address: 5cdfe8f8
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfe8f8(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



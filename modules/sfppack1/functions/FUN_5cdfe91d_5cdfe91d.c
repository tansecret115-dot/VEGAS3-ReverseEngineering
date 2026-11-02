/* Module: sfppack1.dll
   Function: FUN_5cdfe91d
   Address: 5cdfe91d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfe91d(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



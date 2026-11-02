/* Module: sfppack2.dll
   Function: FUN_5cd3d778
   Address: 5cd3d778
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd3d778(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



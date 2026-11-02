/* Module: sfppack3.dll
   Function: FUN_5cc74288
   Address: 5cc74288
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc74288(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



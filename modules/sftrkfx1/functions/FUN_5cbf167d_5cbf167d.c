/* Module: sftrkfx1.dll
   Function: FUN_5cbf167d
   Address: 5cbf167d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbf167d(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 100) = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



/* Module: sfppack2.dll
   Function: FUN_5cd3d0dd
   Address: 5cd3d0dd
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd3d0dd(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 100) = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



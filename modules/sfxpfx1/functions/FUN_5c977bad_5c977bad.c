/* Module: sfxpfx1.dll
   Function: FUN_5c977bad
   Address: 5c977bad
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c977bad(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 100) = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



/* Module: sfppack3.dll
   Function: FUN_5cc73bed
   Address: 5cc73bed
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc73bed(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 100) = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



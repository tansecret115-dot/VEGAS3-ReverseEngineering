/* Module: vidcap30.exe
   Function: FUN_0057f900
   Address: 0057f900
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_0057f900(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0xcc);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  return iVar1 != 0;
}



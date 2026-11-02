/* Module: sfmarket2.dll
   Function: FUN_0042e5c0
   Address: 0042e5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0042e5c0(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return iVar1;
}



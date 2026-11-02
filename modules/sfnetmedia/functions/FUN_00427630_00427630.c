/* Module: sfnetmedia.dll
   Function: FUN_00427630
   Address: 00427630
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00427630(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return iVar1;
}



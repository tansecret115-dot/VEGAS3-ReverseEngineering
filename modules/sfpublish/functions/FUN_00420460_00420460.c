/* Module: sfpublish.dll
   Function: FUN_00420460
   Address: 00420460
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00420460(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return iVar1;
}



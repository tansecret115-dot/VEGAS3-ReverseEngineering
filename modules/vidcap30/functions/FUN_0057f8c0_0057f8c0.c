/* Module: vidcap30.exe
   Function: FUN_0057f8c0
   Address: 0057f8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057f8c0(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0xcc) + -1;
  *(int *)(param_1 + 0xcc) = iVar1;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    FUN_0057f6e0();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  return;
}



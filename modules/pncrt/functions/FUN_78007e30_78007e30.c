/* Module: pncrt.dll
   Function: FUN_78007e30
   Address: 78007e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78007e30(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_78007100(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,0);
  return;
}



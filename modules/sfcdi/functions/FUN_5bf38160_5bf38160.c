/* Module: sfcdi.dll
   Function: FUN_5bf38160
   Address: 5bf38160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf38160(int param_1)

{
  HANDLE pvVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0x20) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      return 0;
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return 1;
}



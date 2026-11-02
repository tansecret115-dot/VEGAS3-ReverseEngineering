/* Module: sfcdi.dll
   Function: FUN_5bf3e060
   Address: 5bf3e060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3e060(int *param_1)

{
  FUN_5bf3ce50((int)param_1,(LPCSTR)0x0);
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_5bf3dfc0((int)param_1,*param_1);
      FUN_5bf2b040((int *)param_1[1]);
      FUN_5bf2b040(*(int **)(*param_1 + 0x214));
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x95));
      free((void *)*param_1);
    }
    free(param_1);
  }
  return;
}



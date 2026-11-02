/* Module: sfcdi.dll
   Function: FUN_5bf2c090
   Address: 5bf2c090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2c090(int *param_1)

{
  int *piVar1;
  HANDLE pvVar2;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if (*param_1 == 0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *param_1 = (int)pvVar2;
  }
  piVar1 = param_1 + 8;
  param_1[7] = 0;
  param_1[9] = (int)piVar1;
  *piVar1 = (int)piVar1;
  return 1;
}



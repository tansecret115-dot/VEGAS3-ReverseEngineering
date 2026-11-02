/* Module: sfcdi.dll
   Function: FUN_5bf2c120
   Address: 5bf2c120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf2c120(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[7] = param_1[7] + 1;
  *param_2 = (int)(param_1 + 8);
  puVar1 = (undefined4 *)param_1[9];
  param_2[1] = (int)puVar1;
  *puVar1 = param_2;
  param_1[9] = param_2;
  if (((int *)param_1[8] == param_2) && ((HANDLE)*param_1 != (HANDLE)0x0)) {
    SetEvent((HANDLE)*param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



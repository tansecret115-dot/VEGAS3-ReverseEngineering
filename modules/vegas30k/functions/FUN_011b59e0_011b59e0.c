/* Module: vegas30k.dll
   Function: FUN_011b59e0
   Address: 011b59e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b59e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x4c];
  *param_1 = &PTR_LAB_011eb698;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x4c] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return;
}



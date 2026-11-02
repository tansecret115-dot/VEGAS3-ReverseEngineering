/* Module: vegas30k.dll
   Function: FUN_011b5d30
   Address: 011b5d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b5d30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x50];
  *param_1 = &PTR_LAB_011eb700;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x50] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return;
}



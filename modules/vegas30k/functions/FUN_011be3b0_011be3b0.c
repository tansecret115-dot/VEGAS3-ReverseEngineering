/* Module: vegas30k.dll
   Function: FUN_011be3b0
   Address: 011be3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011be3b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_011ebb04;
  if (param_1[0x1a9] != 0) {
    FUN_011948e0();
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f2));
  }
  piVar1 = (int *)param_1[0x18e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x18e] = 0;
  FUN_011992f0();
  return;
}



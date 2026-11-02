/* Module: vegas30k.dll
   Function: FUN_011a6280
   Address: 011a6280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a6280(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_011eaf04;
  FUN_011a6c70();
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[10] = 0;
  if ((void *)param_1[0x2b] != (void *)0x0) {
    free((void *)param_1[0x2b]);
  }
  param_1[0x2b] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



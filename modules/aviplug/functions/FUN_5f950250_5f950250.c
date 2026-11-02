/* Module: aviplug.dll
   Function: FUN_5f950250
   Address: 5f950250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f950250(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_5f9d89b0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  if ((LPVOID)param_1[7] != (LPVOID)0x0) {
    FUN_5f94fa90((LPVOID)param_1[7]);
    param_1[7] = 0;
  }
  if ((LPVOID)param_1[6] != (LPVOID)0x0) {
    FUN_5f94fa90((LPVOID)param_1[6]);
    param_1[6] = 0;
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}



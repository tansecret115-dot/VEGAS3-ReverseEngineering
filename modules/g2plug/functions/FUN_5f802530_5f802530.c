/* Module: g2plug.dll
   Function: FUN_5f802530
   Address: 5f802530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f802530(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_5f86a9d8;
  FUN_5f8025d0((int)param_1);
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



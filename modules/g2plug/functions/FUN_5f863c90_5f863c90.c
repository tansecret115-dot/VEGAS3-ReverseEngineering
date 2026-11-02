/* Module: g2plug.dll
   Function: FUN_5f863c90
   Address: 5f863c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f863c90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_LAB_5f872f3c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5f864590((int)param_1);
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  return;
}



/* Module: vegas30k.dll
   Function: FUN_0113eab0
   Address: 0113eab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0113eab0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_LAB_011e6cfc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_0113f3b0();
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  return;
}



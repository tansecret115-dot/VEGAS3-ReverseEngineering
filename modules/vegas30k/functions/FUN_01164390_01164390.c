/* Module: vegas30k.dll
   Function: FUN_01164390
   Address: 01164390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01164390(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_LAB_011e9108;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return;
}


